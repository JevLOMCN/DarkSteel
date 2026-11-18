// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 11

// StaticClass @ 142378ad0

UClass * __cdecl UAnimationDataSourceRegistry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataSourceRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationCore",L"AnimationDataSourceRegistry",
               &Z_Registration_Info_UClass_UAnimationDataSourceRegistry.InnerSingleton,
               StaticRegisterNativesUAnimationDataSourceRegistry,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationDataSourceRegistry>,
               InternalVTableHelperCtorCaller<UAnimationDataSourceRegistry>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataSourceRegistry.InnerSingleton;
}

// UAnimationDataSourceRegistry @ 14237e7d0

UAnimationDataSourceRegistry * __thiscall
UAnimationDataSourceRegistry::UAnimationDataSourceRegistry
          (UAnimationDataSourceRegistry *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimationDataSourceRegistry__6B_;
  *(undefined8 *)&this->DataSources = 0;
  *(undefined8 *)&(this->DataSources).field_0x8 = 0;
  *(undefined8 *)&(this->DataSources).field_0x20 = 0;
  *(undefined4 *)&(this->DataSources).field_0x28 = 0;
  *(undefined4 *)&(this->DataSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataSources).field_0x34 = 0;
  *(undefined4 *)&(this->DataSources).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataSources).field_0x40 = 0;
  *(undefined4 *)&(this->DataSources).field_0x48 = 0;
  return this;
}

// UAnimationDataSourceRegistry @ 14237e820

UAnimationDataSourceRegistry * __thiscall
UAnimationDataSourceRegistry::UAnimationDataSourceRegistry
          (UAnimationDataSourceRegistry *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimationDataSourceRegistry__6B_;
  *(undefined8 *)&this->DataSources = 0;
  *(undefined8 *)&(this->DataSources).field_0x8 = 0;
  *(undefined8 *)&(this->DataSources).field_0x20 = 0;
  *(undefined4 *)&(this->DataSources).field_0x28 = 0;
  *(undefined4 *)&(this->DataSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataSources).field_0x34 = 0;
  *(undefined4 *)&(this->DataSources).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataSources).field_0x40 = 0;
  *(undefined4 *)&(this->DataSources).field_0x48 = 0;
  return this;
}

// ~UAnimationDataSourceRegistry @ 14237ea20

void __thiscall
UAnimationDataSourceRegistry::~UAnimationDataSourceRegistry(UAnimationDataSourceRegistry *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAnimationDataSourceRegistry__6B_;
  *(undefined4 *)&(this->DataSources).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataSources).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataSources);
  UObject::~UObject((UObject *)this);
  return;
}

// ClearInvalidDataSource @ 142380cc0

void __thiscall
UAnimationDataSourceRegistry::ClearInvalidDataSource(UAnimationDataSourceRegistry *this)

{
  TMap<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *this_00;
  FName *pFVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  this_00 = &this->DataSources;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar8 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar5 = local_68;
      lVar2 = (longlong)(int)uVar8 * 0x18;
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_68 + 8 + lVar2));
      if (!bVar6) {
        pFVar9 = (FScriptContainerElement *)(lVar2 + *plVar5);
        if (((local_a8.Data <= pFVar9) && (pFVar9 < local_a8.Data + (longlong)local_a0._4_4_ * 8))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (int)local_a0;
        if ((int)local_a0 == local_a0._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_a8,(int *)((longlong)&local_a0 + 4));
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar7 + 1);
        *(undefined8 *)(local_a8.Data + (longlong)iVar7 * 8) = *(undefined8 *)pFVar9;
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar8 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_38->HashSize < iVar7)) || (iVar7 < local_38->HashSize)) {
        local_38->HashSize = iVar7;
        TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  iVar7 = (int)local_a0;
  pFVar1 = (FName *)(local_a8.Data + (longlong)(int)local_a0 * 8);
  FVar10.Data = local_a8.Data;
  while( true ) {
    if ((int)local_a0 != iVar7) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FName *)FVar10.Data == pFVar1) break;
    FVar3 = *(FName *)FVar10.Data;
    local_res10 = FVar3;
    if (*(int *)&(this->DataSources).field_0x8 != *(int *)&(this->DataSources).field_0x34) {
      uVar11 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                           *)this_00,FVar3.Number + uVar11,&local_res10);
    }
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// ContainsSource @ 1423812d0

