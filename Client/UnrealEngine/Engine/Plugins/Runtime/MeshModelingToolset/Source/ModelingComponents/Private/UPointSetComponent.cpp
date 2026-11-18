// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 29

// StaticClass @ 14ca3f320

UClass * __cdecl UPointSetComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPointSetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PointSetComponent",
               &Z_Registration_Info_UClass_UPointSetComponent.InnerSingleton,
               StaticRegisterNativesUPointSetComponent,0x610,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPointSetComponent>,
               InternalVTableHelperCtorCaller<UPointSetComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPointSetComponent.InnerSingleton;
}

// UPointSetComponent @ 14ca68c30

UPointSetComponent * __thiscall
UPointSetComponent::UPointSetComponent(UPointSetComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->PointMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->Points = 0;
  *(undefined8 *)&(this->Points).field_0x8 = 0;
  *(undefined8 *)&(this->Points).field_0x20 = 0;
  *(undefined4 *)&(this->Points).field_0x28 = 0;
  *(undefined4 *)&(this->Points).field_0x2c = 0x80;
  *(undefined4 *)&(this->Points).field_0x34 = 0;
  *(undefined4 *)&(this->Points).field_0x30 = 0xffffffff;
  return this;
}

// UPointSetComponent @ 14ca68ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPointSetComponent * __thiscall UPointSetComponent::UPointSetComponent(UPointSetComponent *this)

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
  (this->PointMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->Points = 0;
  *(undefined8 *)&(this->Points).field_0x8 = 0;
  *(undefined8 *)&(this->Points).field_0x20 = 0;
  *(undefined4 *)&(this->Points).field_0x28 = 0;
  *(undefined4 *)&(this->Points).field_0x2c = 0x80;
  *(undefined4 *)&(this->Points).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Points).field_0x34 = 0;
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

// ~UPointSetComponent @ 14ca6bb00

void __thiscall UPointSetComponent::~UPointSetComponent(UPointSetComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator>(&this->Points);
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AddPoint @ 14ca78310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UPointSetComponent::AddPoint(UPointSetComponent *this,FRenderablePoint *param_1)

{
  int iVar1;
  
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  iVar1 = AddPointInternal(this,param_1);
  return iVar1;
}

// AddPointInternal @ 14ca78340

int __thiscall
UPointSetComponent::AddPointInternal(UPointSetComponent *this,FRenderablePoint *param_1)

{
  TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator> *this_00;
  int iVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  this_00 = &this->Points;
  iVar1 = *(int *)&(this->Points).field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this_00,(int *)&(this->Points).field_0x8,
                       (int *)&(this->Points).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Points).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Points).field_0x30;
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Points).field_0x30 = iVar2;
    *(int *)&(this->Points).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *)this_00,&local_18,iVar4);
  if (local_18.Pointer != (double *)0x0) {
    dVar3 = (param_1->Position).field0_0x0._s_0.Y;
    *(double *)local_18.Pointer = (param_1->Position).field0_0x0._s_0.X;
    *(double *)((longlong)local_18.Pointer + 8) = dVar3;
    dVar3 = *(double *)&param_1->Color;
    *(double *)((longlong)local_18.Pointer + 0x10) = (param_1->Position).field0_0x0._s_0.Z;
    *(double *)((longlong)local_18.Pointer + 0x18) = dVar3;
    *(double *)((longlong)local_18.Pointer + 0x20) = *(double *)&param_1->DepthBias;
  }
  this->bBoundsDirty = true;
  return local_18.Index;
}

// AddPoints @ 14ca78430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UPointSetComponent::AddPoints
          (UPointSetComponent *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,FColor *param_2,
          float param_3,float param_4)

