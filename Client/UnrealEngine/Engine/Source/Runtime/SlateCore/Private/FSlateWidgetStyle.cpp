// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// StaticStruct @ 14241e2e0

UScriptStruct * __cdecl FSlateWidgetStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlateWidgetStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSlateWidgetStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlateWidgetStyle,(UObject *)pUVar1,
                         L"SlateWidgetStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSlateWidgetStyle.OuterSingleton;
}

// FSlateWidgetStyle @ 1424eb310

FSlateWidgetStyle * __thiscall FSlateWidgetStyle::FSlateWidgetStyle(FSlateWidgetStyle *this)

{
  *this = (FSlateWidgetStyle)&___7FSlateWidgetStyle__6B_;
  return this;
}

// ~FSlateWidgetStyle @ 1424ecc80

void __thiscall FSlateWidgetStyle::~FSlateWidgetStyle(FSlateWidgetStyle *this)

{
  *this = (FSlateWidgetStyle)&___7FSlateWidgetStyle__6B_;
  return;
}

// GetResources @ 14250f120

void __thiscall
FSlateWidgetStyle::GetResources
          (FSlateWidgetStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetTypeName @ 14250fa10

FName __thiscall FSlateWidgetStyle::GetTypeName(FSlateWidgetStyle *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

