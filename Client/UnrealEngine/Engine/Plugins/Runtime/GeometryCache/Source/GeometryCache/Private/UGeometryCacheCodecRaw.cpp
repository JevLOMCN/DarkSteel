// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 8

// StaticClass @ 14c9ff420

UClass * __cdecl UGeometryCacheCodecRaw::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheCodecRaw.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheCodecRaw",
               &Z_Registration_Info_UClass_UGeometryCacheCodecRaw.InnerSingleton,
               StaticRegisterNativesUGeometryCacheCodecRaw,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCacheCodecRaw>,
               InternalVTableHelperCtorCaller<UGeometryCacheCodecRaw>,local_res8,
               UGeometryCacheCodecBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecRaw.InnerSingleton;
}

// UGeometryCacheCodecRaw @ 14ca07ad0

UGeometryCacheCodecRaw * __thiscall
UGeometryCacheCodecRaw::UGeometryCacheCodecRaw(UGeometryCacheCodecRaw *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UGeometryCacheCodecRaw__6B_;
  return this;
}

// UGeometryCacheCodecRaw @ 14ca07b10

UGeometryCacheCodecRaw * __thiscall
UGeometryCacheCodecRaw::UGeometryCacheCodecRaw
          (UGeometryCacheCodecRaw *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UGeometryCacheCodecRaw__6B_;
  return this;
}

// ~UGeometryCacheCodecRaw @ 14ca09610

void __thiscall UGeometryCacheCodecRaw::~UGeometryCacheCodecRaw(UGeometryCacheCodecRaw *this)

{
  this->_padding_ = (longlong)&___7UGeometryCacheCodecBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateRenderState @ 14ca11510

FGeometryCacheCodecRenderStateBase * __thiscall
UGeometryCacheCodecRaw::CreateRenderState(UGeometryCacheCodecRaw *this)

{
  FGeometryCacheCodecRenderStateBase *this_00;
  
  this_00 = ::operator_new(0x18);
  if (this_00 != (FGeometryCacheCodecRenderStateBase *)0x0) {
    FGeometryCacheCodecRenderStateBase::FGeometryCacheCodecRenderStateBase
              (this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    this_00->_padding_ = (longlong)&___7FGeometryCacheCodecRenderStateRaw__6B_;
    return this_00;
  }
  return (FGeometryCacheCodecRenderStateBase *)0x0;
}

// DecodeSingleFrame @ 14ca14430

bool __thiscall
UGeometryCacheCodecRaw::DecodeSingleFrame
          (UGeometryCacheCodecRaw *this,FGeometryCacheCodecDecodeArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  FGeometryCacheCodecRenderStateBase local_28;
  
  FGeometryCacheCodecRenderStateBase::FGeometryCacheCodecRenderStateBase
            (&local_28,(TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  local_28._padding_ = (longlong)&___7FGeometryCacheCodecRenderStateRaw__6B_;
  bVar2 = FGeometryCacheCodecRenderStateRaw::DecodeSingleFrame
                    ((FGeometryCacheCodecRenderStateRaw *)&local_28,param_1);
  local_28._padding_ = (longlong)&___7FGeometryCacheCodecRenderStateBase__6B_;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheCodecBase.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  if (local_28.TopologyRanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.TopologyRanges.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14ca1eba0

UClass * __cdecl UGeometryCacheCodecRaw::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheCodecRaw.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheCodecRaw",
               &Z_Registration_Info_UClass_UGeometryCacheCodecRaw.InnerSingleton,
               StaticRegisterNativesUGeometryCacheCodecRaw,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCacheCodecRaw>,
               InternalVTableHelperCtorCaller<UGeometryCacheCodecRaw>,local_res8,
               UGeometryCacheCodecBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecRaw.InnerSingleton;
}

// StaticRegisterNativesUGeometryCacheCodecRaw @ 14ca2ba00

void __cdecl UGeometryCacheCodecRaw::StaticRegisterNativesUGeometryCacheCodecRaw(void)

{
  return;
}