{
  TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FColor_u_0_s_0 *pFVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  FColor_u_0_s_0 *local_res18;
  FSparseArrayAllocationInfo local_a0 [2];
  undefined8 local_80;
  FColor_u_0 FStack_78;
  float fStack_74;
  float local_70;
  undefined4 uStack_6c;
  
  iVar9 = param_1->ArrayNum;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    local_res18 = (FColor_u_0_s_0 *)param_2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    pFVar7 = local_res18;
    this->bBoundsDirty = true;
    iVar2 = param_1->ArrayNum;
    pFVar10 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar1) break;
      local_80 = *(undefined8 *)(pFVar10 + 0x10);
      this_00 = &this->Points;
      iVar3 = *(int *)&(this->Points).field_0x34;
      FStack_78._s_0 = *pFVar7;
      local_70 = param_4;
      uVar5 = *(undefined8 *)pFVar10;
      uVar6 = *(undefined8 *)(pFVar10 + 8);
      fStack_74 = param_3;
      if (iVar3 == 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,1,(ForAnyElementType *)this_00,(int *)&(this->Points).field_0x8,
                           (int *)&(this->Points).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Points).field_0x10,false);
      }
      else {
        iVar8 = *(int *)&(this->Points).field_0x30;
        iVar3 = iVar3 + -1;
        iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar8 * 0x28);
        *(int *)&(this->Points).field_0x30 = iVar4;
        *(int *)&(this->Points).field_0x34 = iVar3;
        if (iVar3 != 0) {
          *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x28) = 0xffffffff;
        }
      }
      TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::AllocateIndex
                ((TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *)this_00,local_a0,iVar8);
      if (local_a0[0].Pointer != (undefined8 *)0x0) {
        *(undefined8 *)local_a0[0].Pointer = uVar5;
        *(undefined8 *)((longlong)local_a0[0].Pointer + 8) = uVar6;
        *(undefined8 *)((longlong)local_a0[0].Pointer + 0x10) = local_80;
        *(ulonglong *)((longlong)local_a0[0].Pointer + 0x18) = CONCAT44(fStack_74,FStack_78.Bits);
        *(ulonglong *)((longlong)local_a0[0].Pointer + 0x20) = CONCAT44(uStack_6c,local_70);
      }
      pFVar10 = pFVar10 + 0x18;
    }
  }
  return iVar9;
}

// AddPoints @ 14ca78620

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
UPointSetComponent::AddPoints
          (UPointSetComponent *this,int param_1,
          TFunctionRef<void___cdecl(int,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_>_&)>
          *param_2,int param_3,bool param_4)

