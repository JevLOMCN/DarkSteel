// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 12

// StaticClass @ 14dcf9140

UClass * __cdecl UMovieGraphMaterialParameterCollectionModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifier.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMaterialParameterCollectionModifier",
               &Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifier.
                InnerSingleton,StaticRegisterNativesUMovieGraphMaterialParameterCollectionModifier,
               0x198,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphMaterialParameterCollectionModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphMaterialParameterCollectionModifier>,
               local_res8,UMovieGraphModifierBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifier.InnerSingleton;
}

// UMovieGraphMaterialParameterCollectionModifier @ 14dd0a770

UMovieGraphMaterialParameterCollectionModifier * __thiscall
UMovieGraphMaterialParameterCollectionModifier::UMovieGraphMaterialParameterCollectionModifier
          (UMovieGraphMaterialParameterCollectionModifier *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UMovieGraphModifierBase::UMovieGraphModifierBase((UMovieGraphModifierBase *)this,param_1);
  this_00 = &(this->MaterialParameterCollection).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMovieGraphMaterialParameterCollectionModifier__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->ScalarParameterUpdates = 0;
  *(undefined8 *)&(this->ScalarParameterUpdates).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameterUpdates).field_0x20 = 0;
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x28 = 0;
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x34 = 0;
  *(undefined8 *)&(this->ScalarParameterUpdates).field_0x40 = 0;
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x48 = 0;
  *(undefined8 *)&this->VectorParameterUpdates = 0;
  *(undefined8 *)&(this->VectorParameterUpdates).field_0x8 = 0;
  *(undefined8 *)&(this->VectorParameterUpdates).field_0x20 = 0;
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x28 = 0;
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x34 = 0;
  *(undefined8 *)&(this->VectorParameterUpdates).field_0x40 = 0;
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x48 = 0;
  *(undefined8 *)&this->PriorScalarValues = 0;
  *(undefined8 *)&(this->PriorScalarValues).field_0x8 = 0;
  *(undefined8 *)&(this->PriorScalarValues).field_0x20 = 0;
  *(undefined4 *)&(this->PriorScalarValues).field_0x28 = 0;
  *(undefined4 *)&(this->PriorScalarValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PriorScalarValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PriorScalarValues).field_0x34 = 0;
  *(undefined8 *)&(this->PriorScalarValues).field_0x40 = 0;
  *(undefined4 *)&(this->PriorScalarValues).field_0x48 = 0;
  *(undefined8 *)&this->PriorVectorValues = 0;
  *(undefined8 *)&(this->PriorVectorValues).field_0x8 = 0;
  *(undefined8 *)&(this->PriorVectorValues).field_0x20 = 0;
  *(undefined4 *)&(this->PriorVectorValues).field_0x28 = 0;
  *(undefined4 *)&(this->PriorVectorValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PriorVectorValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PriorVectorValues).field_0x34 = 0;
  *(undefined8 *)&(this->PriorVectorValues).field_0x40 = 0;
  *(undefined4 *)&(this->PriorVectorValues).field_0x48 = 0;
  (this->CachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->CachedWorld).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// UMovieGraphMaterialParameterCollectionModifier @ 14dd0a8e0

UMovieGraphMaterialParameterCollectionModifier * __thiscall
UMovieGraphMaterialParameterCollectionModifier::UMovieGraphMaterialParameterCollectionModifier
          (UMovieGraphMaterialParameterCollectionModifier *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UMovieGraphModifierBase::UMovieGraphModifierBase((UMovieGraphModifierBase *)this,param_1);
  this_00 = &(this->MaterialParameterCollection).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMovieGraphMaterialParameterCollectionModifier__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->ScalarParameterUpdates = 0;
  *(undefined8 *)&(this->ScalarParameterUpdates).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameterUpdates).field_0x20 = 0;
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x28 = 0;
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x34 = 0;
  *(undefined8 *)&(this->ScalarParameterUpdates).field_0x40 = 0;
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x48 = 0;
  *(undefined8 *)&this->VectorParameterUpdates = 0;
  *(undefined8 *)&(this->VectorParameterUpdates).field_0x8 = 0;
  *(undefined8 *)&(this->VectorParameterUpdates).field_0x20 = 0;
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x28 = 0;
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x34 = 0;
  *(undefined8 *)&(this->VectorParameterUpdates).field_0x40 = 0;
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x48 = 0;
  *(undefined8 *)&this->PriorScalarValues = 0;
  *(undefined8 *)&(this->PriorScalarValues).field_0x8 = 0;
  *(undefined8 *)&(this->PriorScalarValues).field_0x20 = 0;
  *(undefined4 *)&(this->PriorScalarValues).field_0x28 = 0;
  *(undefined4 *)&(this->PriorScalarValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PriorScalarValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PriorScalarValues).field_0x34 = 0;
  *(undefined8 *)&(this->PriorScalarValues).field_0x40 = 0;
  *(undefined4 *)&(this->PriorScalarValues).field_0x48 = 0;
  *(undefined8 *)&this->PriorVectorValues = 0;
  *(undefined8 *)&(this->PriorVectorValues).field_0x8 = 0;
  *(undefined8 *)&(this->PriorVectorValues).field_0x20 = 0;
  *(undefined4 *)&(this->PriorVectorValues).field_0x28 = 0;
  *(undefined4 *)&(this->PriorVectorValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->PriorVectorValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PriorVectorValues).field_0x34 = 0;
  *(undefined8 *)&(this->PriorVectorValues).field_0x40 = 0;
  *(undefined4 *)&(this->PriorVectorValues).field_0x48 = 0;
  (this->CachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->CachedWorld).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UMovieGraphMaterialParameterCollectionModifier @ 14dd0da30

