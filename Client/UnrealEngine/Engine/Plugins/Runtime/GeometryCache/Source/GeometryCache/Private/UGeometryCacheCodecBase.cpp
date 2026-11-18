// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 11

// StaticClass @ 14c9ff4e0

UClass * __cdecl UGeometryCacheCodecBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheCodecBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheCodecBase",
               &Z_Registration_Info_UClass_UGeometryCacheCodecBase.InnerSingleton,
               StaticRegisterNativesUGeometryCacheCodecBase,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCacheCodecBase>,
               InternalVTableHelperCtorCaller<UGeometryCacheCodecBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecBase.InnerSingleton;
}

// UGeometryCacheCodecBase @ 14ca07a50

UGeometryCacheCodecBase * __thiscall
UGeometryCacheCodecBase::UGeometryCacheCodecBase
          (UGeometryCacheCodecBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryCacheCodecBase__6B_;
  (this->TopologyRanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TopologyRanges).ArrayNum = 0;
  (this->TopologyRanges).ArrayMax = 0;
  return this;
}

// UGeometryCacheCodecBase @ 14ca07a90

UGeometryCacheCodecBase * __thiscall
UGeometryCacheCodecBase::UGeometryCacheCodecBase
          (UGeometryCacheCodecBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometryCacheCodecBase__6B_;
  (this->TopologyRanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TopologyRanges).ArrayNum = 0;
  (this->TopologyRanges).ArrayMax = 0;
  return this;
}

// ~UGeometryCacheCodecBase @ 14ca095d0

void __thiscall UGeometryCacheCodecBase::~UGeometryCacheCodecBase(UGeometryCacheCodecBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGeometryCacheCodecBase__6B_;
  pFVar1 = (this->TopologyRanges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateRenderState @ 14ca11500

FGeometryCacheCodecRenderStateBase * __thiscall
UGeometryCacheCodecBase::CreateRenderState(UGeometryCacheCodecBase *this)

{
  return (FGeometryCacheCodecRenderStateBase *)0x0;
}

// DecodeBuffer @ 14ca11f30

bool __thiscall
UGeometryCacheCodecBase::DecodeBuffer
          (UGeometryCacheCodecBase *this,uchar *param_1,uint param_2,FGeometryCacheMeshData *param_3
          )

{
  return false;
}

// DecodeSingleFrame @ 14ca14420

bool __thiscall
UGeometryCacheCodecBase::DecodeSingleFrame
          (UGeometryCacheCodecBase *this,FGeometryCacheCodecDecodeArguments *param_1)

{
  return false;
}

// GetPrivateStaticClass @ 14ca1eaf0

UClass * __cdecl UGeometryCacheCodecBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheCodecBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheCodecBase",
               &Z_Registration_Info_UClass_UGeometryCacheCodecBase.InnerSingleton,
               StaticRegisterNativesUGeometryCacheCodecBase,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGeometryCacheCodecBase>,
               InternalVTableHelperCtorCaller<UGeometryCacheCodecBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecBase.InnerSingleton;
}

// IsSameTopology @ 14ca23840

bool __cdecl
UGeometryCacheCodecBase::IsSameTopology
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 2) {
    return true;
  }
  uVar7 = iVar1 - 1;
  uVar8 = 0;
  if ((int)uVar7 < iVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (param_2 < *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 4)) {
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar8 = 0;
    if (param_2 < *(int *)(param_1->AllocatorInstance).Data) {
      if ((param_1->ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar1 = *(int *)(param_1->AllocatorInstance).Data;
    }
    else {
      while ((uVar3 = uVar7, uVar3 != 0 && (uVar8 < uVar3))) {
        uVar6 = uVar8 + 1 + uVar3 >> 1;
        if ((param_1->ArrayNum <= (int)uVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        uVar7 = uVar6 - 1;
        if (*(int *)((param_1->AllocatorInstance).Data + (ulonglong)uVar6 * 4) <= param_2) {
          uVar7 = uVar3;
          uVar8 = uVar6;
        }
      }
      uVar7 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (param_3 < *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4)) {
        return false;
      }
      uVar8 = uVar8 + 1;
      uVar7 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar1 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4);
    }
    bVar4 = param_3 < iVar1;
  }
  else {
    uVar8 = 0;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar7 * 4) <= param_3;
  }
  return bVar4;
}

// IsSameTopology @ 14ca23af0

bool __thiscall
UGeometryCacheCodecBase::IsSameTopology(UGeometryCacheCodecBase *this,int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = IsSameTopology(&this->TopologyRanges,param_1,param_2);
  return bVar1;
}

// StaticRegisterNativesUGeometryCacheCodecBase @ 14ca2b9f0

void __cdecl UGeometryCacheCodecBase::StaticRegisterNativesUGeometryCacheCodecBase(void)

{
  return;
}

