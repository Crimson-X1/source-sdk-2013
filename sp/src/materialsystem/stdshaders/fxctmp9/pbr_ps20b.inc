#include "shaderlib/cshader.h"
class pbr_ps20b_Static_Index
{
private:
	int m_nFLASHLIGHT;
#ifdef _DEBUG
	bool m_bFLASHLIGHT;
#endif
public:
	void SetFLASHLIGHT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nFLASHLIGHT = i;
#ifdef _DEBUG
		m_bFLASHLIGHT = true;
#endif
	}
	void SetFLASHLIGHT( bool i )
	{
		m_nFLASHLIGHT = i ? 1 : 0;
#ifdef _DEBUG
		m_bFLASHLIGHT = true;
#endif
	}
private:
	int m_nFLASHLIGHTDEPTHFILTERMODE;
#ifdef _DEBUG
	bool m_bFLASHLIGHTDEPTHFILTERMODE;
#endif
public:
	void SetFLASHLIGHTDEPTHFILTERMODE( int i )
	{
		Assert( i >= 0 && i <= 2 );
		m_nFLASHLIGHTDEPTHFILTERMODE = i;
#ifdef _DEBUG
		m_bFLASHLIGHTDEPTHFILTERMODE = true;
#endif
	}
	void SetFLASHLIGHTDEPTHFILTERMODE( bool i )
	{
		m_nFLASHLIGHTDEPTHFILTERMODE = i ? 1 : 0;
#ifdef _DEBUG
		m_bFLASHLIGHTDEPTHFILTERMODE = true;
#endif
	}
private:
	int m_nLIGHTMAPPED;
#ifdef _DEBUG
	bool m_bLIGHTMAPPED;
#endif
public:
	void SetLIGHTMAPPED( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nLIGHTMAPPED = i;
#ifdef _DEBUG
		m_bLIGHTMAPPED = true;
#endif
	}
	void SetLIGHTMAPPED( bool i )
	{
		m_nLIGHTMAPPED = i ? 1 : 0;
#ifdef _DEBUG
		m_bLIGHTMAPPED = true;
#endif
	}
private:
	int m_nEMISSIVE;
#ifdef _DEBUG
	bool m_bEMISSIVE;
#endif
public:
	void SetEMISSIVE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nEMISSIVE = i;
#ifdef _DEBUG
		m_bEMISSIVE = true;
#endif
	}
	void SetEMISSIVE( bool i )
	{
		m_nEMISSIVE = i ? 1 : 0;
#ifdef _DEBUG
		m_bEMISSIVE = true;
#endif
	}
private:
	int m_nPARALLAXOCCLUSION;
#ifdef _DEBUG
	bool m_bPARALLAXOCCLUSION;
#endif
public:
	void SetPARALLAXOCCLUSION( int i )
	{
		Assert( i >= 0 && i <= 0 );
		m_nPARALLAXOCCLUSION = i;
#ifdef _DEBUG
		m_bPARALLAXOCCLUSION = true;
#endif
	}
	void SetPARALLAXOCCLUSION( bool i )
	{
		m_nPARALLAXOCCLUSION = i ? 1 : 0;
#ifdef _DEBUG
		m_bPARALLAXOCCLUSION = true;
#endif
	}
private:
	int m_nWVT;
#ifdef _DEBUG
	bool m_bWVT;
#endif
public:
	void SetWVT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nWVT = i;
#ifdef _DEBUG
		m_bWVT = true;
#endif
	}
	void SetWVT( bool i )
	{
		m_nWVT = i ? 1 : 0;
#ifdef _DEBUG
		m_bWVT = true;
#endif
	}
private:
	int m_nHSV;
#ifdef _DEBUG
	bool m_bHSV;
#endif
public:
	void SetHSV( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nHSV = i;
#ifdef _DEBUG
		m_bHSV = true;
#endif
	}
	void SetHSV( bool i )
	{
		m_nHSV = i ? 1 : 0;
#ifdef _DEBUG
		m_bHSV = true;
#endif
	}
private:
	int m_nHSV_BLEND;
#ifdef _DEBUG
	bool m_bHSV_BLEND;
#endif
public:
	void SetHSV_BLEND( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nHSV_BLEND = i;
#ifdef _DEBUG
		m_bHSV_BLEND = true;
#endif
	}
	void SetHSV_BLEND( bool i )
	{
		m_nHSV_BLEND = i ? 1 : 0;
#ifdef _DEBUG
		m_bHSV_BLEND = true;
#endif
	}
private:
	int m_nPARALLAXCORRECT;
#ifdef _DEBUG
	bool m_bPARALLAXCORRECT;
#endif
public:
	void SetPARALLAXCORRECT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nPARALLAXCORRECT = i;
#ifdef _DEBUG
		m_bPARALLAXCORRECT = true;
#endif
	}
	void SetPARALLAXCORRECT( bool i )
	{
		m_nPARALLAXCORRECT = i ? 1 : 0;
#ifdef _DEBUG
		m_bPARALLAXCORRECT = true;
#endif
	}