void __thiscall
UMovieGraphMaterialParameterCollectionModifier::~UMovieGraphMaterialParameterCollectionModifier
          (UMovieGraphMaterialParameterCollectionModifier *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphMaterialParameterCollectionModifier__6B_;
  *(undefined4 *)&(this->PriorVectorValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PriorVectorValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PriorVectorValues);
  *(undefined4 *)&(this->PriorScalarValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PriorScalarValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PriorScalarValues);
  *(undefined4 *)&(this->VectorParameterUpdates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VectorParameterUpdates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VectorParameterUpdates);
  *(undefined4 *)&(this->ScalarParameterUpdates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScalarParameterUpdates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScalarParameterUpdates);
  pvVar1 = *(void **)&(this->MaterialParameterCollection).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMovieGraphModifierBase::~UMovieGraphModifierBase((UMovieGraphModifierBase *)this);
  return;
}

// ApplyModifier @ 14dd136f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphMaterialParameterCollectionModifier::ApplyModifier
          (UMovieGraphMaterialParameterCollectionModifier *this,UWorld *param_1)

{
  UWorld *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->CachedWorld).WeakPtr,(FObjectPtr)local_res8);
  ApplyScalarAndVectorValues(this,&this->ScalarParameterUpdates,&this->VectorParameterUpdates,true);
  return;
}

// ApplyScalarAndVectorValues @ 14dd13820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphMaterialParameterCollectionModifier::ApplyScalarAndVectorValues
          (UMovieGraphMaterialParameterCollectionModifier *this,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_1,TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                   *param_2,bool param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  ForElementType<unsigned_int> FVar5;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar6;
  TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
  *pTVar7;
  bool bVar8;
  UMaterialParameterCollection *pUVar9;
  UWorld *this_00;
  UMaterialParameterCollectionInstance *this_01;
  longlong lVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  ForElementType<unsigned_int> FVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_188;
  undefined1 local_187 [3];
  float local_184;
  ForElementType<unsigned_int> local_180;
  ulonglong local_178;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  undefined1 local_138 [16];
  TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
  *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FName *local_98;
  float *local_90;
  FName *local_88;
  FLinearColor *local_80;
  FLinearColor local_78 [2];
  undefined4 local_4c;
  
  bVar8 = FWeakObjectPtr::IsValid(&(this->CachedWorld).WeakPtr);
  if ((bVar8) &&
     (pUVar9 = TSoftObjectPtr<UMaterialParameterCollection>::LoadSynchronous
                         (&this->MaterialParameterCollection),
     pUVar9 != (UMaterialParameterCollection *)0x0)) {
    this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->CachedWorld).WeakPtr);
    this_01 = UWorld::GetParameterCollectionInstance(this_00,pUVar9);
    if (this_01 != (UMaterialParameterCollectionInstance *)0x0) {
      iVar11 = *(int *)&param_1->field_0x28;
      local_180 = (ForElementType<unsigned_int>)&param_1->field_0x10;
      iStack_168 = 0;
      local_178 = 1;
      local_150 = 0;
      iVar12 = 0;
      uStack_164 = 1;
      iStack_154 = 0;
      if (iVar11 != 0) {
        puVar16 = *(uint **)&param_1->field_0x20;
        if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
          puVar16 = (uint *)local_180;
        }
        uStack_164 = *puVar16;
        local_150 = 0;
        while (uStack_164 == 0) {
          lVar10 = (longlong)iStack_168;
          local_150 = local_150 + 0x20;
          iStack_168 = iStack_168 + 1;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168) {
            iVar12 = *(int *)&param_1->field_0x28;
            uStack_164 = 1;
            iStack_154 = iVar11;
            goto LAB_14dd13947;
          }
          uStack_164 = (puVar16 + 1)[lVar10];
        }
        iVar12 = *(int *)&param_1->field_0x28;
        uStack_164 = -uStack_164 & uStack_164;
        uVar2 = (ulonglong)uStack_164 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_140 = (int)lVar10;
        iStack_154 = local_150 + -1 + local_140;
        if (iVar12 < iStack_154) {
          iStack_154 = iVar11;
        }
      }
