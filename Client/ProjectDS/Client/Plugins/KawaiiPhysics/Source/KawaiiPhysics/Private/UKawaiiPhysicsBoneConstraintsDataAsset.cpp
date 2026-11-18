// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 7

// StaticClass @ 14de3a050

UClass * __cdecl UKawaiiPhysicsBoneConstraintsDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/KawaiiPhysics",L"KawaiiPhysicsBoneConstraintsDataAsset",
               &Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.InnerSingleton,
               StaticRegisterNativesUKawaiiPhysicsBoneConstraintsDataAsset,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UKawaiiPhysicsBoneConstraintsDataAsset>,
               InternalVTableHelperCtorCaller<UKawaiiPhysicsBoneConstraintsDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.InnerSingleton;
}

// UKawaiiPhysicsBoneConstraintsDataAsset @ 14de3d920

UKawaiiPhysicsBoneConstraintsDataAsset * __thiscall
UKawaiiPhysicsBoneConstraintsDataAsset::UKawaiiPhysicsBoneConstraintsDataAsset
          (UKawaiiPhysicsBoneConstraintsDataAsset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UKawaiiPhysicsBoneConstraintsDataAsset__6B_;
  (this->BoneConstraintsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneConstraintsData).ArrayNum = 0;
  (this->BoneConstraintsData).ArrayMax = 0;
  return this;
}

// UKawaiiPhysicsBoneConstraintsDataAsset @ 14de3d960

UKawaiiPhysicsBoneConstraintsDataAsset * __thiscall
UKawaiiPhysicsBoneConstraintsDataAsset::UKawaiiPhysicsBoneConstraintsDataAsset
          (UKawaiiPhysicsBoneConstraintsDataAsset *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UKawaiiPhysicsBoneConstraintsDataAsset__6B_;
  (this->BoneConstraintsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneConstraintsData).ArrayNum = 0;
  (this->BoneConstraintsData).ArrayMax = 0;
  return this;
}

// ~UKawaiiPhysicsBoneConstraintsDataAsset @ 14de3ddd0

void __thiscall
UKawaiiPhysicsBoneConstraintsDataAsset::~UKawaiiPhysicsBoneConstraintsDataAsset
          (UKawaiiPhysicsBoneConstraintsDataAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UKawaiiPhysicsBoneConstraintsDataAsset__6B_;
  pFVar1 = (this->BoneConstraintsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GenerateBoneConstraints @ 14de432d0

TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_> * __thiscall
UKawaiiPhysicsBoneConstraintsDataAsset::GenerateBoneConstraints
          (UKawaiiPhysicsBoneConstraintsDataAsset *this,
          TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar9 = (this->BoneConstraintsData).AllocatorInstance.Data;
  iVar2 = (this->BoneConstraintsData).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x14;
  while( true ) {
    if ((this->BoneConstraintsData).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FModifyBoneConstraintData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    local_60 = *(undefined8 *)pFVar9;
    local_50 = *(undefined8 *)(pFVar9 + 8);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_40 = (undefined1)*(undefined4 *)(pFVar9 + 0x10);
    uStack_58 = 0x7fffffff;
    uStack_54 = 0xffffffff;
    uStack_48 = 0x7fffffff;
    uStack_44 = 0xffffffff;
    uStack_3c = 0xffffffff;
    uStack_38 = 0xffffffff;
    uStack_34 = 0xbf800000;
    local_30 = local_30 & 0xffffff00;
    uStack_2c = 0;
    uStack_3f = (undefined1)((uint)*(undefined4 *)(pFVar9 + 0x10) >> 8);
    if ((pFVar3 <= (FScriptContainerElement *)&local_60) &&
       ((FScriptContainerElement *)&local_60 <
        pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x38)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x438,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    lVar8 = (longlong)iVar6 * 0x38;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar9 = pFVar9 + 0x14;
    *(undefined8 *)(pFVar3 + lVar8) = local_60;
    *(ulonglong *)(pFVar3 + lVar8 + 8) = CONCAT44(uStack_54,uStack_58);
    *(undefined8 *)(pFVar3 + lVar8 + 0x10) = local_50;
    *(ulonglong *)(pFVar3 + lVar8 + 0x10 + 8) = CONCAT44(uStack_44,uStack_48);
    *(ulonglong *)(pFVar3 + lVar8 + 0x20) =
         CONCAT44(uStack_3c,CONCAT22(uStack_3e,CONCAT11(uStack_3f,local_40)));
    *(ulonglong *)(pFVar3 + lVar8 + 0x20 + 8) = CONCAT44(uStack_34,uStack_38);
    *(ulonglong *)(pFVar3 + lVar8 + 0x30) = CONCAT44(uStack_2c,local_30);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14de43810

UClass * __cdecl UKawaiiPhysicsBoneConstraintsDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/KawaiiPhysics",L"KawaiiPhysicsBoneConstraintsDataAsset",
               &Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.InnerSingleton,
               StaticRegisterNativesUKawaiiPhysicsBoneConstraintsDataAsset,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UKawaiiPhysicsBoneConstraintsDataAsset>,
               InternalVTableHelperCtorCaller<UKawaiiPhysicsBoneConstraintsDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.InnerSingleton;
}

// StaticRegisterNativesUKawaiiPhysicsBoneConstraintsDataAsset @ 14de46770

void __cdecl
UKawaiiPhysicsBoneConstraintsDataAsset::StaticRegisterNativesUKawaiiPhysicsBoneConstraintsDataAsset
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

