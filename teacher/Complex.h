//////////////////////////////////////////////////////////////////////
// Complex.h
//
// ������������ CComplex �������ӿ�
//
// �ܳ�������, 2002/8
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMPLEX_H__C231AD4B_6F7F_4A30_84E7_D6036F926132__INCLUDED_)
#define AFX_COMPLEX_H__C231AD4B_6F7F_4A30_84E7_D6036F926132__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <math.h>

// ������
class CComplex  
{
	//
	// ���нӿں���
	//
public:

	//
	// ����������
	//

	CComplex();							// �������캯��
	CComplex(double dblX, double dblY);	// ָ��ֵ���캯��
	CComplex(const CComplex& other);	// �������캯��
	virtual ~CComplex() {};				// ��������

	//
	// ��������ʾ
	//

	void SetReal(double dblX);	// ָ��������ʵ��
	void SetImag(double dblY);	// ָ���������鲿
	double GetReal();			// ȡ������ʵ��
	double GetImag();			// ȡ�������鲿
	CString ToString() const;	// ������ת��Ϊ"a+bj"��ʽ���ַ���
	// ��"a,b"��ʽ���ַ�����ת��Ϊ��������aΪ������ʵ����bΪ�������鲿
	void FromString(CString s, const CString& sDelim = " ");	

	//
	// ��ѧ����
	//

	BOOL operator==(const CComplex& cpxX) const;
	BOOL operator!=(const CComplex& cpxX) const;
	CComplex& operator=(const CComplex& cpxX);
	CComplex operator+(const CComplex& cpxX) const;
	CComplex operator-(const CComplex& cpxX) const;
	CComplex operator*(const CComplex& cpxX) const;
	CComplex operator/(const CComplex& cpxX) const;
	double Abs() const;	// ������ģ

	//
	// ��������
	//

	void Root(int n, CComplex cpxR[]) const;		// �����ĸ�
	CComplex Pow(double dblW) const;				// ������ʵ��ָ��
	CComplex Pow(CComplex cpxW, int n = 0) const;	// �����ĸ���ָ��
	CComplex Log() const;							// �����Ķ���
	CComplex Sin() const;							// ����������
	CComplex Cos() const;							// ����������
	CComplex Tan() const;							// ����������

	//
	// ����������
	//
protected:
	double	m_dblX;		// ������ʵ��
	double	m_dblY;		// �������鲿

};

#endif // !defined(AFX_COMPLEX_H__C231AD4B_6F7F_4A30_84E7_D6036F926132__INCLUDED_)