LAB_14dd13947:
      uVar17 = *(uint *)&param_1->field_0x28;
      uStack_14c = local_4c;
      iStack_148 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
      uVar18 = uVar17 & 0xffffffe0;
      TStack_f0._padding_ = CONCAT44(uStack_164,iStack_168);
      uStack_158 = 0xffffffff;
      TStack_f0.CurrentBitIndex = iStack_154;
      TStack_f0.UnvisitedBitMask = 0xffffffff;
      iVar11 = (int)uVar17 >> 5;
      TStack_f0._28_4_ = local_4c;
      TStack_f0.BaseBitIndex = local_150;
      uStack_d0 = CONCAT44(uStack_144,iStack_148);
      local_170 = param_1;
      local_160 = (undefined1 *)local_180;
      local_f8 = param_1;
      TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_180;
      if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar5 = local_180;
      uVar3 = *(int *)((longlong)local_180 + 0x18);
      if (uVar17 != uVar3) {
        FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_180 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_180 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_180;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
        while (uVar17 == 0) {
          lVar10 = (longlong)iVar11;
          uVar18 = uVar18 + 0x20;
          iVar11 = iVar11 + 1;
          uVar17 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_14dd13a80;
          uVar17 = *(uint *)((undefined1 *)((longlong)FVar14 + 4) + lVar10 * 4);
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_13c = (int)lVar10;
        uVar17 = local_13c + -1 + uVar18;
        if ((int)uVar3 < (int)uVar17) {
          uVar17 = uVar3;
        }
      }
LAB_14dd13a80:
      while( true ) {
        pTVar6 = local_f8;
        if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
          local_188 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_188);
        }
        if (((TStack_f0.CurrentBitIndex == uVar17) &&
            ((ForElementType<unsigned_int>)TStack_f0.Array == FVar5)) && (pTVar6 == param_1)) break;
        pFVar13 = (FName *)(*(longlong *)pTVar6 + (longlong)TStack_f0.CurrentBitIndex * 0x14);
        if (param_3) {
          local_184 = 0.0;
          bVar8 = UMaterialParameterCollectionInstance::GetScalarParameterValue
                            (this_01,*pFVar13,&local_184);
          if (bVar8) {
            local_90 = &local_184;
            local_98 = pFVar13;
            TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                      ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                        *)&this->PriorScalarValues,
                       (TPairInitializer<FName_const_&,float_const_&> *)local_138,(bool *)&local_98)
            ;
          }
        }
        UMaterialParameterCollectionInstance::SetScalarParameterValue
                  (this_01,*pFVar13,(float)pFVar13[1].ComparisonIndex.Value);
        TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      }
      iStack_120 = 0;
      iVar11 = *(int *)&param_2->field_0x28;
      puVar1 = &param_2->field_0x10;
      local_108 = 0;
      iStack_10c = 0;
      if (iVar11 != 0) {
        puVar16 = *(uint **)&param_2->field_0x20;
        if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
          puVar16 = (uint *)puVar1;
        }
        uVar17 = *puVar16;
        while (uVar17 == 0) {
          lVar10 = (longlong)iStack_120;
          local_108 = local_108 + 0x20;
          iStack_120 = iStack_120 + 1;
          iStack_10c = iVar11;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120)
          goto LAB_14dd13bc1;
          uVar17 = puVar16[lVar10 + 1];
        }
        local_178 = (ulonglong)(-uVar17 & uVar17);
        uVar2 = local_178 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_138._4_4_ = (undefined4)lVar10;
        iStack_10c = local_108 + -1 + local_138._4_4_;
        if (iVar11 < iStack_10c) {
          iStack_10c = iVar11;
        }
      }
