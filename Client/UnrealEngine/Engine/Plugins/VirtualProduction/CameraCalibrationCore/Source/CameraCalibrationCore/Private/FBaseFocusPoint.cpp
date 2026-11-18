// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 5

// StaticStruct @ 14d6793a0

UScriptStruct * __cdecl FBaseFocusPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBaseFocusPoint.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FBaseFocusPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBaseFocusPoint,(UObject *)pUVar1,
                         L"BaseFocusPoint");
  }
  return Z_Registration_Info_UScriptStruct_FBaseFocusPoint.OuterSingleton;
}

// ~FBaseFocusPoint @ 14d6abe80

void __thiscall FBaseFocusPoint::~FBaseFocusPoint(FBaseFocusPoint *this)

{
  return;
}

// GetFocus @ 14d6d3c50

float __thiscall FBaseFocusPoint::GetFocus(FBaseFocusPoint *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x2f,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetNumPoints @ 14d6d61a0

int __thiscall FBaseFocusPoint::GetNumPoints(FBaseFocusPoint *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x32,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetZoom @ 14d6dd000

float __thiscall FBaseFocusPoint::GetZoom(FBaseFocusPoint *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Tables\\BaseLensTable.h"
             ,0x35,L"Pure virtual not implemented (%s)");
  return 0.0;
}

