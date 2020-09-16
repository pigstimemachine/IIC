#ifndef __IIC_H
#define __IIC_H
#include "sys.h"
 /******SCL PA0 / SDA PA1*****************/ 	   		   
//IO��������
#define SDA_IN()  {GPIOA->CRL&=0XFFFFFF0F;GPIOA->CRL|=0x00000080;}   //IIC_SDA DIR
#define SDA_OUT() {GPIOA->CRL&=0XFFFFFF0F;GPIOA->CRL|=0x00000030;}   //IIC_SDA DIR

//IO��������	 
#define IIC_SCL    PAout(0) //SCL
#define IIC_SDA    PAout(1) //SDA	 
#define READ_SDA   PAin(1)  //����SDA  

//IIC���в�������
void IIC_Init(void);                //��ʼ��IIC��IO��				 
u8 IIC_Start(void);				//����IIC��ʼ�ź�
void IIC_Stop(void);	  			//����IICֹͣ�ź�
void IIC_Send_Byte(u8 txd);			//IIC����һ���ֽ�
u8 IIC_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
u8 IIC_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void IIC_Ack(void);					//IIC����ACK�ź�
void IIC_NAck(void);				//IIC������ACK�ź�

void IIC_Write_One_Byte(u8 daddr,u8 addr,u8 data);
u8 IIC_Read_One_Byte(u8 daddr,u8 addr);	

void I2C_WriteOneByte(u8 id, u16 write_address,u8 byte);
u8 I2C_ReadOneByte(u8 id, u16 read_address);
  
#endif
