LAB_14dd13bc1:
      uVar17 = *(uint *)&param_2->field_0x28;
      uStack_11c = (undefined4)local_178;
      iStack_104 = iStack_154;
      iStack_100 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
      uStack_110 = 0xffffffff;
      uVar18 = uVar17 & 0xffffffe0;
      TStack_c0._padding_ = CONCAT44(uStack_11c,iStack_120);
      TStack_c0.CurrentBitIndex = iStack_10c;
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar17 >> 5;
      TStack_c0._28_4_ = iStack_154;
      TStack_c0.BaseBitIndex = local_108;
      uStack_a0 = CONCAT44(uStack_fc,iStack_100);
      local_128 = param_2;
      local_118 = puVar1;
      local_c8 = param_2;
      TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar17 < 0) || (iVar11 < (int)uVar17)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar3 = *(uint *)&param_2->field_0x28;
      if (uVar17 != uVar3) {
        puVar15 = *(undefined1 **)&param_2->field_0x20;
        if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
        while (uVar17 == 0) {
          lVar10 = (longlong)iVar12;
          uVar18 = uVar18 + 0x20;
          iVar12 = iVar12 + 1;
          uVar17 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14dd13cd0;
          uVar17 = *(uint *)(puVar15 + lVar10 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar17 = (int)lVar10 + -1 + uVar18;
        if ((int)uVar3 < (int)uVar17) {
          uVar17 = uVar3;
        }
      }
LAB_14dd13cd0:
      while( true ) {
        pTVar7 = local_c8;
        if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_187);
        }
        if (((TStack_c0.CurrentBitIndex == uVar17) &&
            (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == param_2)) break;
        pFVar13 = (FName *)((longlong)TStack_c0.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
        if ((param_3) &&
           (bVar8 = UMaterialParameterCollectionInstance::GetVectorParameterValue
                              (this_01,*pFVar13,local_78), bVar8)) {
          local_80 = local_78;
          local_88 = pFVar13;
          TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FLinearColor_const_&>_>
                    ((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                      *)&this->PriorVectorValues,
                     (TPairInitializer<FName_const_&,FLinearColor_const_&> *)(local_138 + 8),
                     (bool *)&local_88);
        }
        UMaterialParameterCollectionInstance::SetVectorParameterValue
                  (this_01,*pFVar13,(FLinearColor *)(pFVar13 + 1));
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      }
    }
  }
  return;
}

// ClearParameterValues @ 14dd18a60

void __thiscall
UMovieGraphMaterialParameterCollectionModifier::ClearParameterValues
          (UMovieGraphMaterialParameterCollectionModifier *this)

{
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)&this->ScalarParameterUpdates);
  TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
           *)&this->VectorParameterUpdates);
  return;
}

// GetModifierName @ 14dd28f20

FText * __thiscall
UMovieGraphMaterialParameterCollectionModifier::GetModifierName
          (UMovieGraphMaterialParameterCollectionModifier *this,FText *__return_storage_ptr__)

{
  TRefCountPtr<ITextData> TVar1;
  undefined1 local_res10 [24];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&ModifierName,L"MovieGraphNode",L"MaterialParameterCollectionModifierName",
                 L"Material Parameter Collection");
      atexit(`UMovieGraphMaterialParameterCollectionModifier::GetModifierName'::__l2::
             _dynamic_atexit_destructor_for__ModifierName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  TVar1 = ModifierName.TextData;
  (__return_storage_ptr__->TextData).Reference = ModifierName.TextData.Reference;
  if (TVar1.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar1.Reference + 8))(TVar1.Reference,local_res10);
  }
  __return_storage_ptr__->Flags = ModifierName.Flags;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2c8d0

UClass * __cdecl UMovieGraphMaterialParameterCollectionModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifier.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMaterialParameterCollectionModifier",
               &Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifier.
                InnerSingleton,StaticRegisterNativesUMovieGraphMaterialParameterCollectionModifier,
               0x198,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphMaterialParameterCollectionModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphMaterialParameterCollectionModifier>,
               local_res8,UMovieGraphModifierBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMaterialParameterCollectionModifier.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphMaterialParameterCollectionModifier @ 14dd45200

void __cdecl
UMovieGraphMaterialParameterCollectionModifier::
StaticRegisterNativesUMovieGraphMaterialParameterCollectionModifier(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr =
       Z_Construct_UClass_UMovieGraphMaterialParameterCollectionModifier_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UndoModifier @ 14dd47990

void __thiscall
UMovieGraphMaterialParameterCollectionModifier::UndoModifier
          (UMovieGraphMaterialParameterCollectionModifier *this)

{
  ApplyScalarAndVectorValues(this,&this->PriorScalarValues,&this->PriorVectorValues,false);
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)&this->PriorScalarValues);
  TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
           *)&this->PriorVectorValues);
  return;
}

// execClearParameterValues @ 14dd4e0a0

void __cdecl
UMovieGraphMaterialParameterCollectionModifier::execClearParameterValues
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)(param_1 + 2));
  TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
           *)(param_1 + 4));
  return;
}