private:
	int m_nBLENDTINTBYMRAOALPHA;
#ifdef _DEBUG
	bool m_bBLENDTINTBYMRAOALPHA;
#endif
public:
	void SetBLENDTINTBYMRAOALPHA( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nBLENDTINTBYMRAOALPHA = i;
#ifdef _DEBUG
		m_bBLENDTINTBYMRAOALPHA = true;
#endif
	}
	void SetBLENDTINTBYMRAOALPHA( bool i )
	{
		m_nBLENDTINTBYMRAOALPHA = i ? 1 : 0;
#ifdef _DEBUG
		m_bBLENDTINTBYMRAOALPHA = true;
#endif
	}
private:
	int m_nPARALLAXDITHER;
#ifdef _DEBUG
	bool m_bPARALLAXDITHER;
#endif
public:
	void SetPARALLAXDITHER( int i )
	{
		Assert( i >= 0 && i <= 0 );
		m_nPARALLAXDITHER = i;
#ifdef _DEBUG
		m_bPARALLAXDITHER = true;
#endif
	}
	void SetPARALLAXDITHER( bool i )
	{
		m_nPARALLAXDITHER = i ? 1 : 0;
#ifdef _DEBUG
		m_bPARALLAXDITHER = true;
#endif
	}
private:
	int m_nEMISSIVEFRESNEL;
#ifdef _DEBUG
	bool m_bEMISSIVEFRESNEL;
#endif
public:
	void SetEMISSIVEFRESNEL( int i )
	{
		Assert( i >= 0 && i <= 0 );
		m_nEMISSIVEFRESNEL = i;
#ifdef _DEBUG
		m_bEMISSIVEFRESNEL = true;
#endif
	}
	void SetEMISSIVEFRESNEL( bool i )
	{
		m_nEMISSIVEFRESNEL = i ? 1 : 0;
#ifdef _DEBUG
		m_bEMISSIVEFRESNEL = true;
#endif
	}
