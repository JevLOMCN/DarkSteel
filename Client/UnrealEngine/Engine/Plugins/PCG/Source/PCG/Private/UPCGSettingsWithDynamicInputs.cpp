// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b98270

UClass * __cdecl UPCGSettingsWithDynamicInputs::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsWithDynamicInputs",
               &Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.InnerSingleton,
               StaticRegisterNativesUPCGSettingsWithDynamicInputs,0xd8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSettingsWithDynamicInputs>,
               InternalVTableHelperCtorCaller<UPCGSettingsWithDynamicInputs>,aFStackX_8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.InnerSingleton;
}

// UPCGSettingsWithDynamicInputs @ 149f33410

UPCGSettingsWithDynamicInputs * __thiscall
UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
          (UPCGSettingsWithDynamicInputs *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSettingsWithDynamicInputs__6B_;
  (this->DynamicInputPinProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicInputPinProperties).ArrayNum = 0;
  (this->DynamicInputPinProperties).ArrayMax = 0;
  return this;
}

// UPCGSettingsWithDynamicInputs @ 149f33450

UPCGSettingsWithDynamicInputs * __thiscall
UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
          (UPCGSettingsWithDynamicInputs *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSettingsWithDynamicInputs__6B_;
  (this->DynamicInputPinProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicInputPinProperties).ArrayNum = 0;
  (this->DynamicInputPinProperties).ArrayMax = 0;
  return this;
}

// ~UPCGSettingsWithDynamicInputs @ 149f34cf0

void __thiscall
UPCGSettingsWithDynamicInputs::~UPCGSettingsWithDynamicInputs(UPCGSettingsWithDynamicInputs *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGSettingsWithDynamicInputs__6B_;
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->DynamicInputPinProperties).AllocatorInstance.Data,
             (this->DynamicInputPinProperties).ArrayNum);
  pFVar1 = (this->DynamicInputPinProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// GetDynamicInputPinsBaseLabel @ 149f49880

FName __thiscall
UPCGSettingsWithDynamicInputs::GetDynamicInputPinsBaseLabel(UPCGSettingsWithDynamicInputs *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetNodeDefinedPinLabels @ 149f4b3e0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettingsWithDynamicInputs::GetNodeDefinedPinLabels
          (UPCGSettingsWithDynamicInputs *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FPCGPinProperties *pFVar9;
  undefined1 local_res8 [8];
  FName local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  
  (**(code **)(this->_padding_ + 0x4f8))(this,&local_30);
  if ((TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)&local_30 ==
      &this->DynamicInputPinProperties) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar7 = (this->DynamicInputPinProperties).ArrayNum;
  if (iVar7 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar7,&local_30,(int *)&local_28,(int *)((longlong)&local_28 + 4));
    ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
              (local_30.Data + (longlong)iVar5 * 0x30,
               (FPCGPinProperties *)(this->DynamicInputPinProperties).AllocatorInstance.Data,iVar7);
  }
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  iVar7 = (int)local_28;
  if (-1 < iVar7) {
    if (0 < iVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar7,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar7 = (int)local_28;
    pFVar9 = (FPCGPinProperties *)(local_30.Data + (longlong)iVar7 * 0x30);
    FVar8.Data = local_30.Data;
    while( true ) {
      iVar5 = (int)local_28;
      if (iVar5 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        iVar5 = (int)local_28;
      }
      if ((FPCGPinProperties *)FVar8.Data == pFVar9) break;
      local_38 = ((FPCGPinProperties *)FVar8.Data)->Label;
      pFVar2 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= &local_38) && (&local_38 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      FVar8.Data = FVar8.Data + 0x30;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_38;
    }
    DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)local_30.Data,iVar5);
    if ((FPCGPinProperties *)local_30.Data != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_30.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(local_28 & 0xffffffff);
}

// GetPrivateStaticClass @ 149f4e0d0

UClass * __cdecl UPCGSettingsWithDynamicInputs::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSettingsWithDynamicInputs",
               &Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.InnerSingleton,
               StaticRegisterNativesUPCGSettingsWithDynamicInputs,0xd8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSettingsWithDynamicInputs>,
               InternalVTableHelperCtorCaller<UPCGSettingsWithDynamicInputs>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.InnerSingleton;
}

// InputPinProperties @ 149f51c00

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettingsWithDynamicInputs::InputPinProperties
          (UPCGSettingsWithDynamicInputs *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar5;
  
  (**(code **)(this->_padding_ + 0x4f8))();
  if (__return_storage_ptr__ == &this->DynamicInputPinProperties) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar1 = (this->DynamicInputPinProperties).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar1,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x30,
               (FPCGPinProperties *)(this->DynamicInputPinProperties).AllocatorInstance.Data,iVar1);
  }
  return __return_storage_ptr__;
}

// StaticInputPinProperties @ 149f63850

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSettingsWithDynamicInputs::StaticInputPinProperties
          (UPCGSettingsWithDynamicInputs *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::InputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSettingsWithDynamicInputs @ 149f63c50

void __cdecl UPCGSettingsWithDynamicInputs::StaticRegisterNativesUPCGSettingsWithDynamicInputs(void)

{
  return;
}

