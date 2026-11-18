// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 30

// StaticClass @ 14ca42050

UClass * __cdecl ULineSetComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULineSetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"LineSetComponent",
               &Z_Registration_Info_UClass_ULineSetComponent.InnerSingleton,
               StaticRegisterNativesULineSetComponent,0x610,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULineSetComponent>,
               InternalVTableHelperCtorCaller<ULineSetComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULineSetComponent.InnerSingleton;
}

// ULineSetComponent @ 14ca67c60

ULineSetComponent * __thiscall
ULineSetComponent::ULineSetComponent(ULineSetComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->LineMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->Lines = 0;
  *(undefined8 *)&(this->Lines).field_0x8 = 0;
  *(undefined8 *)&(this->Lines).field_0x20 = 0;
  *(undefined4 *)&(this->Lines).field_0x28 = 0;
  *(undefined4 *)&(this->Lines).field_0x2c = 0x80;
  *(undefined4 *)&(this->Lines).field_0x34 = 0;
  *(undefined4 *)&(this->Lines).field_0x30 = 0xffffffff;
  return this;
}

// ULineSetComponent @ 14ca67d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULineSetComponent * __thiscall ULineSetComponent::ULineSetComponent(ULineSetComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UMeshComponent::UMeshComponent((UMeshComponent *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->LineMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->Lines = 0;
  *(undefined8 *)&(this->Lines).field_0x8 = 0;
  *(undefined8 *)&(this->Lines).field_0x20 = 0;
  *(undefined4 *)&(this->Lines).field_0x28 = 0;
  *(undefined4 *)&(this->Lines).field_0x2c = 0x80;
  *(undefined4 *)&(this->Lines).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Lines).field_0x34 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xef;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this->bBoundsDirty = true;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  return this;
}

// ~ULineSetComponent @ 14ca6b690

void __thiscall ULineSetComponent::~ULineSetComponent(ULineSetComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator>(&this->Lines);
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AddLine @ 14ca77b40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall ULineSetComponent::AddLine(ULineSetComponent *this,FRenderableLine *param_1)

{
  int iVar1;
  
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  iVar1 = AddLineInternal(this,param_1);
  return iVar1;
}

// AddLineInternal @ 14ca77b70

int __thiscall ULineSetComponent::AddLineInternal(ULineSetComponent *this,FRenderableLine *param_1)

{
  TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator> *this_00;
  int iVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  this_00 = &this->Lines;
  iVar1 = *(int *)&(this->Lines).field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this_00,(int *)&(this->Lines).field_0x8,
                       (int *)&(this->Lines).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Lines).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Lines).field_0x30;
    iVar2 = *(int *)((longlong)iVar4 * 0x40 + 4 + *(longlong *)&this_00->field_0x0);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Lines).field_0x30 = iVar2;
    *(int *)&(this->Lines).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)this_00,&local_18,iVar4);
  if (local_18.Pointer != (double *)0x0) {
    dVar3 = (param_1->Start).field0_0x0._s_0.Y;
    *(double *)local_18.Pointer = (param_1->Start).field0_0x0._s_0.X;
    *(double *)((longlong)local_18.Pointer + 8) = dVar3;
    dVar3 = (param_1->End).field0_0x0._s_0.X;
    *(double *)((longlong)local_18.Pointer + 0x10) = (param_1->Start).field0_0x0._s_0.Z;
    *(double *)((longlong)local_18.Pointer + 0x18) = dVar3;
    dVar3 = (param_1->End).field0_0x0._s_0.Z;
    *(double *)((longlong)local_18.Pointer + 0x20) = (param_1->End).field0_0x0._s_0.Y;
    *(double *)((longlong)local_18.Pointer + 0x28) = dVar3;
    dVar3 = *(double *)&param_1->DepthBias;
    *(double *)((longlong)local_18.Pointer + 0x30) = *(double *)&param_1->Color;
    *(double *)((longlong)local_18.Pointer + 0x38) = dVar3;
  }
  this->bBoundsDirty = true;
  return local_18.Index;
}