public:
	pbr_ps20b_Static_Index( )
	{
#ifdef _DEBUG
		m_bFLASHLIGHT = false;
#endif // _DEBUG
		m_nFLASHLIGHT = 0;
#ifdef _DEBUG
		m_bFLASHLIGHTDEPTHFILTERMODE = false;
#endif // _DEBUG
		m_nFLASHLIGHTDEPTHFILTERMODE = 0;
#ifdef _DEBUG
		m_bLIGHTMAPPED = false;
#endif // _DEBUG
		m_nLIGHTMAPPED = 0;
#ifdef _DEBUG
		m_bEMISSIVE = false;
#endif // _DEBUG
		m_nEMISSIVE = 0;
#ifdef _DEBUG
		m_bPARALLAXOCCLUSION = false;
#endif // _DEBUG
		m_nPARALLAXOCCLUSION = 0;
#ifdef _DEBUG
		m_bWVT = false;
#endif // _DEBUG
		m_nWVT = 0;
#ifdef _DEBUG
		m_bHSV = false;
#endif // _DEBUG
		m_nHSV = 0;
#ifdef _DEBUG
		m_bHSV_BLEND = false;
#endif // _DEBUG
		m_nHSV_BLEND = 0;
#ifdef _DEBUG
		m_bPARALLAXCORRECT = false;
#endif // _DEBUG
		m_nPARALLAXCORRECT = 0;
#ifdef _DEBUG
		m_bBLENDTINTBYMRAOALPHA = false;
#endif // _DEBUG
		m_nBLENDTINTBYMRAOALPHA = 0;
#ifdef _DEBUG
		m_bPARALLAXDITHER = false;
#endif // _DEBUG
		m_nPARALLAXDITHER = 0;
#ifdef _DEBUG
		m_bEMISSIVEFRESNEL = false;
#endif // _DEBUG
		m_nEMISSIVEFRESNEL = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllStaticVarsDefined = m_bFLASHLIGHT && m_bFLASHLIGHTDEPTHFILTERMODE && m_bLIGHTMAPPED && m_bEMISSIVE && m_bPARALLAXOCCLUSION && m_bWVT && m_bHSV && m_bHSV_BLEND && m_bPARALLAXCORRECT && m_bBLENDTINTBYMRAOALPHA && m_bPARALLAXDITHER && m_bEMISSIVEFRESNEL;
		Assert( bAllStaticVarsDefined );
#endif // _DEBUG
		return ( 40 * m_nFLASHLIGHT ) + ( 80 * m_nFLASHLIGHTDEPTHFILTERMODE ) + ( 240 * m_nLIGHTMAPPED ) + ( 480 * m_nEMISSIVE ) + ( 960 * m_nPARALLAXOCCLUSION ) + ( 960 * m_nWVT ) + ( 1920 * m_nHSV ) + ( 3840 * m_nHSV_BLEND ) + ( 7680 * m_nPARALLAXCORRECT ) + ( 15360 * m_nBLENDTINTBYMRAOALPHA ) + ( 30720 * m_nPARALLAXDITHER ) + ( 30720 * m_nEMISSIVEFRESNEL ) + 0;
	}
};
#define shaderStaticTest_pbr_ps20b psh_forgot_to_set_static_FLASHLIGHT + psh_forgot_to_set_static_FLASHLIGHTDEPTHFILTERMODE + psh_forgot_to_set_static_LIGHTMAPPED + psh_forgot_to_set_static_EMISSIVE + psh_forgot_to_set_static_PARALLAXOCCLUSION + psh_forgot_to_set_static_WVT + psh_forgot_to_set_static_HSV + psh_forgot_to_set_static_HSV_BLEND + psh_forgot_to_set_static_PARALLAXCORRECT + psh_forgot_to_set_static_BLENDTINTBYMRAOALPHA + psh_forgot_to_set_static_PARALLAXDITHER + psh_forgot_to_set_static_EMISSIVEFRESNEL + 0
class pbr_ps20b_Dynamic_Index
{
private:
	int m_nNUM_LIGHTS;
#ifdef _DEBUG
	bool m_bNUM_LIGHTS;
#endif
public:
	void SetNUM_LIGHTS( int i )
	{
		Assert( i >= 0 && i <= 4 );
		m_nNUM_LIGHTS = i;
#ifdef _DEBUG
		m_bNUM_LIGHTS = true;
#endif
	}
	void SetNUM_LIGHTS( bool i )
	{
		m_nNUM_LIGHTS = i ? 1 : 0;
#ifdef _DEBUG
		m_bNUM_LIGHTS = true;
#endif
	}
private:
	int m_nWRITE_DEPTH_TO_DESTALPHA;
#ifdef _DEBUG
	bool m_bWRITE_DEPTH_TO_DESTALPHA;
#endif
public:
	void SetWRITE_DEPTH_TO_DESTALPHA( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nWRITE_DEPTH_TO_DESTALPHA = i;
#ifdef _DEBUG
		m_bWRITE_DEPTH_TO_DESTALPHA = true;
#endif
	}
	void SetWRITE_DEPTH_TO_DESTALPHA( bool i )
	{
		m_nWRITE_DEPTH_TO_DESTALPHA = i ? 1 : 0;
#ifdef _DEBUG
		m_bWRITE_DEPTH_TO_DESTALPHA = true;
#endif
	}
private:
	int m_nFLASHLIGHTSHADOWS;
#ifdef _DEBUG
	bool m_bFLASHLIGHTSHADOWS;
#endif
public:
	void SetFLASHLIGHTSHADOWS( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nFLASHLIGHTSHADOWS = i;
#ifdef _DEBUG
		m_bFLASHLIGHTSHADOWS = true;
#endif
	}
	void SetFLASHLIGHTSHADOWS( bool i )
	{
		m_nFLASHLIGHTSHADOWS = i ? 1 : 0;
#ifdef _DEBUG
		m_bFLASHLIGHTSHADOWS = true;
#endif
	}
private:
	int m_nPIXELFOGTYPE;
#ifdef _DEBUG
	bool m_bPIXELFOGTYPE;
#endif
public:
	void SetPIXELFOGTYPE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nPIXELFOGTYPE = i;
#ifdef _DEBUG
		m_bPIXELFOGTYPE = true;
#endif
	}
	void SetPIXELFOGTYPE( bool i )
	{
		m_nPIXELFOGTYPE = i ? 1 : 0;
#ifdef _DEBUG
		m_bPIXELFOGTYPE = true;
#endif
	}
public:
	pbr_ps20b_Dynamic_Index()
	{
#ifdef _DEBUG
		m_bNUM_LIGHTS = false;
#endif // _DEBUG
		m_nNUM_LIGHTS = 0;
#ifdef _DEBUG
		m_bWRITE_DEPTH_TO_DESTALPHA = false;
#endif // _DEBUG
		m_nWRITE_DEPTH_TO_DESTALPHA = 0;
#ifdef _DEBUG
		m_bFLASHLIGHTSHADOWS = false;
#endif // _DEBUG
		m_nFLASHLIGHTSHADOWS = 0;
#ifdef _DEBUG
		m_bPIXELFOGTYPE = false;
#endif // _DEBUG
		m_nPIXELFOGTYPE = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllDynamicVarsDefined = m_bNUM_LIGHTS && m_bWRITE_DEPTH_TO_DESTALPHA && m_bFLASHLIGHTSHADOWS && m_bPIXELFOGTYPE;
		Assert( bAllDynamicVarsDefined );
#endif // _DEBUG
		return ( 1 * m_nNUM_LIGHTS ) + ( 5 * m_nWRITE_DEPTH_TO_DESTALPHA ) + ( 10 * m_nFLASHLIGHTSHADOWS ) + ( 20 * m_nPIXELFOGTYPE ) + 0;
	}
};
#define shaderDynamicTest_pbr_ps20b psh_forgot_to_set_dynamic_NUM_LIGHTS + psh_forgot_to_set_dynamic_WRITE_DEPTH_TO_DESTALPHA + psh_forgot_to_set_dynamic_FLASHLIGHTSHADOWS + psh_forgot_to_set_dynamic_PIXELFOGTYPE + 0
