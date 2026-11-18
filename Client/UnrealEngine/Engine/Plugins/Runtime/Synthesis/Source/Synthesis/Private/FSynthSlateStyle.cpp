// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 7

// StaticStruct @ 14f0a2e60

UScriptStruct * __cdecl FSynthSlateStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSynthSlateStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSynthSlateStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSynthSlateStyle,(UObject *)pUVar1,
                         L"SynthSlateStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSynthSlateStyle.OuterSingleton;
}

// FSynthSlateStyle @ 14f0b9190

FSynthSlateStyle * __thiscall FSynthSlateStyle::FSynthSlateStyle(FSynthSlateStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->SizeType = Small;
  this->ColorStyle = Light;
  this->_padding_ = (longlong)&___7FSynthSlateStyle__6B_;
  if (SynthSlateResources == (ISynthSlateResources *)0x0) {
    return this;
  }
  (**(code **)(SynthSlateResources->_padding_ + 8))();
  return this;
}

// ~FSynthSlateStyle @ 14f0bf930

void __thiscall FSynthSlateStyle::~FSynthSlateStyle(FSynthSlateStyle *this)

{
  this->_padding_ = (longlong)&___7FSynthSlateStyle__6B_;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// CreateSynthSlateResources @ 14f0d4020

ISynthSlateResources * __thiscall
FSynthSlateStyle::CreateSynthSlateResources(FSynthSlateStyle *this)

{
  return (ISynthSlateResources *)0x0;
}

// GetBrushForValue @ 14f0d8e60

FSlateBrush * __thiscall FSynthSlateStyle::GetBrushForValue(FSynthSlateStyle *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FSlateBrush *pFVar4;
  int iVar5;
  
  if (((0.0 <= param_1) && (param_1 <= __real_3f800000)) &&
     (SynthSlateResources != (ISynthSlateResources *)0x0)) {
    plVar3 = (longlong *)
             (**(code **)(SynthSlateResources->_padding_ + 0x10))
                       (SynthSlateResources,this->SizeType,this->ColorStyle);
    iVar5 = (int)((float)((int)plVar3[1] + -1) * param_1);
    if (iVar5 < (int)plVar3[1]) {
      if (iVar5 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FSlateBrush *)(*pcVar1)();
          return pFVar4;
        }
      }
      return *(FSlateBrush **)(*plVar3 + (longlong)iVar5 * 0x10);
    }
  }
  return (FSlateBrush *)0x0;
}

// GetDefault @ 14f0d9200

FSynthSlateStyle * __cdecl FSynthSlateStyle::GetDefault(void)

{
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
    ::Default._padding_ = (longlong)&___7FSynthSlateStyle__6B_;
    ::Default.SizeType = Small;
    ::Default.ColorStyle = Light;
    if (SynthSlateResources != (ISynthSlateResources *)0x0) {
      (**(code **)(SynthSlateResources->_padding_ + 8))();
    }
    atexit(`FSynthSlateStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&::_TSS0);
    return &::Default;
  }
  return &::Default;
}

// GetTypeName @ 14f0df180

FName __thiscall FSynthSlateStyle::GetTypeName(FSynthSlateStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