bool __thiscall
UAnimationDataSourceRegistry::ContainsSource(UAnimationDataSourceRegistry *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->DataSources).field_0x8 != *(int *)&(this->DataSources).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DataSources).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DataSources).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->DataSources).field_0x48 - 1U & FVar1.Number + uVar2)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->DataSources + (longlong)iVar3 * 0x18) == FVar1)
        goto LAB_14238133c;
        iVar3 = *(int *)(*(longlong *)&this->DataSources + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14238133c:
  return iVar3 != -1;
}

// GetPrivateStaticClass @ 1423840b0

UClass * __cdecl UAnimationDataSourceRegistry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataSourceRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationCore",L"AnimationDataSourceRegistry",
               &Z_Registration_Info_UClass_UAnimationDataSourceRegistry.InnerSingleton,
               StaticRegisterNativesUAnimationDataSourceRegistry,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationDataSourceRegistry>,
               InternalVTableHelperCtorCaller<UAnimationDataSourceRegistry>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataSourceRegistry.InnerSingleton;
}

// RegisterDataSource @ 1423847d0

bool __thiscall
UAnimationDataSourceRegistry::RegisterDataSource
          (UAnimationDataSourceRegistry *this,FName *param_1,UObject *param_2)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  TPairInitializer<FName_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_&&> local_res8;
  FName *local_28;
  TWeakObjectPtr<UObject,FWeakObjectPtr> **local_20;
  
  ClearInvalidDataSource(this);
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->DataSources).field_0x8 != *(int *)&(this->DataSources).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DataSources).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DataSources).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->DataSources).field_0x48 - 1U & FVar1.Number + uVar2)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->DataSources + (longlong)iVar3 * 0x18) == FVar1) {
          return false;
        }
        iVar3 = *(int *)(*(longlong *)&this->DataSources + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_res8.Value = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
  local_res8.Key = (FName *)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.Value,(FObjectPtr)&local_res8);
  local_20 = &local_res8.Value;
  local_28 = param_1;
  TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&this->DataSources,&local_res8,(bool *)&local_28);
  return true;
}

// RequestSource @ 142384ca0

UObject * __thiscall
UAnimationDataSourceRegistry::RequestSource
          (UAnimationDataSourceRegistry *this,FName *param_1,UClass *param_2)

{
  int iVar1;
  FWeakObjectPtr *this_00;
  UObject *pUVar2;
  
  this_00 = &TMapBase<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
             ::Find((TMapBase<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
                     *)&this->DataSources,*param_1)->WeakPtr;
  if ((this_00 != (FWeakObjectPtr *)0x0) &&
     (pUVar2 = FWeakObjectPtr::Get(this_00), pUVar2 != (UObject *)0x0)) {
    iVar1 = (int)param_2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &param_2->_padding_)) {
      return pUVar2;
    }
  }
  return (UObject *)0x0;
}

// StaticRegisterNativesUAnimationDataSourceRegistry @ 14238a440

void __cdecl UAnimationDataSourceRegistry::StaticRegisterNativesUAnimationDataSourceRegistry(void)

{
  return;
}

// UnregisterDataSource @ 14238a450

bool __thiscall
UAnimationDataSourceRegistry::UnregisterDataSource
          (UAnimationDataSourceRegistry *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  FName local_res8;
  
  ClearInvalidDataSource(this);
  FVar1 = *param_1;
  if (*(int *)&(this->DataSources).field_0x8 != *(int *)&(this->DataSources).field_0x34) {
    local_res8 = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    iVar3 = TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                 *)&this->DataSources,FVar1.Number + uVar2,&local_res8);
    return 0 < iVar3;
  }
  return false;
}