// AddLines @ 14ca77c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
ULineSetComponent::AddLines
          (ULineSetComponent *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,FColor *param_3,
          float param_4,float param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  TVector<double>_u_0 local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FColor_u_0 local_78;
  float local_74;
  float local_70;
  
  iVar6 = param_1->ArrayNum;
  if (iVar6 != param_2->ArrayNum) {
    FFrame::KismetExecutionMessage
              (L"InStart and InEnd arrays are not the same size.",Error,(FName)0x0);
    return 0;
  }
  uVar9 = 0;
  if (0 < iVar6) {
    lVar10 = 0;
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_74 = param_4;
      local_70 = param_5;
      pFVar1 = pFVar3 + lVar8;
      local_a8._s_0.X = (double)*(undefined8 *)pFVar1;
      local_a8._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_a8._s_0.Z = (double)*(undefined8 *)(pFVar3 + lVar8 + 0x10);
      pFVar1 = pFVar2 + lVar8;
      local_90 = *(undefined8 *)pFVar1;
      uStack_88 = *(undefined8 *)(pFVar1 + 8);
      local_78._s_0 = *(FColor_u_0_s_0 *)&param_3->field0_0x0;
      local_80 = *(undefined8 *)(pFVar2 + lVar8 + 0x10);
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      AddLineInternal(this,(FRenderableLine *)&local_a8._s_0);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar10 < iVar6);
  }
  return iVar6;
}