{
  FRenderablePoint *pFVar1;
  uint uVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int local_res20 [2];
  ForAnyElementType local_38;
  uint local_30;
  int local_2c;
  
  iVar5 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_2c = 0;
  if ((0 < param_3) &&
     (TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::Reserve
                ((TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *)&this->Points,
                 (param_1 * param_3 - *(int *)&(this->Points).field_0x34) +
                 *(int *)&(this->Points).field_0x8), local_2c < param_3)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,param_3,&local_38,local_30,&local_2c);
  }
  if (0 < param_1) {
    do {
      local_30 = 0;
      if ((local_2c < 0) && (local_2c != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&local_38,0,&local_2c);
      }
      local_res20[0] = iVar5;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res20);
      uVar2 = local_30;
      uVar3 = (ulonglong)(int)local_30;
      pFVar1 = (FRenderablePoint *)(local_38.Data + uVar3 * 0x28);
      FVar4.Data = local_38.Data;
      while( true ) {
        if ((uint)uVar3 != uVar2) {
          `TCheckedPointerIterator<FRenderablePoint,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if ((FRenderablePoint *)FVar4.Data == pFVar1) break;
        AddPointInternal(this,(FRenderablePoint *)FVar4.Data);
        uVar3 = (ulonglong)local_30;
        FVar4.Data = FVar4.Data + 0x28;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  if (!param_4) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  if ((FRenderablePoint *)local_38.Data != (FRenderablePoint *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// CalcBounds @ 14ca7b710

TBoxSphereBounds<double,double> * __thiscall
UPointSetComponent::CalcBounds
          (UPointSetComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator> *pTVar14;
  UPointSetComponent *pUVar15;
  bool bVar16;
  longlong lVar17;
  TBoxSphereBounds<double,double> *pTVar18;
  undefined1 *puVar19;
  TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator> *pTVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  char cVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  char local_1d8 [8];
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
  TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator> *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  int local_150;
  int local_148;
  TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator> *local_140;
  UPointSetComponent *local_138;
  TTransform<double> *local_130;
  TBoxSphereBounds<double,double> *local_128;
  TMatrix<double> local_118;
  
  local_138 = this;
  local_130 = param_1;
  local_128 = __return_storage_ptr__;
  if (this->bBoundsDirty != false) {
    pTVar20 = &this->Points;
    iVar6 = *(int *)&(this->Points).field_0x28;
    puVar1 = &(this->Points).field_0x10;
    local_1d8[0] = '\0';
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
    if (iVar6 != 0) {
      puVar23 = *(uint **)&(this->Points).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar22 = *puVar23;
      iStack_1b8 = 0;
      local_1d0 = 0;
      while (uVar22 == 0) {
        iStack_1b8 = iStack_1b8 + 0x20;
        lVar17 = (longlong)local_1d0;
        local_1d0 = local_1d0 + 1;
        if ((int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5 < local_1d0) goto LAB_14ca7b85d;
        uVar22 = puVar23[lVar17 + 1];
      }
      uStack_1cc = -uVar22 & uVar22;
      uVar3 = (ulonglong)uStack_1cc * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_148 = (int)lVar17;
      iStack_1bc = local_148 + -1 + iStack_1b8;
      if (iVar6 < iStack_1bc) {
LAB_14ca7b85d:
        iStack_1bc = iVar6;
      }
    }
    local_1c0 = 0xffffffff;
    uVar22 = *(uint *)&(this->Points).field_0x28;
    local_150 = *(int *)&(this->Points).field_0x8 - *(int *)&(this->Points).field_0x34;
    local_170._padding_ = CONCAT44(uStack_1cc,local_1d0);
    local_170.CurrentBitIndex = iStack_1bc;
    local_170.UnvisitedBitMask = 0xffffffff;
    local_170._28_4_ = uStack_1b4;
    local_170.BaseBitIndex = iStack_1b8;
    iVar21 = (int)uVar22 >> 5;
    uVar25 = uVar22 & 0xffffffe0;
    puStack_1c8 = puVar1;
    local_178 = pTVar20;
    local_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_140 = pTVar20;
    if ((((int)uVar22 < 0) || (iVar6 < (int)uVar22)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TBoxSphereBounds<double,double> *)(*pcVar9)();
      return pTVar18;
    }
    pTVar14 = local_140;
    uVar7 = *(uint *)&(this->Points).field_0x28;
    if (uVar22 != uVar7) {
      puVar19 = *(undefined1 **)&(this->Points).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar21 * 4);
      while (uVar22 == 0) {
        lVar17 = (longlong)iVar21;
        uVar25 = uVar25 + 0x20;
        iVar21 = iVar21 + 1;
        uVar22 = uVar7;
        if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar21)
        goto LAB_14ca7b94a;
        uVar22 = *(uint *)(puVar19 + lVar17 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar22 = (int)lVar17 + -1 + uVar25;
      if ((int)uVar7 < (int)uVar22) {
        uVar22 = uVar7;
      }
    }
LAB_14ca7b94a:
    uVar36 = (undefined4)uStack_188;
    uVar37 = (undefined4)((ulonglong)uStack_188 >> 0x20);
    uVar28 = (undefined4)local_190;
    uVar29 = (undefined4)((ulonglong)local_190 >> 0x20);
    uVar30 = (undefined4)uStack_198;
    uVar31 = (undefined4)((ulonglong)uStack_198 >> 0x20);
    uVar38 = (undefined4)local_1a0;
    uVar39 = (undefined4)((ulonglong)local_1a0 >> 0x20);
    uVar34 = (undefined4)uStack_1a8;
    uVar35 = (undefined4)((ulonglong)uStack_1a8 >> 0x20);
    uVar32 = (undefined4)local_1b0;
    uVar33 = (undefined4)((ulonglong)local_1b0 >> 0x20);
    cVar24 = local_1d8[0];
    while( true ) {
      if (*(int *)&pTVar20->field_0x8 - *(int *)&pTVar20->field_0x34 != local_150) {
        `TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator>::TRangedForConstIterator::
        operator!='::__l2::<lambda_1>::operator()(local_1d8);
      }
      lVar17 = (longlong)local_170.CurrentBitIndex;
      if (((local_170.CurrentBitIndex == uVar22) &&
          (local_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar20 == pTVar14)) break;
      lVar8 = *(longlong *)pTVar20;
      if (cVar24 == '\0') {
        puVar2 = (undefined4 *)(lVar8 + lVar17 * 0x28);
        uVar30 = *puVar2;
        uVar31 = puVar2[1];
        uVar28 = puVar2[2];
        uVar29 = puVar2[3];
        cVar24 = '\x01';
        uVar5 = *(undefined8 *)(lVar8 + 0x10 + lVar17 * 0x28);
        uVar36 = (undefined4)uVar5;
        uVar37 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uVar32 = uVar30;
        uVar33 = uVar31;
        uVar34 = uVar28;
        uVar35 = uVar29;
        uVar38 = uVar36;
        uVar39 = uVar37;
      }
      else {
        dVar4 = *(double *)(lVar8 + lVar17 * 0x28);
        if (dVar4 <= (double)CONCAT44(uVar33,uVar32)) {
          uVar32 = SUB84(dVar4,0);
          uVar33 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        dVar4 = *(double *)(lVar8 + 8 + lVar17 * 0x28);
        if (dVar4 <= (double)CONCAT44(uVar35,uVar34)) {
          uVar34 = SUB84(dVar4,0);
          uVar35 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        dVar4 = *(double *)(lVar8 + 0x10 + lVar17 * 0x28);
        if (dVar4 <= (double)CONCAT44(uVar39,uVar38)) {
          uVar38 = SUB84(dVar4,0);
          uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        dVar4 = *(double *)(lVar8 + lVar17 * 0x28);
        if ((double)CONCAT44(uVar31,uVar30) <= dVar4) {
          uVar30 = SUB84(dVar4,0);
          uVar31 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        dVar4 = *(double *)(lVar8 + 8 + lVar17 * 0x28);
        if ((double)CONCAT44(uVar29,uVar28) <= dVar4) {
          uVar28 = SUB84(dVar4,0);
          uVar29 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        dVar4 = *(double *)(lVar8 + 0x10 + lVar17 * 0x28);
        if ((double)CONCAT44(uVar37,uVar36) <= dVar4) {
          uVar36 = SUB84(dVar4,0);
          uVar37 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
      }
      local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
      pTVar20 = local_178;
    }
    dVar12 = (double)CONCAT44(uVar29,uVar28) - (double)CONCAT44(uVar35,uVar34);
    dVar13 = (double)CONCAT44(uVar31,uVar30) - (double)CONCAT44(uVar33,uVar32);
    dVar26 = (double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar39,uVar38);
    dVar11 = dVar12 * __real_3fe0000000000000;
    dVar27 = dVar13 * __real_3fe0000000000000;
    dVar4 = dVar26 * __real_3fe0000000000000;
    (local_138->Bounds).Origin.field0_0x0._s_0.X = dVar27 + (double)CONCAT44(uVar33,uVar32);
    (local_138->Bounds).Origin.field0_0x0._s_0.Y = dVar11 + (double)CONCAT44(uVar35,uVar34);
    (local_138->Bounds).Origin.field0_0x0._s_0.Z = dVar4 + (double)CONCAT44(uVar39,uVar38);
    (local_138->Bounds).BoxExtent.field0_0x0._s_0.X = dVar27;
    (local_138->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar11;
    (local_138->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar4;
    dVar4 = SQRT((dVar12 * dVar12 + dVar13 * dVar13 + dVar26 * dVar26) * __real_3fd0000000000000);
    (local_138->Bounds).SphereRadius = dVar4;
    local_138->bBoundsDirty = false;
    if (0 < *(int *)&(local_138->Points).field_0x8 - *(int *)&(local_138->Points).field_0x34) {
      dVar13 = (local_138->Bounds).Origin.field0_0x0._s_0.Y;
      dVar27 = (double)*(float *)(*(longlong *)pTVar14 + 0x1c);
      dVar11 = (local_138->Bounds).BoxExtent.field0_0x0._s_0.X;
      dVar12 = (local_138->Bounds).BoxExtent.field0_0x0._s_0.Y;
      dVar26 = dVar27 + (local_138->Bounds).BoxExtent.field0_0x0._s_0.Z;
      (local_138->Bounds).Origin.field0_0x0._s_0.X = (local_138->Bounds).Origin.field0_0x0._s_0.X;
      (local_138->Bounds).Origin.field0_0x0._s_0.Y = dVar13;
      uVar30 = *(undefined4 *)((longlong)&(local_138->Bounds).Origin.field0_0x0 + 0x14);
      *(undefined4 *)((longlong)&(local_138->Bounds).Origin.field0_0x0 + 0x10) =
           *(undefined4 *)((longlong)&(local_138->Bounds).Origin.field0_0x0 + 0x10);
      *(undefined4 *)((longlong)&(local_138->Bounds).Origin.field0_0x0 + 0x14) = uVar30;
      (local_138->Bounds).BoxExtent.field0_0x0._s_0.X = dVar27 + dVar11;
      auVar10._8_4_ = SUB84(dVar26,0);
      auVar10._0_8_ = dVar27 + dVar12;
      auVar10._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(local_138->Bounds).BoxExtent.field0_0x0 + 8) = auVar10;
      (local_138->Bounds).SphereRadius = dVar27 + dVar4;
    }
  }
  pUVar15 = local_138;
  UE::Math::TTransform<double>::ToMatrixWithScale(local_130,&local_118);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy(&pUVar15->Bounds,local_128,&local_118);
  return local_128;
}

// Clear @ 14ca7ea70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPointSetComponent::Clear(UPointSetComponent *this)

{
  *(undefined4 *)&(this->Points).field_0x8 = 0;
  if (*(int *)&(this->Points).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->Points,0,(int *)&(this->Points).field_0xc);
  }
  *(undefined4 *)&(this->Points).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Points).field_0x34 = 0;
  *(undefined4 *)&(this->Points).field_0x28 = 0;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// CreateSceneProxy @ 14ca86000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UPointSetComponent::CreateSceneProxy(UPointSetComponent *this)

{
  FPointSetSceneProxy *pFVar1;
  
  if (0 < *(int *)&(this->Points).field_0x8 - *(int *)&(this->Points).field_0x34) {
    pFVar1 = ::operator_new(0x660);
    if (pFVar1 != (FPointSetSceneProxy *)0x0) {
      pFVar1 = FPointSetSceneProxy::FPointSetSceneProxy(pFVar1,this);
      return (FPrimitiveSceneProxy *)pFVar1;
    }
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetNumMaterials @ 14ca90890

int __thiscall UPointSetComponent::GetNumMaterials(UPointSetComponent *this)

{
  return 1;
}

// GetPoint @ 14ca90ad0

FRenderablePoint * __thiscall UPointSetComponent::GetPoint(UPointSetComponent *this,int param_1)

{
  return (FRenderablePoint *)(*(longlong *)&this->Points + (longlong)param_1 * 0x28);
}

// GetPrivateStaticClass @ 14ca91f70

UClass * __cdecl UPointSetComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPointSetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PointSetComponent",
               &Z_Registration_Info_UClass_UPointSetComponent.InnerSingleton,
               StaticRegisterNativesUPointSetComponent,0x610,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPointSetComponent>,
               InternalVTableHelperCtorCaller<UPointSetComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPointSetComponent.InnerSingleton;
}

// InsertPoint @ 14ca96ef0

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
UPointSetComponent::InsertPoint(UPointSetComponent *this,int param_1,FRenderablePoint *param_2)

{
  double *pdVar1;
  double dVar2;
  FSparseArrayAllocationInfo *pFVar3;
  FSparseArrayAllocationInfo local_18;
  
  pFVar3 = TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *)&this->Points,&local_18
                      ,param_1);
  pdVar1 = pFVar3->Pointer;
  if (pdVar1 != (double *)0x0) {
    dVar2 = (param_2->Position).field0_0x0._s_0.Y;
    *pdVar1 = (param_2->Position).field0_0x0._s_0.X;
    pdVar1[1] = dVar2;
    dVar2 = *(double *)&param_2->Color;
    pdVar1[2] = (param_2->Position).field0_0x0._s_0.Z;
    pdVar1[3] = dVar2;
    pdVar1[4] = *(double *)&param_2->DepthBias;
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// IsPointValid @ 14ca977e0

bool __thiscall UPointSetComponent::IsPointValid(UPointSetComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Points).field_0x28)) {
    if (*(int *)&(this->Points).field_0x28 <= param_1) {
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
    puVar4 = *(undefined1 **)&(this->Points).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Points).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
      return true;
    }
  }
  return false;
}

// RemovePoint @ 14ca9fee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPointSetComponent::RemovePoint(UPointSetComponent *this,int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  lVar4 = *(longlong *)&this->Points;
  bVar6 = (byte)param_1 & 0x1f;
  uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
  puVar1 = &(this->Points).field_0x10;
  if ((param_1 < 0) || (*(int *)&(this->Points).field_0x28 <= param_1)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar9 = *(undefined1 **)&(this->Points).field_0x20;
  lVar3 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = puVar1;
  }
  if ((*(uint *)(puVar9 + lVar3) & uVar10) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationFlags[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,0xc5,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)&(this->Points).field_0x34 != 0) {
    *(int *)(lVar4 + (longlong)*(int *)&(this->Points).field_0x30 * 0x28) = param_1;
  }
  puVar2 = (undefined4 *)(lVar4 + (longlong)param_1 * 0x28);
  uVar8 = 0xffffffff;
  *puVar2 = 0xffffffff;
  if (0 < *(int *)&(this->Points).field_0x34) {
    uVar8 = *(undefined4 *)&(this->Points).field_0x30;
  }
  puVar2[1] = uVar8;
  puVar9 = &(this->Points).field_0x34;
  *(int *)puVar9 = *(int *)puVar9 + 1;
  *(int *)&(this->Points).field_0x30 = param_1;
  if ((param_1 < 0) || (*(int *)&(this->Points).field_0x28 <= param_1)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar9 = *(undefined1 **)&(this->Points).field_0x20;
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = puVar1;
  }
  *(uint *)(puVar9 + lVar3) = *(uint *)(puVar9 + lVar3) & ~uVar10;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// ReservePoints @ 14caa0550

void __thiscall UPointSetComponent::ReservePoints(UPointSetComponent *this,int param_1)

{
  TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::Reserve
            ((TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *)&this->Points,param_1);
  return;
}

// SetAllPointsColor @ 14caa2c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPointSetComponent::SetAllPointsColor(UPointSetComponent *this,FColor *param_1)

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
  iVar3 = *(int *)&(this->Points).field_0x28;
  puVar2 = &(this->Points).field_0x10;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Points).field_0x20;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14caa2d0a;
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
LAB_14caa2d0a:
      iStack_84 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Points).field_0x28;
  local_50 = *(int *)&(this->Points).field_0x8 - *(int *)&(this->Points).field_0x34;
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
  uVar4 = *(uint *)&(this->Points).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Points).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14caa2df0;
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
LAB_14caa2df0:
  while( true ) {
    if (*(int *)&(this->Points).field_0x8 - *(int *)&(this->Points).field_0x34 != local_50) {
      `TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='
      ::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((local_70.CurrentBitIndex == uVar9) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    ((FColor_u_0 *)(*(longlong *)&this->Points + 0x18 + (longlong)local_70.CurrentBitIndex * 0x28))
    ->_s_0 = (FColor_u_0_s_0)param_1->field0_0x0;
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetAllPointsDepthBias @ 14caa2e60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPointSetComponent::SetAllPointsDepthBias(UPointSetComponent *this,float param_1)

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
  iVar3 = *(int *)&(this->Points).field_0x28;
  puVar2 = &(this->Points).field_0x10;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Points).field_0x20;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14caa2f2a;
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
LAB_14caa2f2a:
      iStack_84 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Points).field_0x28;
  local_50 = *(int *)&(this->Points).field_0x8 - *(int *)&(this->Points).field_0x34;
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
  uVar4 = *(uint *)&(this->Points).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Points).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14caa3010;
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
LAB_14caa3010:
  while( true ) {
    if (*(int *)&(this->Points).field_0x8 - *(int *)&(this->Points).field_0x34 != local_50) {
      `TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='
      ::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((local_70.CurrentBitIndex == uVar9) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    *(float *)(*(longlong *)&this->Points + 0x20 + (longlong)local_70.CurrentBitIndex * 0x28) =
         param_1;
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetAllPointsSize @ 14caa3090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPointSetComponent::SetAllPointsSize(UPointSetComponent *this,float param_1)

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
  iVar3 = *(int *)&(this->Points).field_0x28;
  puVar2 = &(this->Points).field_0x10;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Points).field_0x20;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14caa315a;
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
LAB_14caa315a:
      iStack_84 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Points).field_0x28;
  local_50 = *(int *)&(this->Points).field_0x8 - *(int *)&(this->Points).field_0x34;
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
  uVar4 = *(uint *)&(this->Points).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Points).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14caa3240;
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
LAB_14caa3240:
  while( true ) {
    if (*(int *)&(this->Points).field_0x8 - *(int *)&(this->Points).field_0x34 != local_50) {
      `TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='
      ::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((local_70.CurrentBitIndex == uVar9) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    *(float *)(*(longlong *)&this->Points + 0x1c + (longlong)local_70.CurrentBitIndex * 0x28) =
         param_1;
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetPointColor @ 14caa41e0

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
UPointSetComponent::SetPointColor(UPointSetComponent *this,int param_1,FColor *param_2)

{
  ((FColor_u_0 *)(*(longlong *)&this->Points + 0x18 + (longlong)param_1 * 0x28))->_s_0 =
       (FColor_u_0_s_0)param_2->field0_0x0;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetPointMaterial @ 14caa4210

void __thiscall
UPointSetComponent::SetPointMaterial(UPointSetComponent *this,UMaterialInterface *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PointMaterial).field0_0x0.DebugPtr = param_1;
  UMeshComponent::SetMaterial((UMeshComponent *)this,0,param_1);
  return;
}

// SetPointPosition @ 14caa4260

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
UPointSetComponent::SetPointPosition(UPointSetComponent *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  lVar2 = *(longlong *)&this->Points;
  pdVar1 = (double *)(lVar2 + (longlong)param_1 * 0x28);
  *pdVar1 = (param_2->field0_0x0)._s_0.X;
  pdVar1[1] = dVar3;
  *(double *)(lVar2 + 0x10 + (longlong)param_1 * 0x28) = (param_2->field0_0x0)._s_0.Z;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// SetPointSize @ 14caa42b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPointSetComponent::SetPointSize(UPointSetComponent *this,int param_1,float param_2)

{
  *(float *)(*(longlong *)&this->Points + 0x1c + (longlong)param_1 * 0x28) = param_2;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// StaticRegisterNativesUPointSetComponent @ 14caa7290

void __cdecl UPointSetComponent::StaticRegisterNativesUPointSetComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPointSetComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddPoints @ 14caaae70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPointSetComponent::execAddPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FField **ppFVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  void **ppvVar6;
  FProperty *pFVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 *this;
  undefined8 *puVar14;
  uchar *puVar15;
  void **ppvVar16;
  undefined1 local_res10 [8];
  int *local_res18;
  undefined4 local_res20 [2];
  undefined4 local_d8;
  uchar local_d4 [4];
  int local_d0;
  void *local_c8;
  undefined8 local_c0;
  FSparseArrayAllocationInfo local_b8 [2];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar16 = &local_c8;
  if (ppvVar6 != (void **)0x0) {
    ppvVar16 = ppvVar6;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d4,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d4);
  }
  local_d8 = 0;
  puVar15 = local_d4;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  uVar12 = local_d8;
  uVar11 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d0 = *(int *)(ppvVar16 + 1);
  iVar13 = 0;
  if (local_d0 != 0) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    param_1[0x25].field_0x8 = 1;
    iVar4 = *(int *)(ppvVar16 + 1);
    puVar14 = *ppvVar16;
    puVar3 = puVar14 + (longlong)iVar4 * 3;
    while( true ) {
      if (*(int *)(ppvVar16 + 1) != iVar4) {
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      iVar13 = local_d0;
      if (puVar14 == puVar3) break;
      local_98 = puVar14[2];
      this = &param_1[0x25].field_0x10;
      uStack_90 = *(undefined4 *)puVar15;
      uVar9 = *puVar14;
      uVar10 = puVar14[1];
      uStack_8c = uVar12;
      local_88 = uVar11;
      if (*(int *)&param_1[0x26].field_0x1c == 0) {
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x28,8,1,(ForAnyElementType *)this,(int *)&param_1[0x25].field_0x18,
                            (int *)&param_1[0x25].field_0x1c);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&param_1[0x25].field_0x20,false);
      }
      else {
        iVar13 = *(int *)&param_1[0x26].field_0x18;
        iVar1 = *(int *)&param_1[0x26].field_0x1c + -1;
        lVar8 = *(longlong *)this;
        iVar5 = *(int *)(lVar8 + 4 + (longlong)iVar13 * 0x28);
        *(int *)&param_1[0x26].field_0x18 = iVar5;
        *(int *)&param_1[0x26].field_0x1c = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(lVar8 + (longlong)iVar5 * 0x28) = 0xffffffff;
        }
      }
      TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::AllocateIndex
                ((TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *)this,local_b8,iVar13);
      if (local_b8[0].Pointer != (undefined8 *)0x0) {
        *(undefined8 *)local_b8[0].Pointer = uVar9;
        *(undefined8 *)((longlong)local_b8[0].Pointer + 8) = uVar10;
        *(undefined8 *)((longlong)local_b8[0].Pointer + 0x10) = local_98;
        *(ulonglong *)((longlong)local_b8[0].Pointer + 0x18) = CONCAT44(uStack_8c,uStack_90);
        *(ulonglong *)((longlong)local_b8[0].Pointer + 0x20) = CONCAT44(uStack_84,local_88);
      }
      puVar14 = puVar14 + 3;
    }
  }
  *local_res18 = iVar13;
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// execClear @ 14caab200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UPointSetComponent::execClear(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x25].field_0x18 = 0;
  if (*(int *)&param_1[0x25].field_0x1c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&param_1[0x25].field_0x10,0,
               (int *)&param_1[0x25].field_0x1c);
  }
  *(undefined4 *)&param_1[0x26].field_0x18 = 0xffffffff;
  *(undefined4 *)&param_1[0x26].field_0x1c = 0;
  *(undefined4 *)&param_1[0x26].field_0x10 = 0;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  param_1[0x25].field_0x8 = 1;
  return;
}

// execSetPointMaterial @ 14caab730

void __cdecl
UPointSetComponent::execSetPointMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInterface *pUVar2;
  UMaterialInterface *local_res8;
  
  local_res8 = (UMaterialInterface *)0x0;
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
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  *(UMaterialInterface **)&param_1[0x23].field_0x18 = pUVar2;
  UMeshComponent::SetMaterial((UMeshComponent *)param_1,0,pUVar2);
  return;
}