// AddLines @ 14ca77e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULineSetComponent::AddLines
          (ULineSetComponent *this,int param_1,
          TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
          *param_2,int param_3,bool param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FRenderableLine *pFVar5;
  int local_res20 [2];
  ForAnyElementType local_38;
  uint local_30;
  int local_2c;
  
  iVar4 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_2c = 0;
  if ((0 < param_3) &&
     (TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::Reserve
                ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)&this->Lines,
                 (param_1 * param_3 - *(int *)&(this->Lines).field_0x34) +
                 *(int *)&(this->Lines).field_0x8), local_2c < param_3)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,param_3,&local_38,local_30,&local_2c);
  }
  if (0 < param_1) {
    do {
      local_30 = 0;
      if ((local_2c < 0) && (local_2c != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,&local_38,0,&local_2c);
      }
      local_res20[0] = iVar4;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res20);
      uVar1 = local_30;
      uVar2 = (ulonglong)(int)local_30;
      pFVar5 = (FRenderableLine *)(local_38.Data + uVar2 * 0x40);
      FVar3.Data = local_38.Data;
      while( true ) {
        if ((uint)uVar2 != uVar1) {
          `TCheckedPointerIterator<FRenderableLine,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if ((FRenderableLine *)FVar3.Data == pFVar5) break;
        AddLineInternal(this,(FRenderableLine *)FVar3.Data);
        uVar2 = (ulonglong)local_30;
        FVar3.Data = FVar3.Data + 0x40;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1);
  }
  if (!param_4) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  if ((FRenderableLine *)local_38.Data != (FRenderableLine *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// CalcBounds @ 14ca7abd0

TBoxSphereBounds<double,double> * __thiscall
ULineSetComponent::CalcBounds
          (ULineSetComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator> *pTVar10;
  TBoxSphereBounds<double,double> *__return_storage_ptr___00;
  bool bVar11;
  longlong lVar12;
  TBoxSphereBounds<double,double> *pTVar13;
  double *pdVar14;
  undefined1 *puVar15;
  TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator> *pTVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 local_1d8 [8];
  int local_1d0;
  uint uStack_1cc;
  undefined1 *puStack_1c8;
  undefined4 local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined4 local_17f;
  undefined2 local_17b;
  undefined1 local_179;
  TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator> *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  int local_150;
  int local_148;
  TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator> *local_140;
  ULineSetComponent *local_138;
  TBoxSphereBounds<double,double> *local_130;
  TTransform<double> *local_128;
  TMatrix<double> local_118;
  
  local_138 = this;
  local_130 = __return_storage_ptr__;
  local_128 = param_1;
  if (this->bBoundsDirty == false) {
    pTVar13 = &this->Bounds;
  }
  else {
    pTVar16 = &this->Lines;
    puVar1 = &(this->Lines).field_0x10;
    bVar9 = false;
    iVar4 = *(int *)&(this->Lines).field_0x28;
    local_180 = 0;
    local_17f = 0;
    local_17b = 0;
    local_179 = 0;
    local_1d0 = 0;
    uStack_1cc = 1;
    iStack_1bc = 0;
    iStack_1b8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    if (iVar4 != 0) {
      puVar19 = *(uint **)&(this->Lines).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar18 = *puVar19;
      iStack_1b8 = 0;
      local_1d0 = 0;
      while (uVar18 == 0) {
        iStack_1b8 = iStack_1b8 + 0x20;
        lVar12 = (longlong)local_1d0;
        local_1d0 = local_1d0 + 1;
        if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < local_1d0) goto LAB_14ca7ad1d;
        uVar18 = puVar19[lVar12 + 1];
      }
      uStack_1cc = -uVar18 & uVar18;
      uVar2 = (ulonglong)uStack_1cc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_148 = (int)lVar12;
      iStack_1bc = local_148 + -1 + iStack_1b8;
      if (iVar4 < iStack_1bc) {
LAB_14ca7ad1d:
        iStack_1bc = iVar4;
      }
    }
    local_1c0 = 0xffffffff;
    uVar18 = *(uint *)&(this->Lines).field_0x28;
    local_150 = *(int *)&(this->Lines).field_0x8 - *(int *)&(this->Lines).field_0x34;
    local_170._padding_ = CONCAT44(uStack_1cc,local_1d0);
    local_170.CurrentBitIndex = iStack_1bc;
    local_170.UnvisitedBitMask = 0xffffffff;
    local_170._28_4_ = uStack_1b4;
    local_170.BaseBitIndex = iStack_1b8;
    iVar17 = (int)uVar18 >> 5;
    uVar20 = uVar18 & 0xffffffe0;
    puStack_1c8 = puVar1;
    local_178 = pTVar16;
    local_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_140 = pTVar16;
    if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TBoxSphereBounds<double,double> *)(*pcVar6)();
      return pTVar13;
    }
    pTVar10 = local_140;
    uVar5 = *(uint *)&(this->Lines).field_0x28;
    if (uVar18 != uVar5) {
      puVar15 = *(undefined1 **)&(this->Lines).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
      while (uVar18 == 0) {
        lVar12 = (longlong)iVar17;
        uVar20 = uVar20 + 0x20;
        iVar17 = iVar17 + 1;
        uVar18 = uVar5;
        if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17)
        goto LAB_14ca7adfa;
        uVar18 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar18 = (int)lVar12 + -1 + uVar20;
      if ((int)uVar5 < (int)uVar18) {
        uVar18 = uVar5;
      }
    }
LAB_14ca7adfa:
    uVar32 = (undefined4)uStack_188;
    uVar33 = (undefined4)((ulonglong)uStack_188 >> 0x20);
    uVar24 = (undefined4)local_190;
    uVar25 = (undefined4)((ulonglong)local_190 >> 0x20);
    uVar26 = (undefined4)uStack_198;
    uVar27 = (undefined4)((ulonglong)uStack_198 >> 0x20);
    uVar34 = (undefined4)local_1a0;
    uVar35 = (undefined4)((ulonglong)local_1a0 >> 0x20);
    uVar30 = (undefined4)uStack_1a8;
    uVar31 = (undefined4)((ulonglong)uStack_1a8 >> 0x20);
    uVar28 = (undefined4)local_1b0;
    uVar29 = (undefined4)((ulonglong)local_1b0 >> 0x20);
    while( true ) {
      if (*(int *)&pTVar16->field_0x8 - *(int *)&pTVar16->field_0x34 != local_150) {
        `TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator>::TRangedForConstIterator::
        operator!='::__l2::<lambda_1>::operator()(local_1d8);
      }
      if (((local_170.CurrentBitIndex == uVar18) &&
          (local_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar16 == pTVar10)) break;
      pdVar14 = (double *)((longlong)local_170.CurrentBitIndex * 0x40 + *(longlong *)pTVar16);
      if (bVar9) {
        dVar3 = *pdVar14;
        if (dVar3 <= (double)CONCAT44(uVar29,uVar28)) {
          uVar28 = SUB84(dVar3,0);
          uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = pdVar14[1];
        if (dVar3 <= (double)CONCAT44(uVar31,uVar30)) {
          uVar30 = SUB84(dVar3,0);
          uVar31 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = pdVar14[2];
        if (dVar3 <= (double)CONCAT44(uVar35,uVar34)) {
          uVar34 = SUB84(dVar3,0);
          uVar35 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = *pdVar14;
        if ((double)CONCAT44(uVar27,uVar26) <= dVar3) {
          uVar26 = SUB84(dVar3,0);
          uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = pdVar14[1];
        if ((double)CONCAT44(uVar25,uVar24) <= dVar3) {
          uVar24 = SUB84(dVar3,0);
          uVar25 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = pdVar14[2];
        if ((double)CONCAT44(uVar33,uVar32) <= dVar3) {
          uVar32 = SUB84(dVar3,0);
          uVar33 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
      }
      else {
        uVar26 = *(undefined4 *)pdVar14;
        uVar27 = *(undefined4 *)((longlong)pdVar14 + 4);
        uVar24 = *(undefined4 *)(pdVar14 + 1);
        uVar25 = *(undefined4 *)((longlong)pdVar14 + 0xc);
        bVar9 = true;
        uVar32 = SUB84(pdVar14[2],0);
        uVar33 = (undefined4)((ulonglong)pdVar14[2] >> 0x20);
        uVar28 = uVar26;
        uVar29 = uVar27;
        uVar30 = uVar24;
        uVar31 = uVar25;
        uVar34 = uVar32;
        uVar35 = uVar33;
      }
      if (bVar9) {
        dVar3 = pdVar14[3];
        if (dVar3 <= (double)CONCAT44(uVar29,uVar28)) {
          uVar28 = SUB84(dVar3,0);
          uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = pdVar14[4];
        if (dVar3 <= (double)CONCAT44(uVar31,uVar30)) {
          uVar30 = SUB84(dVar3,0);
          uVar31 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = pdVar14[5];
        if (dVar3 <= (double)CONCAT44(uVar35,uVar34)) {
          uVar34 = SUB84(dVar3,0);
          uVar35 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = pdVar14[3];
        if ((double)CONCAT44(uVar27,uVar26) <= dVar3) {
          uVar26 = SUB84(dVar3,0);
          uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = pdVar14[4];
        if ((double)CONCAT44(uVar25,uVar24) <= dVar3) {
          uVar24 = SUB84(dVar3,0);
          uVar25 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = pdVar14[5];
        if ((double)CONCAT44(uVar33,uVar32) <= dVar3) {
          uVar32 = SUB84(dVar3,0);
          uVar33 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
      }
      else {
        uVar26 = *(undefined4 *)(pdVar14 + 3);
        uVar27 = *(undefined4 *)((longlong)pdVar14 + 0x1c);
        uVar24 = *(undefined4 *)(pdVar14 + 4);
        uVar25 = *(undefined4 *)((longlong)pdVar14 + 0x24);
        bVar9 = true;
        uVar32 = SUB84(pdVar14[5],0);
        uVar33 = (undefined4)((ulonglong)pdVar14[5] >> 0x20);
        uVar28 = uVar26;
        uVar29 = uVar27;
        uVar30 = uVar24;
        uVar31 = uVar25;
        uVar34 = uVar32;
        uVar35 = uVar33;
      }
      local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
      pTVar16 = local_178;
    }
    dVar3 = (double)CONCAT44(uVar25,uVar24) - (double)CONCAT44(uVar31,uVar30);
    dVar7 = (double)CONCAT44(uVar27,uVar26) - (double)CONCAT44(uVar29,uVar28);
    dVar8 = (double)CONCAT44(uVar33,uVar32) - (double)CONCAT44(uVar35,uVar34);
    pTVar13 = &local_138->Bounds;
    dVar22 = dVar3 * __real_3fe0000000000000;
    dVar23 = dVar7 * __real_3fe0000000000000;
    dVar21 = dVar8 * __real_3fe0000000000000;
    (pTVar13->Origin).field0_0x0._s_0.X = dVar23 + (double)CONCAT44(uVar29,uVar28);
    (local_138->Bounds).Origin.field0_0x0._s_0.Y = dVar22 + (double)CONCAT44(uVar31,uVar30);
    (local_138->Bounds).Origin.field0_0x0._s_0.Z = dVar21 + (double)CONCAT44(uVar35,uVar34);
    (local_138->Bounds).BoxExtent.field0_0x0._s_0.X = dVar23;
    (local_138->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar22;
    (local_138->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar21;
    (local_138->Bounds).SphereRadius =
         SQRT((dVar3 * dVar3 + dVar7 * dVar7 + dVar8 * dVar8) * __real_3fd0000000000000);
    local_138->bBoundsDirty = false;
  }
  __return_storage_ptr___00 = local_130;
  UE::Math::TTransform<double>::ToMatrixWithScale(local_128,&local_118);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            (pTVar13,__return_storage_ptr___00,&local_118);
  return __return_storage_ptr___00;
}

// Clear @ 14ca7e9f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULineSetComponent::Clear(ULineSetComponent *this)

{
  *(undefined4 *)&(this->Lines).field_0x8 = 0;
  if (*(int *)&(this->Lines).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->Lines,0,(int *)&(this->Lines).field_0xc);
  }
  *(undefined4 *)&(this->Lines).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Lines).field_0x34 = 0;
  *(undefined4 *)&(this->Lines).field_0x28 = 0;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// CreateSceneProxy @ 14ca85620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall ULineSetComponent::CreateSceneProxy(ULineSetComponent *this)

{
  FLineSetSceneProxy *pFVar1;
  
  if (0 < *(int *)&(this->Lines).field_0x8 - *(int *)&(this->Lines).field_0x34) {
    pFVar1 = ::operator_new(0x660);
    if (pFVar1 != (FLineSetSceneProxy *)0x0) {
      pFVar1 = FLineSetSceneProxy::FLineSetSceneProxy(pFVar1,this);
      return (FPrimitiveSceneProxy *)pFVar1;
    }
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetNumMaterials @ 14ca90870

int __thiscall ULineSetComponent::GetNumMaterials(ULineSetComponent *this)

{
  return 1;
}

// GetPrivateStaticClass @ 14ca915b0

UClass * __cdecl ULineSetComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULineSetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"LineSetComponent",
               &Z_Registration_Info_UClass_ULineSetComponent.InnerSingleton,
               StaticRegisterNativesULineSetComponent,0x610,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULineSetComponent>,
               InternalVTableHelperCtorCaller<ULineSetComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULineSetComponent.InnerSingleton;
}

// InsertLine @ 14ca96e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULineSetComponent::InsertLine(ULineSetComponent *this,int param_1,FRenderableLine *param_2)

{
  double *pdVar1;
  double dVar2;
  FSparseArrayAllocationInfo *pFVar3;
  FSparseArrayAllocationInfo local_18;
  
  pFVar3 = TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)&this->Lines,&local_18,
                      param_1);
  pdVar1 = pFVar3->Pointer;
  if (pdVar1 != (double *)0x0) {
    dVar2 = (param_2->Start).field0_0x0._s_0.Y;
    *pdVar1 = (param_2->Start).field0_0x0._s_0.X;
    pdVar1[1] = dVar2;
    dVar2 = (param_2->End).field0_0x0._s_0.X;
    pdVar1[2] = (param_2->Start).field0_0x0._s_0.Z;
    pdVar1[3] = dVar2;
    dVar2 = (param_2->End).field0_0x0._s_0.Z;
    pdVar1[4] = (param_2->End).field0_0x0._s_0.Y;
    pdVar1[5] = dVar2;
    dVar2 = *(double *)&param_2->DepthBias;
    pdVar1[6] = *(double *)&param_2->Color;
    pdVar1[7] = dVar2;
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// IsLineValid @ 14ca97740

bool __thiscall ULineSetComponent::IsLineValid(ULineSetComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Lines).field_0x28)) {
    if (*(int *)&(this->Lines).field_0x28 <= param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->Lines).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Lines).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
      return true;
    }
  }
  return false;
}

// RemoveLine @ 14ca9fd60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULineSetComponent::RemoveLine(ULineSetComponent *this,int param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  lVar3 = *(longlong *)&this->Lines;
  bVar5 = (byte)param_1 & 0x1f;
  uVar9 = 1 << bVar5 | 1U >> 0x20 - bVar5;
  puVar1 = &(this->Lines).field_0x10;
  if ((param_1 < 0) || (*(int *)&(this->Lines).field_0x28 <= param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar8 = *(undefined1 **)&(this->Lines).field_0x20;
  lVar2 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = puVar1;
  }
  if ((*(uint *)(puVar8 + lVar2) & uVar9) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationFlags[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,0xc5,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)&(this->Lines).field_0x34 != 0) {
    *(int *)((longlong)*(int *)&(this->Lines).field_0x30 * 0x40 + lVar3) = param_1;
  }
  uVar7 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 * 0x40 + lVar3) = 0xffffffff;
  if (0 < *(int *)&(this->Lines).field_0x34) {
    uVar7 = *(undefined4 *)&(this->Lines).field_0x30;
  }
  *(undefined4 *)((longlong)param_1 * 0x40 + 4 + lVar3) = uVar7;
  puVar8 = &(this->Lines).field_0x34;
  *(int *)puVar8 = *(int *)puVar8 + 1;
  *(int *)&(this->Lines).field_0x30 = param_1;
  if ((param_1 < 0) || (*(int *)&(this->Lines).field_0x28 <= param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar8 = *(undefined1 **)&(this->Lines).field_0x20;
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = puVar1;
  }
  *(uint *)(puVar8 + lVar2) = *(uint *)(puVar8 + lVar2) & ~uVar9;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// ReserveLines @ 14caa0530

void __thiscall ULineSetComponent::ReserveLines(ULineSetComponent *this,int param_1)

{
  TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::Reserve
            ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)&this->Lines,param_1);
  return;
}

// SetAllLinesColor @ 14caa21e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULineSetComponent::SetAllLinesColor(ULineSetComponent *this,FColor *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 local_res18 [8];
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  uStack_94 = 1;
  local_98 = 0;
  iVar3 = *(int *)&(this->Lines).field_0x28;
  puVar2 = &(this->Lines).field_0x10;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Lines).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar2;
    }
    uVar9 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar9 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar7 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14caa22aa;
      uVar9 = puVar11[lVar7 + 1];
    }
    uStack_94 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iStack_84 = local_res20 + -1 + iStack_80;
    if (iVar3 < iStack_84) {
LAB_14caa22aa:
      iStack_84 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Lines).field_0x28;
  local_50 = *(int *)&(this->Lines).field_0x8 - *(int *)&(this->Lines).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar8 = (int)uVar9 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar12 = uVar9 & 0xffffffe0;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Lines).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Lines).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14caa2390;
      uVar9 = *(uint *)(puVar10 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14caa2390:
  while( true ) {
    if (*(int *)&(this->Lines).field_0x8 - *(int *)&(this->Lines).field_0x34 != local_50) {
      `TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if ((local_70.CurrentBitIndex == uVar9) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    ((FColor_u_0 *)((longlong)local_70.CurrentBitIndex * 0x40 + 0x30 + *(longlong *)&this->Lines))->
    _s_0 = (FColor_u_0_s_0)param_1->field0_0x0;
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetAllLinesDepthBias @ 14caa2400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULineSetComponent::SetAllLinesDepthBias(ULineSetComponent *this,float param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 local_res18 [8];
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  local_98 = 0;
  iVar3 = *(int *)&(this->Lines).field_0x28;
  puVar2 = &(this->Lines).field_0x10;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Lines).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar2;
    }
    uVar9 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar9 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar7 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14caa24ca;
      uVar9 = puVar11[lVar7 + 1];
    }
    uStack_94 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iStack_84 = local_res20 + -1 + iStack_80;
    if (iVar3 < iStack_84) {
LAB_14caa24ca:
      iStack_84 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Lines).field_0x28;
  local_50 = *(int *)&(this->Lines).field_0x8 - *(int *)&(this->Lines).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar8 = (int)uVar9 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar12 = uVar9 & 0xffffffe0;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Lines).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Lines).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14caa25b0;
      uVar9 = *(uint *)(puVar10 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14caa25b0:
  while( true ) {
    if (*(int *)&(this->Lines).field_0x8 - *(int *)&(this->Lines).field_0x34 != local_50) {
      `TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if ((local_70.CurrentBitIndex == uVar9) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    *(float *)((longlong)local_70.CurrentBitIndex * 0x40 + 0x38 + *(longlong *)&this->Lines) =
         param_1;
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetAllLinesLength @ 14caa2630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULineSetComponent::SetAllLinesLength(ULineSetComponent *this,float param_1,bool param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  undefined1 local_res10 [8];
  bool local_res18;
  int local_res20;
  int local_120;
  uint uStack_11c;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  int local_d8;
  
  fVar19 = __real_3f800000;
  if (param_1 < 0.0) {
    fVar19 = __real_bf800000;
  }
  fVar23 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if ((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3a83126f) {
    fVar23 = __real_3a83126f;
  }
  iVar5 = *(int *)&(this->Lines).field_0x28;
  puVar2 = &(this->Lines).field_0x10;
  uStack_11c = 1;
  local_120 = 0;
  iStack_10c = 0;
  iStack_108 = 0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->Lines).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar15 = *puVar17;
    iStack_108 = 0;
    local_120 = 0;
    while (uVar15 == 0) {
      iStack_108 = iStack_108 + 0x20;
      lVar13 = (longlong)local_120;
      local_120 = local_120 + 1;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_120) goto LAB_14caa274c;
      uVar15 = puVar17[lVar13 + 1];
    }
    uStack_11c = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_11c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iStack_10c = local_res20 + -1 + iStack_108;
    if (iVar5 < iStack_10c) {
LAB_14caa274c:
      iStack_10c = iVar5;
    }
  }
  uVar15 = *(uint *)&(this->Lines).field_0x28;
  local_d8 = *(int *)&(this->Lines).field_0x8 - *(int *)&(this->Lines).field_0x34;
  local_f8._padding_ = CONCAT44(uStack_11c,local_120);
  iVar14 = (int)uVar15 >> 5;
  local_f8.CurrentBitIndex = iStack_10c;
  local_f8.UnvisitedBitMask = 0xffffffff;
  local_f8._28_4_ = uStack_104;
  local_f8.BaseBitIndex = iStack_108;
  uVar18 = uVar15 & 0xffffffe0;
  local_res18 = param_2;
  local_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar10 = __real_3e45798ee0000000;
  dVar9 = __real_3ff0000000000000;
  uVar6 = *(uint *)&(this->Lines).field_0x28;
  if (uVar15 != uVar6) {
    puVar16 = *(undefined1 **)&(this->Lines).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14caa2890;
      uVar15 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_14caa2890:
  while( true ) {
    if (*(int *)&(this->Lines).field_0x8 - *(int *)&(this->Lines).field_0x34 != local_d8) {
      `TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if ((local_f8.CurrentBitIndex == uVar15) &&
       (local_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    lVar13 = *(longlong *)&this->Lines;
    lVar12 = (longlong)local_f8.CurrentBitIndex * 0x40;
    dVar3 = *(double *)(lVar12 + 8 + lVar13);
    dVar21 = *(double *)(lVar12 + 0x18 + lVar13) - *(double *)(lVar12 + lVar13);
    dVar4 = *(double *)(lVar12 + 0x10 + lVar13);
    dVar22 = *(double *)(lVar12 + 0x20 + lVar13) - dVar3;
    dVar8 = *(double *)(lVar12 + 0x28 + lVar13) - dVar4;
    dVar20 = dVar22 * dVar22 + dVar21 * dVar21 + dVar8 * dVar8;
    if (0.0 < dVar20) {
      if (dVar10 < dVar20) {
        dVar20 = dVar9 / SQRT(dVar20);
        dVar21 = dVar21 * dVar20;
        dVar22 = dVar22 * dVar20;
        dVar8 = dVar8 * dVar20;
      }
      dVar20 = (double)(fVar23 * fVar19);
      *(double *)(lVar12 + 0x18 + lVar13) = dVar20 * dVar21 + *(double *)(lVar12 + lVar13);
      *(double *)(lVar12 + 0x20 + lVar13) = dVar20 * dVar22 + dVar3;
      *(double *)(lVar12 + 0x28 + lVar13) = dVar20 * dVar8 + dVar4;
    }
    local_f8.UnvisitedBitMask = local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = local_res18;
  return;
}

// SetAllLinesThickness @ 14caa2a10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULineSetComponent::SetAllLinesThickness(ULineSetComponent *this,float param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 local_res18 [8];
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  local_98 = 0;
  iVar3 = *(int *)&(this->Lines).field_0x28;
  puVar2 = &(this->Lines).field_0x10;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Lines).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar2;
    }
    uVar9 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar9 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar7 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14caa2ada;
      uVar9 = puVar11[lVar7 + 1];
    }
    uStack_94 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iStack_84 = local_res20 + -1 + iStack_80;
    if (iVar3 < iStack_84) {
LAB_14caa2ada:
      iStack_84 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Lines).field_0x28;
  local_50 = *(int *)&(this->Lines).field_0x8 - *(int *)&(this->Lines).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar8 = (int)uVar9 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar12 = uVar9 & 0xffffffe0;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Lines).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Lines).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14caa2bc0;
      uVar9 = *(uint *)(puVar10 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14caa2bc0:
  while( true ) {
    if (*(int *)&(this->Lines).field_0x8 - *(int *)&(this->Lines).field_0x34 != local_50) {
      `TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if ((local_70.CurrentBitIndex == uVar9) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    *(float *)((longlong)local_70.CurrentBitIndex * 0x40 + 0x34 + *(longlong *)&this->Lines) =
         param_1;
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetLineColor @ 14caa3880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULineSetComponent::SetLineColor(ULineSetComponent *this,int param_1,FColor *param_2)

{
  ((FColor_u_0 *)((longlong)param_1 * 0x40 + 0x30 + *(longlong *)&this->Lines))->_s_0 =
       (FColor_u_0_s_0)param_2->field0_0x0;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetLineEnd @ 14caa38b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULineSetComponent::SetLineEnd(ULineSetComponent *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = *(longlong *)&this->Lines;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  pdVar1 = (double *)((longlong)param_1 * 0x40 + 0x18 + lVar2);
  *pdVar1 = (param_2->field0_0x0)._s_0.X;
  pdVar1[1] = dVar3;
  *(double *)((longlong)param_1 * 0x40 + 0x28 + lVar2) = (param_2->field0_0x0)._s_0.Z;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// SetLineMaterial @ 14caa3900

void __thiscall
ULineSetComponent::SetLineMaterial(ULineSetComponent *this,UMaterialInterface *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->LineMaterial).field0_0x0.DebugPtr = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014caa3942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x6b8))(this,0,param_1);
  return;
}

// SetLineStart @ 14caa39a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULineSetComponent::SetLineStart(ULineSetComponent *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = *(longlong *)&this->Lines;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  pdVar1 = (double *)((longlong)param_1 * 0x40 + lVar2);
  *pdVar1 = (param_2->field0_0x0)._s_0.X;
  pdVar1[1] = dVar3;
  *(double *)((longlong)param_1 * 0x40 + 0x10 + lVar2) = (param_2->field0_0x0)._s_0.Z;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// SetLineThickness @ 14caa39f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULineSetComponent::SetLineThickness(ULineSetComponent *this,int param_1,float param_2)

{
  *(float *)((longlong)param_1 * 0x40 + 0x34 + *(longlong *)&this->Lines) = param_2;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// StaticRegisterNativesULineSetComponent @ 14caa7160

void __cdecl ULineSetComponent::StaticRegisterNativesULineSetComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ULineSetComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddLines @ 14caaab20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULineSetComponent::execAddLines(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double *pdVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  FProperty *pFVar5;
  void *pvVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  void **ppvVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  void **ppvVar17;
  float local_res10 [2];
  uint *local_res18;
  float local_res20 [2];
  FColor_u_0 local_f8;
  uint local_f4;
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  void **local_c8;
  FColor_u_0 *local_c0;
  longlong local_b8;
  TVector<double>_u_0 local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FColor_u_0 local_80;
  float local_7c;
  float local_78;
  
  uVar13 = 0;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_f0 = (void *)0x0;
  local_e8 = 0;
  ppvVar14 = &local_e0;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar14 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_c8 = ppvVar14;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar17 = &local_f0;
  if (ppvVar4 != (void **)0x0) {
    ppvVar17 = ppvVar4;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_res20[0] = 0.0;
  local_c0 = &local_f8;
  if ((FColor_u_0 *)param_2->MostRecentPropertyAddress != (FColor_u_0 *)0x0) {
    local_c0 = (FColor_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar9 = local_res20[0];
  fVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f4 = *(uint *)(ppvVar14 + 1);
  if (local_f4 == *(uint *)(ppvVar17 + 1)) {
    local_b8 = (longlong)(int)local_f4;
    uVar15 = uVar13;
    uVar16 = uVar13;
    uVar11 = local_f4;
    if (0 < (int)local_f4) {
      do {
        uVar12 = (uint)uVar13;
        uVar11 = 0;
        if ((int)uVar12 < *(int *)(ppvVar17 + 1)) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pvVar6 = *ppvVar17;
        uVar11 = 0;
        if ((int)uVar12 < *(int *)(local_c8 + 1)) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_7c = fVar9;
        local_78 = fVar8;
        pdVar2 = (double *)(uVar15 + (longlong)*local_c8);
        local_b0._s_0.X = *pdVar2;
        local_b0._s_0.Y = pdVar2[1];
        local_b0._s_0.Z = *(double *)(uVar15 + 0x10 + (longlong)*local_c8);
        puVar3 = (undefined8 *)(uVar15 + (longlong)pvVar6);
        local_98 = *puVar3;
        uStack_90 = puVar3[1];
        local_80 = *local_c0;
        local_88 = *(undefined8 *)(uVar15 + 0x10 + (longlong)pvVar6);
        UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
        AddLineInternal((ULineSetComponent *)param_1,(FRenderableLine *)&local_b0._s_0);
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar16 = uVar16 + 1;
        uVar15 = uVar15 + 0x18;
        param_3 = local_res18;
        uVar11 = local_f4;
      } while ((longlong)uVar16 < local_b8);
    }
  }
  else {
    local_d0 = 0;
    FFrame::KismetExecutionMessage
              (L"InStart and InEnd arrays are not the same size.",Error,(FName)0x0);
    uVar11 = 0;
  }
  *(uint *)param_3 = uVar11;
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// execClear @ 14caab170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULineSetComponent::execClear(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x25].field_0x18 = 0;
  if (*(int *)&param_1[0x25].field_0x1c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&param_1[0x25].field_0x10,0,
               (int *)&param_1[0x25].field_0x1c);
  }
  *(undefined4 *)&param_1[0x26].field_0x18 = 0xffffffff;
  *(undefined4 *)&param_1[0x26].field_0x1c = 0;
  *(undefined4 *)&param_1[0x26].field_0x10 = 0;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  param_1[0x25].field_0x8 = 1;
  return;
}

// execSetLineMaterial @ 14caab670

void __cdecl ULineSetComponent::execSetLineMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0x23].field_0x18 = pUVar2;
  (**(code **)(*(longlong *)param_1 + 0x6b8))(param_1,0,pUVar2);
  return;
}

