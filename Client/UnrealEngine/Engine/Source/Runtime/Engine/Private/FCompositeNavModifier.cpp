// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FCompositeNavModifier @ 147379650

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FCompositeNavModifier * __thiscall
FCompositeNavModifier::FCompositeNavModifier
          (FCompositeNavModifier *this,FCompositeNavModifier *param_1)

{
  uint uVar1;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NavDataPerInstanceTransformDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)
              &param_1->NavDataPerInstanceTransformDelegate);
  (this->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Areas).AllocatorInstance.Data = (param_1->Areas).AllocatorInstance.Data;
  (param_1->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Areas).ArrayNum = (param_1->Areas).ArrayNum;
  (this->Areas).ArrayMax = (param_1->Areas).ArrayMax;
  (param_1->Areas).ArrayNum = 0;
  (param_1->Areas).ArrayMax = 0;
  (this->SimpleLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimpleLinks).AllocatorInstance.Data = (param_1->SimpleLinks).AllocatorInstance.Data;
  (param_1->SimpleLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimpleLinks).ArrayNum = (param_1->SimpleLinks).ArrayNum;
  (this->SimpleLinks).ArrayMax = (param_1->SimpleLinks).ArrayMax;
  (param_1->SimpleLinks).ArrayNum = 0;
  (param_1->SimpleLinks).ArrayMax = 0;
  (this->CustomLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomLinks).AllocatorInstance.Data = (param_1->CustomLinks).AllocatorInstance.Data;
  (param_1->CustomLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomLinks).ArrayNum = (param_1->CustomLinks).ArrayNum;
  (this->CustomLinks).ArrayMax = (param_1->CustomLinks).ArrayMax;
  (param_1->CustomLinks).ArrayNum = 0;
  (param_1->CustomLinks).ArrayMax = 0;
  uVar1 = (this->bHasPotentialLinks ^ param_1->bHasPotentialLinks) & 1 ^ *(uint *)&this->field_0x50;
  *(uint *)&this->field_0x50 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x50) & 2 ^ uVar1;
  *(uint *)&this->field_0x50 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x50) & 4 ^ uVar1;
  *(uint *)&this->field_0x50 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x50) & 8 ^ uVar1;
  *(uint *)&this->field_0x50 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x50) & 0x10 ^ uVar1;
  *(uint *)&this->field_0x50 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x50) & 0x20 ^ uVar1;
  *(uint *)&this->field_0x50 = uVar1;
  *(uint *)&this->field_0x50 = (uVar1 ^ *(uint *)&param_1->field_0x50) & 0x40 ^ uVar1;
  this->NavMeshResolution = param_1->NavMeshResolution;
  return this;
}

// FCompositeNavModifier @ 147379750

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FCompositeNavModifier * __thiscall
FCompositeNavModifier::FCompositeNavModifier
          (FCompositeNavModifier *this,FCompositeNavModifier *param_1)

{
  TArray<FAreaNavModifier,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FCustomLinkNavModifier,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FAreaNavModifier *pFVar6;
  FSimpleLinkNavModifier *pFVar7;
  FScriptContainerElement *_Src;
  uint uVar8;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined8 *)&this->NavDataPerInstanceTransformDelegate = 0;
  *(undefined8 *)&(this->NavDataPerInstanceTransformDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NavDataPerInstanceTransformDelegate).field_0x10 = 0;
  TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->NavDataPerInstanceTransformDelegate,
             &param_1->NavDataPerInstanceTransformDelegate);
  pTVar1 = &this->Areas;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Areas).ArrayMax;
  iVar5 = (param_1->Areas).ArrayNum;
  pFVar6 = (FAreaNavModifier *)(param_1->Areas).AllocatorInstance.Data;
  (this->Areas).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FAreaNavModifier,FAreaNavModifier,int>
              ((pTVar1->AllocatorInstance).Data,pFVar6,iVar5);
  }
  pTVar3 = &this->SimpleLinks;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SimpleLinks).ArrayMax;
  iVar5 = (param_1->SimpleLinks).ArrayNum;
  pFVar7 = (FSimpleLinkNavModifier *)(param_1->SimpleLinks).AllocatorInstance.Data;
  (this->SimpleLinks).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FSimpleLinkNavModifier,FSimpleLinkNavModifier,int>
              ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
  }
  pTVar4 = &this->CustomLinks;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CustomLinks).ArrayMax;
  iVar5 = (param_1->CustomLinks).ArrayNum;
  _Src = (param_1->CustomLinks).AllocatorInstance.Data;
  (this->CustomLinks).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar5 << 7);
  }
  uVar8 = (this->bHasPotentialLinks ^ param_1->bHasPotentialLinks) & 1 ^ *(uint *)&this->field_0x50;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 2 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 4 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 8 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 0x10 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 0x20 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  *(uint *)&this->field_0x50 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 0x40 ^ uVar8;
  this->NavMeshResolution = param_1->NavMeshResolution;
  return this;
}

// operator= @ 14737de60

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FCompositeNavModifier * __thiscall
FCompositeNavModifier::operator=(FCompositeNavModifier *this,FCompositeNavModifier *param_1)

{
  TArray<FAreaNavModifier,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FAreaNavModifier,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FCustomLinkNavModifier,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FCustomLinkNavModifier,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NavDataPerInstanceTransformDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)
              &param_1->NavDataPerInstanceTransformDelegate);
  pTVar1 = &param_1->Areas;
  pTVar2 = &this->Areas;
  if (pTVar2 != pTVar1) {
    DestructItems<FAreaNavModifier,int>
              ((FAreaNavModifier *)(pTVar2->AllocatorInstance).Data,(this->Areas).ArrayNum);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Areas).ArrayNum = (param_1->Areas).ArrayNum;
    (this->Areas).ArrayMax = (param_1->Areas).ArrayMax;
    (param_1->Areas).ArrayNum = 0;
    (param_1->Areas).ArrayMax = 0;
  }
  pTVar3 = &param_1->SimpleLinks;
  pTVar4 = &this->SimpleLinks;
  if (pTVar4 != pTVar3) {
    DestructItems<FSimpleLinkNavModifier,int>
              ((FSimpleLinkNavModifier *)(pTVar4->AllocatorInstance).Data,
               (this->SimpleLinks).ArrayNum);
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SimpleLinks).ArrayNum = (param_1->SimpleLinks).ArrayNum;
    (this->SimpleLinks).ArrayMax = (param_1->SimpleLinks).ArrayMax;
    (param_1->SimpleLinks).ArrayNum = 0;
    (param_1->SimpleLinks).ArrayMax = 0;
  }
  pTVar5 = &param_1->CustomLinks;
  pTVar6 = &this->CustomLinks;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CustomLinks).ArrayNum = (param_1->CustomLinks).ArrayNum;
    (this->CustomLinks).ArrayMax = (param_1->CustomLinks).ArrayMax;
    (param_1->CustomLinks).ArrayNum = 0;
    (param_1->CustomLinks).ArrayMax = 0;
  }
  uVar8 = (this->bHasPotentialLinks ^ param_1->bHasPotentialLinks) & 1 ^ *(uint *)&this->field_0x50;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 2 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 4 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 8 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 0x10 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 0x20 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  *(uint *)&this->field_0x50 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 0x40 ^ uVar8;
  this->NavMeshResolution = param_1->NavMeshResolution;
  return this;
}

// operator= @ 14737dfe0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FCompositeNavModifier * __thiscall
FCompositeNavModifier::operator=(FCompositeNavModifier *this,FCompositeNavModifier *param_1)

{
  TArray<FAreaNavModifier,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FCustomLinkNavModifier,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FAreaNavModifier *pFVar6;
  FSimpleLinkNavModifier *pFVar7;
  FScriptContainerElement *_Src;
  uint uVar8;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->NavDataPerInstanceTransformDelegate,
             &param_1->NavDataPerInstanceTransformDelegate);
  pTVar1 = &this->Areas;
  if (pTVar1 != &param_1->Areas) {
    DestructItems<FAreaNavModifier,int>
              ((FAreaNavModifier *)(pTVar1->AllocatorInstance).Data,(this->Areas).ArrayNum);
    iVar5 = (param_1->Areas).ArrayNum;
    piVar2 = &(this->Areas).ArrayMax;
    pFVar6 = (FAreaNavModifier *)(param_1->Areas).AllocatorInstance.Data;
    (this->Areas).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FAreaNavModifier,FAreaNavModifier,int>
                ((pTVar1->AllocatorInstance).Data,pFVar6,iVar5);
    }
  }
  pTVar3 = &this->SimpleLinks;
  if (pTVar3 != &param_1->SimpleLinks) {
    DestructItems<FSimpleLinkNavModifier,int>
              ((FSimpleLinkNavModifier *)(pTVar3->AllocatorInstance).Data,
               (this->SimpleLinks).ArrayNum);
    iVar5 = (param_1->SimpleLinks).ArrayNum;
    piVar2 = &(this->SimpleLinks).ArrayMax;
    pFVar7 = (FSimpleLinkNavModifier *)(param_1->SimpleLinks).AllocatorInstance.Data;
    (this->SimpleLinks).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,0x10,iVar5,*piVar2,&pTVar3->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FSimpleLinkNavModifier,FSimpleLinkNavModifier,int>
                ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  pTVar4 = &this->CustomLinks;
  if (pTVar4 != &param_1->CustomLinks) {
    iVar5 = (param_1->CustomLinks).ArrayNum;
    piVar2 = &(this->CustomLinks).ArrayMax;
    _Src = (param_1->CustomLinks).AllocatorInstance.Data;
    (this->CustomLinks).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar5,*piVar2,&pTVar4->AllocatorInstance,iVar5,piVar2);
      if (iVar5 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar5 << 7);
      }
    }
  }
  uVar8 = (this->bHasPotentialLinks ^ param_1->bHasPotentialLinks) & 1 ^ *(uint *)&this->field_0x50;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 2 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 4 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 8 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 0x10 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 0x20 ^ uVar8;
  *(uint *)&this->field_0x50 = uVar8;
  *(uint *)&this->field_0x50 = (uVar8 ^ *(uint *)&param_1->field_0x50) & 0x40 ^ uVar8;
  this->NavMeshResolution = param_1->NavMeshResolution;
  return this;
}

// CreateAreaModifiers @ 1473879b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCompositeNavModifier::CreateAreaModifiers
          (FCompositeNavModifier *this,FCollisionShape *param_1,TTransform<double> *param_2,
          TSubclassOf<UNavAreaBase> param_3,bool param_4)

{
  Type TVar1;
  UObject *pUVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  uint uVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_1c8 [32];
  UObject *local_198 [2];
  FAreaNavModifier local_188;
  undefined1 local_118 [16];
  __m128d local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  __m128d local_d8;
  __m128d local_c8;
  undefined1 local_b8 [56];
  double dStack_80;
  __m128d local_78;
  __m128d local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  TVar1 = param_1->ShapeType;
  if (TVar1 == Box) {
    pUVar2 = *(UObject **)param_3.Class.field0_0x0;
    dVar5 = (double)(param_1->field1_0x4).Box.HalfExtentZ;
    dVar3 = (double)(param_1->field1_0x4).Box.HalfExtentX;
    dVar4 = (double)(param_1->field1_0x4).Box.HalfExtentY;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    uVar9 = (uint)__xmm_80000000000000008000000000000000;
    uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_188._padding_ = local_188._padding_ & 0xfffffffe;
    local_118._4_4_ = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar11;
    local_118._0_4_ = SUB84(dVar3,0) ^ uVar9;
    local_118._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar11;
    local_118._8_4_ = SUB84(dVar4,0) ^ uVar9;
    local_108.m128d_f64[0]._4_4_ = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar11;
    local_108.m128d_f64[0]._0_4_ = SUB84(dVar5,0) ^ uVar9;
    local_108.m128d_f64[1] = dVar3;
    local_e8 = (double)CONCAT71(local_e8._1_7_,1);
    local_188.AreaClassOb.WeakPtr.ObjectIndex = 0;
    local_188.AreaClassOb.WeakPtr.ObjectSerialNumber = 0;
    local_188.ReplaceAreaClassOb.WeakPtr.ObjectIndex = 0;
    local_188.ReplaceAreaClassOb.WeakPtr.ObjectSerialNumber = 0;
    local_188.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Points.ArrayNum = 0;
    local_188.Points.ArrayMax = 0;
    local_f8 = dVar4;
    uStack_f0 = dVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_188.bIncludeAgentHeight = '\0';
    local_188.bExpandTopByCellHeight = '\0';
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dStack_80;
    stack0xffffffffffffff78 = (double  [2])(auVar7 << 0x40);
    local_188.Bounds.Min.field0_0x0._s_0.X = 0.0;
    local_188.Bounds.Min.field0_0x0._s_0.Y = 0.0;
    auVar6[0xf] = 0;
    auVar6._0_15_ = stack0xffffffffffffff79;
    stack0xffffffffffffff78 = (double  [2])(auVar6 << 8);
    local_188.Bounds.IsValid = '\0';
    local_188.Bounds.Pad[0] = '\0';
    local_188.Bounds.Pad[1] = '\0';
    local_188.Bounds.Pad[2] = '\0';
    local_188.Bounds.Pad[3] = '\0';
    local_188.Bounds.Pad[4] = '\0';
    local_188.Bounds.Pad[5] = '\0';
    local_188.Bounds.Pad[6] = '\0';
    local_188.ApplyMode.Value = '\0';
    local_188.Cost = 0.0;
    local_188.FixedCost = 0.0;
    local_188.Bounds.Min.field0_0x0._s_0.Z = 0.0;
    local_188.Bounds.Max.field0_0x0._s_0.X = 0.0;
    local_188.Bounds.Max.field0_0x0._s_0.Y = 0.0;
    local_188.Bounds.Max.field0_0x0._s_0.Z = 0.0;
    local_198[0] = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FAreaNavModifier::SetAreaClass(&local_188,(TSubclassOf<UNavAreaBase>)local_198);
    FAreaNavModifier::SetBox(&local_188,(TBox<double> *)local_118,param_2);
    local_188._106_1_ = local_188._106_1_ & 0xfd | param_4 * '\x02';
  }
  else {
    fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar12 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar13 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar15 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar16 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar17 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar18 = GlobalVectorConstants::Float1110.m128_f32[3];
    if (TVar1 == Capsule) {
      fVar19 = (param_1->field1_0x4).Box.HalfExtentY;
      local_198[0] = *(UObject **)param_3.Class.field0_0x0;
      local_118._8_4_ = SUB84((double)fVar12,0);
      local_118._0_8_ = (double)fVar10;
      local_118._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
      local_108.m128d_f64[1]._0_4_ = SUB84((double)fVar14,0);
      local_108.m128d_f64[0] = (double)fVar13;
      local_108.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
      local_f8 = 0.0;
      uStack_f0 = 0.0;
      local_e8 = (double)(float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000);
      dStack_e0 = 0.0;
      local_d8.m128d_f64[1]._0_4_ = SUB84((double)fVar16,0);
      local_d8.m128d_f64[0] = (double)fVar15;
      local_d8.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
      local_c8.m128d_f64[1]._0_4_ = SUB84((double)fVar18,0);
      local_c8.m128d_f64[0] = (double)fVar17;
      local_c8.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
      if ((UE::GC::GIsIncrementalReachabilityPending) && (local_198[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_198[0]);
        fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
        fVar12 = GlobalVectorConstants::Float0001.m128_f32[1];
        fVar13 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
        fVar15 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar16 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar17 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar18 = GlobalVectorConstants::Float1110.m128_f32[3];
      }
      local_b8._8_4_ = SUB84((double)fVar12,0);
      local_b8._0_8_ = (double)fVar10;
      local_b8._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
      local_b8._24_4_ = SUB84((double)fVar14,0);
      local_b8._16_8_ = (double)fVar13;
      local_b8._28_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
      local_b8._40_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_b8._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_b8._44_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      unique0x100001a8 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_b8._48_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      unique0x100001ac =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_78.m128d_f64[1]._0_4_ = SUB84((double)fVar16,0);
      local_78.m128d_f64[0] = (double)fVar15;
      local_78.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
      local_68.m128d_f64[1]._0_4_ = SUB84((double)fVar18,0);
      local_68.m128d_f64[0] = (double)fVar17;
      local_68.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
      UE::Math::TTransform<double>::Multiply
                ((TTransform<double> *)local_b8,(TTransform<double> *)local_118,param_2);
      fVar8 = (param_1->field1_0x4).Box.HalfExtentX;
      fVar19 = fVar19 + fVar19;
    }
    else {
      if (TVar1 != Sphere) {
        if ((byte)LogNavigation._0_1_ < 2) {
          return;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        return;
      }
      fVar8 = (param_1->field1_0x4).Box.HalfExtentX;
      local_198[0] = *(UObject **)param_3.Class.field0_0x0;
      local_118._8_4_ = SUB84((double)fVar12,0);
      local_118._0_8_ = (double)fVar10;
      local_118._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
      local_108.m128d_f64[1]._0_4_ = SUB84((double)fVar14,0);
      local_108.m128d_f64[0] = (double)fVar13;
      local_108.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
      local_f8 = 0.0;
      uStack_f0 = 0.0;
      local_e8 = (double)(float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
      dStack_e0 = 0.0;
      local_d8.m128d_f64[1]._0_4_ = SUB84((double)fVar16,0);
      local_d8.m128d_f64[0] = (double)fVar15;
      local_d8.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
      local_c8.m128d_f64[1]._0_4_ = SUB84((double)fVar18,0);
      local_c8.m128d_f64[0] = (double)fVar17;
      local_c8.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
      if ((UE::GC::GIsIncrementalReachabilityPending) && (local_198[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_198[0]);
        fVar10 = GlobalVectorConstants::Float0001.m128_f32[0];
        fVar12 = GlobalVectorConstants::Float0001.m128_f32[1];
        fVar13 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
        fVar15 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar16 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar17 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar18 = GlobalVectorConstants::Float1110.m128_f32[3];
      }
      local_b8._8_4_ = SUB84((double)fVar12,0);
      local_b8._0_8_ = (double)fVar10;
      local_b8._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
      local_b8._24_4_ = SUB84((double)fVar14,0);
      local_b8._16_8_ = (double)fVar13;
      local_b8._28_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
      local_b8._40_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_b8._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_b8._44_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      unique0x100002c8 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_b8._48_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      unique0x100002cc =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_78.m128d_f64[1]._0_4_ = SUB84((double)fVar16,0);
      local_78.m128d_f64[0] = (double)fVar15;
      local_78.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
      local_68.m128d_f64[1]._0_4_ = SUB84((double)fVar18,0);
      local_68.m128d_f64[0] = (double)fVar17;
      local_68.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
      UE::Math::TTransform<double>::Multiply
                ((TTransform<double> *)local_b8,(TTransform<double> *)local_118,param_2);
      fVar19 = fVar8 + fVar8;
    }
    FAreaNavModifier::FAreaNavModifier
              (&local_188,fVar8,fVar19,(TTransform<double> *)local_b8,
               (TSubclassOf<UNavAreaBase>)local_198);
    local_188._106_1_ = local_188._106_1_ & 0xfd | param_4 * '\x02';
  }
  Add(this,&local_188);
  if (local_188.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Points.AllocatorInstance.Data);
  }
  return;
}

// CreateAreaModifiers @ 147387db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FCompositeNavModifier::CreateAreaModifiers
          (FCompositeNavModifier *this,UPrimitiveComponent *param_1,
          TSubclassOf<UNavAreaBase> param_2,TSubclassOf<UNavAreaBase> param_3)

{
  TArray<FAreaNavModifier,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UObject *pUVar3;
  FAreaNavModifier *pFVar4;
  longlong lVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  UClass *pUVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_528 [32];
  ForAnyElementType local_4b8;
  int local_4b0;
  int local_4ac;
  UObject *local_4a8;
  UObject *local_4a0;
  UObject *local_498;
  UObject *local_490;
  UObject *local_488;
  UObject *local_480;
  UObject *local_478;
  UObject *local_470;
  FString local_468;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined1 local_428;
  undefined4 uStack_427;
  undefined2 uStack_423;
  undefined1 uStack_421;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined1 local_3f0;
  undefined4 uStack_3ef;
  undefined2 uStack_3eb;
  undefined1 uStack_3e9;
  FAreaNavModifier local_3e8;
  FAreaNavModifier local_378;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  FAreaNavModifier local_248;
  FAreaNavModifier local_1d8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TBox<double> local_a8;
  ulonglong local_70;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    local_70 = __security_cookie.value ^ (ulonglong)auStackY_528;
    lVar11 = (**(code **)(*(longlong *)param_1 + 0x800))(param_1);
    fVar16 = __real_3f800000;
    if (lVar11 != 0) {
      iVar8 = *(int *)(lVar11 + 0x50);
      uVar14 = 0;
      if (0 < iVar8) {
        do {
          uVar13 = 0;
          if ((int)uVar14 < iVar8) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FKBoxElem::CalcAABB((FKBoxElem *)
                              ((longlong)(int)uVar14 * 0x70 + *(longlong *)(lVar11 + 0x48)),
                              &local_a8,&UE::Math::TTransform<double>::Identity,fVar16);
          pUVar3 = *(UObject **)param_2.Class.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          local_3e8._padding_ = local_3e8._padding_ & 0xfffffffe;
          local_3e8.AreaClassOb.WeakPtr.ObjectIndex = 0;
          local_3e8.AreaClassOb.WeakPtr.ObjectSerialNumber = 0;
          local_3e8.ReplaceAreaClassOb.WeakPtr.ObjectIndex = 0;
          local_3e8.ReplaceAreaClassOb.WeakPtr.ObjectSerialNumber = 0;
          local_3e8.Bounds._48_8_ = local_3e8.Bounds._48_8_ & 0xffffffffffffff00;
          local_3e8.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3e8.Points.ArrayNum = 0;
          local_3e8.Points.ArrayMax = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          local_3e8.bIncludeAgentHeight = '\0';
          local_3e8.bExpandTopByCellHeight = '\0';
          uStack_427 = 0;
          uStack_423 = 0;
          uStack_421 = 0;
          local_3e8.Bounds.Max.field0_0x0._s_0.Y = 0.0;
          local_3e8.Bounds.Max.field0_0x0._s_0.Z = 0.0;
          local_428 = 0;
          local_3e8.ApplyMode.Value = '\0';
          local_3e8.Cost = 0.0;
          local_3e8.FixedCost = 0.0;
          local_3e8.Bounds.Min.field0_0x0._s_0.X = 0.0;
          local_3e8.Bounds.Min.field0_0x0._s_0.Y = 0.0;
          local_3e8.Bounds.Min.field0_0x0._s_0.Z = 0.0;
          local_3e8.Bounds.Max.field0_0x0._s_0.X = 0.0;
          local_438 = 0;
          uStack_430 = 0;
          local_3e8.Bounds._48_8_ = 0;
          local_458 = 0;
          uStack_450 = 0;
          local_448 = 0;
          uStack_440 = 0;
          local_4a8 = pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          FAreaNavModifier::SetAreaClass(&local_3e8,(TSubclassOf<UNavAreaBase>)&local_4a8);
          FAreaNavModifier::SetBox(&local_3e8,&local_a8,(TTransform<double> *)&param_1->field_0x1f0)
          ;
          lVar15 = *(longlong *)param_3.Class.field0_0x0;
          if ((lVar15 != 0) &&
             (pUVar12 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar12 != (UClass *)0x0)) {
            iVar8 = (int)pUVar12->_padding_;
            if ((*(int *)(lVar15 + 0x38) < iVar8) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar12->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((bVar7) &&
               (pUVar3 = *(UObject **)param_3.Class.field0_0x0, pUVar3 != (UObject *)0x0)) {
              local_4a0 = pUVar3;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar3);
              }
              FAreaNavModifier::SetAreaClassToReplace
                        (&local_3e8,(TSubclassOf<UNavAreaBase>)&local_4a0);
            }
          }
          pFVar4 = (FAreaNavModifier *)(this->Areas).AllocatorInstance.Data;
          if (((pFVar4 <= &local_3e8) && (&local_3e8 < pFVar4 + (this->Areas).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = (this->Areas).ArrayNum;
          if (iVar8 == (this->Areas).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x870,&(this->Areas).AllocatorInstance,&(this->Areas).ArrayMax);
          }
          (this->Areas).ArrayNum = iVar8 + 1;
          FAreaNavModifier::FAreaNavModifier
                    ((FAreaNavModifier *)
                     ((this->Areas).AllocatorInstance.Data + (longlong)iVar8 * 0x70),&local_3e8);
          uVar13 = (uint)this->_padding_;
          uVar9 = local_3e8._padding_ & 1U | uVar13;
          *(uint *)&this->_padding_ = (uVar13 ^ uVar9) & 0xfffffffe ^ uVar9;
          uVar13 = ((uint)(byte)local_3e8._106_1_ | *(uint *)&this->field_0x50) & 2 ^
                   *(uint *)&this->field_0x50 & 0xfffffffd;
          *(uint *)&this->field_0x50 = ((byte)local_3e8._106_1_ | uVar13) & 4 ^ uVar13 & 0xfffffffb;
          if (local_3e8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e8.Points.AllocatorInstance.Data);
          }
          iVar8 = *(int *)(lVar11 + 0x50);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < iVar8);
      }
      uVar14 = __xmm_80000000800000008000000080000000;
      iVar8 = *(int *)(lVar11 + 0x60);
      uVar13 = 0;
      if (0 < iVar8) {
        pTVar1 = &this->Areas;
        lVar15 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar13 < iVar8) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar16 = GlobalVectorConstants::Float0001.m128_f32[0];
          fVar17 = GlobalVectorConstants::Float0001.m128_f32[1];
          fVar18 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar19 = GlobalVectorConstants::Float0001.m128_f32[3];
          fVar20 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar21 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar22 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar23 = GlobalVectorConstants::Float1110.m128_f32[3];
          lVar5 = *(longlong *)(lVar11 + 0x58);
          local_498 = *(UObject **)param_2.Class.field0_0x0;
          local_168.Translation.ZW.m128d_f64[0] =
               (double)(float)(*(uint *)(lVar5 + 100 + lVar15) ^ uVar14);
          local_168.Translation.XY.m128d_f64[0] = 0.0;
          local_168.Translation.XY.m128d_f64[1] = 0.0;
          local_168.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar17,0);
          local_168.Rotation.XY.m128d_f64[0] = (double)fVar16;
          local_168.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
          local_168.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar19,0);
          local_168.Rotation.ZW.m128d_f64[0] = (double)fVar18;
          local_168.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
          local_168.Translation.ZW.m128d_f64[1] = 0.0;
          local_168.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar21,0);
          local_168.Scale3D.XY.m128d_f64[0] = (double)fVar20;
          local_168.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
          local_168.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar23,0);
          local_168.Scale3D.ZW.m128d_f64[0] = (double)fVar22;
          local_168.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_498 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_498);
            fVar16 = GlobalVectorConstants::Float0001.m128_f32[0];
            fVar17 = GlobalVectorConstants::Float0001.m128_f32[1];
            fVar18 = GlobalVectorConstants::Float0001.m128_f32[2];
            fVar19 = GlobalVectorConstants::Float0001.m128_f32[3];
            fVar20 = GlobalVectorConstants::Float1110.m128_f32[0];
            fVar21 = GlobalVectorConstants::Float1110.m128_f32[1];
            fVar22 = GlobalVectorConstants::Float1110.m128_f32[2];
            fVar23 = GlobalVectorConstants::Float1110.m128_f32[3];
          }
          local_308.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar17,0);
          local_308.Rotation.XY.m128d_f64[0] = (double)fVar16;
          local_308.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
          local_308.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar19,0);
          local_308.Rotation.ZW.m128d_f64[0] = (double)fVar18;
          local_308.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
          local_308.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_308.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_308.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_308.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_308.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_308.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_308.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar21,0);
          local_308.Scale3D.XY.m128d_f64[0] = (double)fVar20;
          local_308.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
          local_308.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar23,0);
          local_308.Scale3D.ZW.m128d_f64[0] = (double)fVar22;
          local_308.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_308,&local_168,(TTransform<double> *)&param_1->field_0x1f0);
          fVar16 = *(float *)(lVar5 + 100 + lVar15);
          FAreaNavModifier::FAreaNavModifier
                    (&local_248,*(float *)(lVar5 + 0x60 + lVar15),fVar16 + fVar16,&local_308,
                     (TSubclassOf<UNavAreaBase>)&local_498);
          lVar5 = *(longlong *)param_3.Class.field0_0x0;
          if ((lVar5 != 0) &&
             (pUVar12 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar12 != (UClass *)0x0)) {
            iVar8 = (int)pUVar12->_padding_;
            if ((*(int *)(lVar5 + 0x38) < iVar8) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar12->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((bVar7) &&
               (pUVar3 = *(UObject **)param_3.Class.field0_0x0, pUVar3 != (UObject *)0x0)) {
              local_490 = pUVar3;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar3);
              }
              FAreaNavModifier::SetAreaClassToReplace
                        (&local_248,(TSubclassOf<UNavAreaBase>)&local_490);
            }
          }
          pFVar4 = (FAreaNavModifier *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar4 <= &local_248) && (&local_248 < pFVar4 + (this->Areas).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = (this->Areas).ArrayNum;
          if (iVar8 == (this->Areas).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x870,&pTVar1->AllocatorInstance,&(this->Areas).ArrayMax);
          }
          (this->Areas).ArrayNum = iVar8 + 1;
          FAreaNavModifier::FAreaNavModifier
                    ((FAreaNavModifier *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x70)
                     ,&local_248);
          uVar9 = (uint)this->_padding_;
          uVar10 = local_248._padding_ & 1U | uVar9;
          *(uint *)&this->_padding_ = (uVar9 ^ uVar10) & 0xfffffffe ^ uVar10;
          uVar9 = ((uint)(byte)local_248._106_1_ | *(uint *)&this->field_0x50) & 2 ^
                  *(uint *)&this->field_0x50 & 0xfffffffd;
          *(uint *)&this->field_0x50 = ((byte)local_248._106_1_ | uVar9) & 4 ^ uVar9 & 0xfffffffb;
          if (local_248.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Points.AllocatorInstance.Data);
          }
          iVar8 = *(int *)(lVar11 + 0x60);
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0x68;
        } while ((int)uVar13 < iVar8);
      }
      iVar8 = *(int *)(lVar11 + 0x70);
      uVar13 = 0;
      if (0 < iVar8) {
        lVar15 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar13 < iVar8) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = *(longlong *)(lVar11 + 0x68);
          if (*(int *)(lVar15 + 0x38 + lVar5) < 1) {
            if (2 < (byte)LogNavigation._0_1_) {
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)param_1,&local_468,(UObject *)0x0);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
              if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_468.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            pUVar3 = *(UObject **)param_2.Class.field0_0x0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar3);
            }
            iVar8 = *(int *)(lVar15 + 0x38 + lVar5);
            _Src = *(void **)(lVar15 + 0x30 + lVar5);
            local_4b8.Data = (FScriptContainerElement *)0x0;
            local_4b0 = iVar8;
            if (iVar8 == 0) {
              local_4ac = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,iVar8,0,&local_4b8,iVar8,&local_4ac);
              memcpy(local_4b8.Data,_Src,(longlong)iVar8 * 0x18);
            }
            local_378._padding_ = local_378._padding_ & 0xfffffffe;
            local_378.AreaClassOb.WeakPtr.ObjectIndex = 0;
            local_378.AreaClassOb.WeakPtr.ObjectSerialNumber = 0;
            local_378.ReplaceAreaClassOb.WeakPtr.ObjectIndex = 0;
            local_378.ReplaceAreaClassOb.WeakPtr.ObjectSerialNumber = 0;
            local_378.Bounds._48_8_ = local_378.Bounds._48_8_ & 0xffffffffffffff00;
            local_378.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_378.Points.ArrayNum = 0;
            local_378.Points.ArrayMax = 0;
            if ((((local_4b0 < 1) || (iVar8 + -1 < 0)) || (local_4b0 <= iVar8 + -1)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InPoints.IsValidIndex(FirstIndex) && InPoints.IsValidIndex(LastIndex-1)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                                   ,0x17c,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar3);
            }
            local_378.bIncludeAgentHeight = '\0';
            local_378.bExpandTopByCellHeight = '\0';
            uStack_3ef = 0;
            uStack_3eb = 0;
            local_400 = 0;
            uStack_3f8 = 0;
            uStack_3e9 = 0;
            local_378.Bounds.Max.field0_0x0._s_0.Y = 0.0;
            local_378.Bounds.Max.field0_0x0._s_0.Z = 0.0;
            local_3f0 = 0;
            local_378.Bounds._48_8_ = 0;
            local_378.ApplyMode.Value = '\0';
            local_378.Cost = 0.0;
            local_378.FixedCost = 0.0;
            local_420 = 0;
            uStack_418 = 0;
            local_410 = 0;
            uStack_408 = 0;
            local_378.Bounds.Min.field0_0x0._s_0.X = 0.0;
            local_378.Bounds.Min.field0_0x0._s_0.Y = 0.0;
            local_378.Bounds.Min.field0_0x0._s_0.Z = 0.0;
            local_378.Bounds.Max.field0_0x0._s_0.X = 0.0;
            local_488 = pUVar3;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar3);
            }
            FAreaNavModifier::SetAreaClass(&local_378,(TSubclassOf<UNavAreaBase>)&local_488);
            FAreaNavModifier::SetConvex
                      (&local_378,(TVector<double> *)local_4b8.Data,0,iVar8,Unreal,
                       (TTransform<double> *)&param_1->field_0x1f0);
            if (local_4b8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4b8.Data);
            }
            lVar5 = *(longlong *)param_3.Class.field0_0x0;
            if ((lVar5 != 0) &&
               (pUVar12 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar12 != (UClass *)0x0)) {
              iVar8 = (int)pUVar12->_padding_;
              if ((*(int *)(lVar5 + 0x38) < iVar8) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar8 * 8) !=
                  &pUVar12->_padding_)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if ((bVar7) &&
                 (pUVar3 = *(UObject **)param_3.Class.field0_0x0, pUVar3 != (UObject *)0x0)) {
                local_480 = pUVar3;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar3);
                }
                FAreaNavModifier::SetAreaClassToReplace
                          (&local_378,(TSubclassOf<UNavAreaBase>)&local_480);
              }
            }
            pFVar4 = (FAreaNavModifier *)(this->Areas).AllocatorInstance.Data;
            if (((pFVar4 <= &local_378) && (&local_378 < pFVar4 + (this->Areas).ArrayMax)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = (this->Areas).ArrayNum;
            piVar2 = &(this->Areas).ArrayMax;
            if (iVar8 == *piVar2) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x870,&(this->Areas).AllocatorInstance,piVar2);
            }
            (this->Areas).ArrayNum = iVar8 + 1;
            FAreaNavModifier::FAreaNavModifier
                      ((FAreaNavModifier *)
                       ((this->Areas).AllocatorInstance.Data + (longlong)iVar8 * 0x70),&local_378);
            uVar9 = local_378._padding_ & 1U | (uint)this->_padding_;
            *(uint *)&this->_padding_ = (uVar9 ^ (uint)this->_padding_) & 0xfffffffe ^ uVar9;
            uVar9 = (*(uint *)&this->field_0x50 | (uint)(byte)local_378._106_1_) & 2 ^
                    *(uint *)&this->field_0x50 & 0xfffffffd;
            *(uint *)&this->field_0x50 = (uVar9 | (byte)local_378._106_1_) & 4 ^ uVar9 & 0xfffffffb;
            if (local_378.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378.Points.AllocatorInstance.Data);
            }
          }
          iVar8 = *(int *)(lVar11 + 0x70);
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0x100;
        } while ((int)uVar13 < iVar8);
      }
      uVar13 = 0;
      if (0 < *(int *)(lVar11 + 0x40)) {
        pTVar1 = &this->Areas;
        lVar15 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar13 < *(int *)(lVar11 + 0x40)) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar16 = GlobalVectorConstants::Float0001.m128_f32[0];
          fVar17 = GlobalVectorConstants::Float0001.m128_f32[1];
          fVar18 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar19 = GlobalVectorConstants::Float0001.m128_f32[3];
          fVar20 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar21 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar22 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar23 = GlobalVectorConstants::Float1110.m128_f32[3];
          lVar5 = *(longlong *)(lVar11 + 0x38);
          local_478 = *(UObject **)param_2.Class.field0_0x0;
          local_108.Translation.ZW.m128d_f64[0] =
               (double)(float)(*(uint *)(lVar5 + 0x48 + lVar15) ^ uVar14);
          local_108.Translation.XY.m128d_f64[0] = 0.0;
          local_108.Translation.XY.m128d_f64[1] = 0.0;
          local_108.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar17,0);
          local_108.Rotation.XY.m128d_f64[0] = (double)fVar16;
          local_108.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
          local_108.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar19,0);
          local_108.Rotation.ZW.m128d_f64[0] = (double)fVar18;
          local_108.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
          local_108.Translation.ZW.m128d_f64[1] = 0.0;
          local_108.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar21,0);
          local_108.Scale3D.XY.m128d_f64[0] = (double)fVar20;
          local_108.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
          local_108.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar23,0);
          local_108.Scale3D.ZW.m128d_f64[0] = (double)fVar22;
          local_108.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_478 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_478);
            fVar16 = GlobalVectorConstants::Float0001.m128_f32[0];
            fVar17 = GlobalVectorConstants::Float0001.m128_f32[1];
            fVar18 = GlobalVectorConstants::Float0001.m128_f32[2];
            fVar19 = GlobalVectorConstants::Float0001.m128_f32[3];
            fVar20 = GlobalVectorConstants::Float1110.m128_f32[0];
            fVar21 = GlobalVectorConstants::Float1110.m128_f32[1];
            fVar22 = GlobalVectorConstants::Float1110.m128_f32[2];
            fVar23 = GlobalVectorConstants::Float1110.m128_f32[3];
          }
          local_2a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar17,0);
          local_2a8.Rotation.XY.m128d_f64[0] = (double)fVar16;
          local_2a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
          local_2a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar19,0);
          local_2a8.Rotation.ZW.m128d_f64[0] = (double)fVar18;
          local_2a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
          local_2a8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_2a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_2a8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_2a8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_2a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_2a8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_2a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar21,0);
          local_2a8.Scale3D.XY.m128d_f64[0] = (double)fVar20;
          local_2a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
          local_2a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar23,0);
          local_2a8.Scale3D.ZW.m128d_f64[0] = (double)fVar22;
          local_2a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_2a8,&local_108,(TTransform<double> *)&param_1->field_0x1f0);
          fVar16 = *(float *)(lVar5 + 0x48 + lVar15);
          FAreaNavModifier::FAreaNavModifier
                    (&local_1d8,fVar16,fVar16 + fVar16,&local_2a8,
                     (TSubclassOf<UNavAreaBase>)&local_478);
          lVar5 = *(longlong *)param_3.Class.field0_0x0;
          if ((lVar5 != 0) &&
             (pUVar12 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar12 != (UClass *)0x0)) {
            iVar8 = (int)pUVar12->_padding_;
            if ((*(int *)(lVar5 + 0x38) < iVar8) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar12->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((bVar7) &&
               (pUVar3 = *(UObject **)param_3.Class.field0_0x0, pUVar3 != (UObject *)0x0)) {
              local_470 = pUVar3;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar3);
              }
              FAreaNavModifier::SetAreaClassToReplace
                        (&local_1d8,(TSubclassOf<UNavAreaBase>)&local_470);
            }
          }
          pFVar4 = (FAreaNavModifier *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar4 <= &local_1d8) && (&local_1d8 < pFVar4 + (this->Areas).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = (this->Areas).ArrayNum;
          if (iVar8 == (this->Areas).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x870,&pTVar1->AllocatorInstance,&(this->Areas).ArrayMax);
          }
          (this->Areas).ArrayNum = iVar8 + 1;
          FAreaNavModifier::FAreaNavModifier
                    ((FAreaNavModifier *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x70)
                     ,&local_1d8);
          uVar9 = (uint)this->_padding_;
          uVar10 = local_1d8._padding_ & 1U | uVar9;
          *(uint *)&this->_padding_ = (uVar9 ^ uVar10) & 0xfffffffe ^ uVar10;
          uVar9 = (*(uint *)&this->field_0x50 | (uint)(byte)local_1d8._106_1_) & 2 ^
                  *(uint *)&this->field_0x50 & 0xfffffffd;
          *(uint *)&this->field_0x50 = ((byte)local_1d8._106_1_ | uVar9) & 4 ^ uVar9 & 0xfffffffb;
          if (local_1d8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Points.AllocatorInstance.Data);
          }
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0x50;
        } while ((int)uVar13 < *(int *)(lVar11 + 0x40));
      }
    }
  }
  return;
}

// Empty @ 147390a00

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FCompositeNavModifier::Empty(FCompositeNavModifier *this)

{
  int *piVar1;
  undefined1 *puVar2;
  
  DestructItems<FAreaNavModifier,int>
            ((FAreaNavModifier *)(this->Areas).AllocatorInstance.Data,(this->Areas).ArrayNum);
  piVar1 = &(this->Areas).ArrayMax;
  (this->Areas).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&(this->Areas).AllocatorInstance,0,piVar1);
  }
  DestructItems<FSimpleLinkNavModifier,int>
            ((FSimpleLinkNavModifier *)(this->SimpleLinks).AllocatorInstance.Data,
             (this->SimpleLinks).ArrayNum);
  piVar1 = &(this->SimpleLinks).ArrayMax;
  (this->SimpleLinks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,&(this->SimpleLinks).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->CustomLinks).ArrayMax;
  (this->CustomLinks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,&(this->CustomLinks).AllocatorInstance,0,piVar1);
  }
  this->bHasPotentialLinks = 0;
  this->bRasterizeAsFilledConvexVolume = 0;
  this->bMaskFillCollisionUnderneathForNavmesh = 0;
  this->bFillCollisionUnderneathForNavmesh = 0;
  this->bAdjustHeight = 0;
  this->NavMeshResolution = Invalid;
  return;
}

// GetAllocatedSize @ 147397e90

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

uint __thiscall FCompositeNavModifier::GetAllocatedSize(FCompositeNavModifier *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = (this->SimpleLinks).ArrayNum;
  uVar6 = (longlong)(this->SimpleLinks).ArrayMax * 0xb0 +
          (longlong)(this->CustomLinks).ArrayMax * 0x80 + (longlong)(this->Areas).ArrayMax * 0x70;
  if (0 < (int)uVar4) {
    pFVar5 = (this->SimpleLinks).AllocatorInstance.Data + 0x14;
    uVar7 = (ulonglong)uVar4;
    do {
      iVar1 = *(int *)pFVar5;
      pFVar5 = pFVar5 + 0xb0;
      uVar6 = uVar6 + (longlong)iVar1 * 0x70;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (uVar6 != (uVar6 & 0xffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (uint)uVar6;
}

// GetInstantiatedMetaModifier @ 14739c8d0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCompositeNavModifier * __thiscall
FCompositeNavModifier::GetInstantiatedMetaModifier
          (FCompositeNavModifier *this,FCompositeNavModifier *__return_storage_ptr__,
          FNavAgentProperties *param_1,TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  UObject *pUVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  FSoftClassPath *pFVar9;
  float fVar10;
  undefined4 uVar11;
  FNavAgentSelector FVar12;
  FNavigationLinkBase_u_36 FVar13;
  undefined7 uVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  TStatId TVar20;
  FCompositeNavModifier *pFVar21;
  FNavAgentProperties *this_00;
  TSubclassOf<UNavAreaBase> TVar22;
  TObjectPtr<UClass>_u_0 TVar23;
  UClass *pUVar24;
  TObjectPtr<UClass>_u_0 *pTVar25;
  UClass *pUVar26;
  UNavLinkDefinition *pUVar27;
  FAreaNavModifier *this_01;
  FNavigationLinkBase *this_02;
  uint uVar28;
  int iVar29;
  FNavigationSegmentLink *pFVar30;
  TObjectPtr<UClass>_u_0 TVar31;
  longlong lVar32;
  TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_> *pTVar33;
  uint uVar34;
  TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *pTVar35;
  FNavigationLinkBase *pFVar36;
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *pTVar37;
  FScriptContainerElement *pFVar38;
  longlong lVar39;
  int local_res8;
  FCycleCounter local_158;
  TObjectPtr<UClass>_u_0 local_148;
  longlong local_140;
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *local_138;
  TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_> *local_130;
  longlong local_128;
  undefined1 local_120 [16];
  TObjectPtr<UClass>_u_0 local_110;
  TObjectPtr<UClass>_u_0 local_108;
  TObjectPtr<UClass>_u_0 local_100;
  FScriptContainerElement *local_f8;
  TObjectPtr<UClass>_u_0 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  char *pcStack_e0;
  char *local_d8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  TObjectPtr<UClass>_u_0 local_a8;
  undefined1 local_a0 [8];
  TObjectPtr<UClass>_u_0 local_98;
  undefined1 local_90 [8];
  TObjectPtr<UClass>_u_0 local_88;
  undefined1 local_80 [8];
  TObjectPtr<UClass>_u_0 local_78;
  double local_68;
  char *pcStack_60;
  char *local_58;
  
  iVar29 = 0;
  TVar20 = FThreadSafeStaticStatInner<FStat_STAT_Navigation_MetaAreaTranslation,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_Navigation_MetaAreaTranslation,1> *)
                      &StatPtr_STAT_Navigation_MetaAreaTranslation);
  local_e8 = 0x341;
  uStack_e4 = 2;
  pcStack_e0 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
  ;
  local_68 = 4.24399199348723e-314;
  local_d8 = 
  "struct FCompositeNavModifier __cdecl FCompositeNavModifier::GetInstantiatedMetaModifier(const struct FNavAgentProperties *,const struct TWeakObjectPtr<class UObject const ,struct FWeakObjectPtr> &) const"
  ;
  local_58 = 
  "struct FCompositeNavModifier __cdecl FCompositeNavModifier::GetInstantiatedMetaModifier(const struct FNavAgentProperties *,const struct TWeakObjectPtr<class UObject const ,struct FWeakObjectPtr> &) const"
  ;
  local_158.StatId.ComparisonIndex.Value = 0;
  local_158.StatId.Number = 0;
  local_158.EmittedEvent = 0;
  pcStack_60 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
  ;
  FCycleCounter::Start
            (&local_158,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             (FSourceLocation *)&local_68);
  *(uint *)&__return_storage_ptr__->_padding_ = (uint)__return_storage_ptr__->_padding_ & 0xfffffffe
  ;
  __return_storage_ptr__->bHasPotentialLinks = 0;
  __return_storage_ptr__->bRasterizeAsFilledConvexVolume = 0;
  __return_storage_ptr__->bMaskFillCollisionUnderneathForNavmesh = 0;
  __return_storage_ptr__->bFillCollisionUnderneathForNavmesh = 0;
  __return_storage_ptr__->bIsPerInstanceModifier = 0;
  __return_storage_ptr__->bHasLowAreaModifiers = 0;
  __return_storage_ptr__->bAdjustHeight = 0;
  *(undefined8 *)&__return_storage_ptr__->NavDataPerInstanceTransformDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->NavDataPerInstanceTransformDelegate).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->NavDataPerInstanceTransformDelegate).field_0x10 = 0;
  (__return_storage_ptr__->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Areas).ArrayNum = 0;
  (__return_storage_ptr__->Areas).ArrayMax = 0;
  (__return_storage_ptr__->SimpleLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SimpleLinks).ArrayNum = 0;
  (__return_storage_ptr__->SimpleLinks).ArrayMax = 0;
  (__return_storage_ptr__->CustomLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CustomLinks).ArrayNum = 0;
  (__return_storage_ptr__->CustomLinks).ArrayMax = 0;
  __return_storage_ptr__->NavMeshResolution = Invalid;
  if ((param_1 == (FNavAgentProperties *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("NavAgent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                          ,0x344,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
    return pFVar21;
  }
  if (((this->_padding_ & 1) == 0) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7179430412454724422>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                          ,0x346,"HasMetaAreas() == true"), bVar15)) {
    pcVar7 = (code *)swi(3);
    pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
    return pFVar21;
  }
  this_00 = (FNavAgentProperties *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  if (this_00 != (FNavAgentProperties *)0x0) {
    bVar15 = UObjectBaseUtility::IsA<AActor>((UObjectBaseUtility *)this_00);
    if (bVar15) {
LAB_14739ca99:
      operator=(__return_storage_ptr__,this);
      *(uint *)&__return_storage_ptr__->_padding_ =
           (uint)__return_storage_ptr__->_padding_ & 0xfffffffe;
      this_01 = (FAreaNavModifier *)(__return_storage_ptr__->Areas).AllocatorInstance.Data;
      if (0 < (__return_storage_ptr__->Areas).ArrayNum) {
        do {
          if ((this_01->_padding_ & 1) != 0) {
            local_120._0_8_ = FWeakObjectPtr::Get(&(this_01->AreaClassOb).WeakPtr);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)local_120._0_8_ != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_120._0_8_);
            }
            TVar22 = UNavAreaBase::PickAreaClassForAgent
                               ((TSubclassOf<UNavAreaBase>)local_c0,(AActor *)local_120,this_00);
            FAreaNavModifier::SetAreaClass(this_01,TVar22);
            local_120._8_8_ = FWeakObjectPtr::Get(&(this_01->ReplaceAreaClassOb).WeakPtr);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)local_120._8_8_ != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_120._8_8_);
            }
            TVar22 = UNavAreaBase::PickAreaClassForAgent
                               ((TSubclassOf<UNavAreaBase>)local_b8,(AActor *)(local_120 + 8),
                                this_00);
            FAreaNavModifier::SetAreaClassToReplace(this_01,TVar22);
            *(uint *)&__return_storage_ptr__->_padding_ =
                 (uint)__return_storage_ptr__->_padding_ | 1;
          }
          iVar29 = iVar29 + 1;
          this_01 = this_01 + 1;
        } while (iVar29 < (__return_storage_ptr__->Areas).ArrayNum);
      }
      iVar29 = (__return_storage_ptr__->SimpleLinks).ArrayNum;
      pFVar38 = (__return_storage_ptr__->SimpleLinks).AllocatorInstance.Data;
      local_res8 = 0;
      if (0 < iVar29) {
        do {
          if (((byte)*pFVar38 & 1) != 0) {
            uVar28 = 0;
            if (0 < *(int *)(pFVar38 + 0x10)) {
              lVar32 = 0;
              do {
                uVar34 = 0;
                if ((int)uVar28 < *(int *)(pFVar38 + 0x10)) {
                  uVar34 = ~uVar28 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                  return pFVar21;
                }
                pFVar36 = (FNavigationLinkBase *)(*(longlong *)(pFVar38 + 8) + lVar32);
                TVar23.DebugPtr = FNavigationLinkBase::GetAreaClass(pFVar36);
                local_148.DebugPtr = TVar23.DebugPtr;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (TVar23.DebugPtr != (UClass *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                }
                pUVar24 = TSubclassOf<UNavAreaBase>::operator*
                                    ((TSubclassOf<UNavAreaBase> *)&local_148.ObjectPtr);
                if (pUVar24 == (UClass *)0x0) {
LAB_14739cccc:
                  local_a8.DebugPtr = TVar23.DebugPtr;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (TVar23.DebugPtr != (UClass *)0x0) {
                      UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                    }
                    goto LAB_14739cce6;
                  }
LAB_14739ccfe:
                  if (TVar23.DebugPtr != (UClass *)0x0) {
LAB_14739cd03:
                    pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                    if (pUVar24 != (UClass *)0x0) {
                      iVar29 = (int)pUVar24->_padding_;
                      if (((int)(TVar23.DebugPtr)->_padding_ < iVar29) ||
                         ((longlong *)
                          *(undefined1 **)((TVar23.DebugPtr)->_padding_ + (longlong)iVar29 * 8) !=
                          &pUVar24->_padding_)) {
                        bVar15 = false;
                      }
                      else {
                        bVar15 = true;
                      }
                      if (bVar15) {
                        local_110 = TVar23;
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                        }
                        FWeakObjectPtr::operator=
                                  (&(pFVar36->AreaClassOb).WeakPtr,(FObjectPtr)&local_110);
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                        }
                        (pFVar36->AreaClass).Class.field0_0x0.DebugPtr = (UClass *)TVar23;
                      }
                    }
                  }
                }
                else {
                  pUVar24 = TSubclassOf<UNavAreaBase>::operator*
                                      ((TSubclassOf<UNavAreaBase> *)&local_148.ObjectPtr);
                  if ((pUVar24->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                    UClass::InternalCreateDefaultObjectWrapper(pUVar24);
                  }
                  pUVar3 = (pUVar24->ClassDefaultObject).field0_0x0.DebugPtr;
                  pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  iVar29 = (int)pUVar24->_padding_;
                  if (((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar29) ||
                      ((longlong *)
                       *(undefined1 **)
                        (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) +
                        (longlong)iVar29 * 8) != &pUVar24->_padding_)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Ret->IsA(T::StaticClass())",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                          ,0x1181,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                    return pFVar21;
                  }
                  cVar16 = (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3);
                  if (cVar16 == '\0') goto LAB_14739cccc;
                  pTVar25 = (TObjectPtr<UClass>_u_0 *)
                            (**(code **)(*(longlong *)pUVar3 + 0x2c0))
                                      (pUVar3,local_b0,this_00,param_1);
                  TVar23 = (TObjectPtr<UClass>_u_0)pTVar25->DebugPtr;
LAB_14739cce6:
                  if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14739ccfe;
                  if (TVar23.DebugPtr != (UClass *)0x0) {
                    UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                    goto LAB_14739cd03;
                  }
                }
                uVar28 = uVar28 + 1;
                lVar32 = lVar32 + 0x70;
              } while ((int)uVar28 < *(int *)(pFVar38 + 0x10));
            }
            uVar28 = 0;
            if (0 < *(int *)(pFVar38 + 0x20)) {
              lVar32 = 0;
              do {
                uVar34 = 0;
                if ((int)uVar28 < *(int *)(pFVar38 + 0x20)) {
                  uVar34 = ~uVar28 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                  return pFVar21;
                }
                lVar39 = *(longlong *)(pFVar38 + 0x18);
                TVar23.DebugPtr =
                     (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar39 + 0x38 + lVar32));
                TVar22 = FNavigationSystem::DefaultWalkableArea;
                if (TVar23.DebugPtr == (UClass *)0x0) {
                  if (UE::GC::GIsIncrementalReachabilityPending == false) {
                    if ((TObjectPtr<UClass>_u_0)
                        FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 !=
                        (TObjectPtr<UClass>_u_0)0x0) goto LAB_14739ce24;
                  }
                  else if ((TObjectPtr<UClass>_u_0)
                           FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 !=
                           (TObjectPtr<UClass>_u_0)0x0) {
                    UE::GC::MarkAsReachable
                              ((UObject *)FNavigationSystem::DefaultWalkableArea.Class.field0_0x0);
LAB_14739ce24:
                    pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                    if (pUVar24 != (UClass *)0x0) {
                      iVar29 = (int)pUVar24->_padding_;
                      if ((*(int *)((longlong)TVar22.Class.field0_0x0 + 0x38) < iVar29) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)((longlong)TVar22.Class.field0_0x0 + 0x30) +
                           (longlong)iVar29 * 8) != &pUVar24->_padding_)) {
                        bVar15 = false;
                      }
                      else {
                        bVar15 = true;
                      }
                      TVar23 = (TObjectPtr<UClass>_u_0)TVar22;
                      if (bVar15) goto LAB_14739ce54;
                    }
                  }
                  TVar23.DebugPtr = (UClass *)0x0;
                }
LAB_14739ce54:
                if (UE::GC::GIsIncrementalReachabilityPending == false) {
                  if (TVar23.DebugPtr != (UClass *)0x0) goto LAB_14739ce79;
LAB_14739cf75:
                  local_98 = TVar23;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (TVar23.DebugPtr != (UClass *)0x0) {
                      UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                    }
                    goto LAB_14739cf8f;
                  }
LAB_14739cfa7:
                  if (TVar23.DebugPtr != (UClass *)0x0) {
LAB_14739cfac:
                    pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                    if (pUVar24 != (UClass *)0x0) {
                      iVar29 = (int)pUVar24->_padding_;
                      if (((int)(TVar23.DebugPtr)->_padding_ < iVar29) ||
                         ((longlong *)
                          *(undefined1 **)((TVar23.DebugPtr)->_padding_ + (longlong)iVar29 * 8) !=
                          &pUVar24->_padding_)) {
                        bVar15 = false;
                      }
                      else {
                        bVar15 = true;
                      }
                      if (bVar15) {
                        local_108 = TVar23;
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                        }
                        FWeakObjectPtr::operator=
                                  ((FWeakObjectPtr *)(lVar32 + 0x38 + lVar39),(FObjectPtr)&local_108
                                  );
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                        }
                        ((TObjectPtr<UClass>_u_0 *)(lVar39 + 0x30 + lVar32))->DebugPtr =
                             (UClass *)TVar23;
                      }
                    }
                  }
                }
                else {
                  if (TVar23.DebugPtr == (UClass *)0x0) goto LAB_14739cf75;
                  UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
LAB_14739ce79:
                  pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  if (pUVar24 == (UClass *)0x0) goto LAB_14739cf75;
                  iVar29 = (int)pUVar24->_padding_;
                  if (((int)(TVar23.DebugPtr)->_padding_ < iVar29) ||
                     ((longlong *)
                      *(undefined1 **)((TVar23.DebugPtr)->_padding_ + (longlong)iVar29 * 8) !=
                      &pUVar24->_padding_)) {
                    bVar15 = false;
                  }
                  else {
                    bVar15 = true;
                  }
                  if (!bVar15) goto LAB_14739cf75;
                  pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  if (pUVar24 == (UClass *)0x0) {
LAB_14739cee2:
                    TVar31.DebugPtr = (UClass *)0x0;
                  }
                  else {
                    iVar29 = (int)pUVar24->_padding_;
                    if (((int)(TVar23.DebugPtr)->_padding_ < iVar29) ||
                       ((longlong *)
                        *(undefined1 **)((TVar23.DebugPtr)->_padding_ + (longlong)iVar29 * 8) !=
                        &pUVar24->_padding_)) {
                      bVar15 = false;
                    }
                    else {
                      bVar15 = true;
                    }
                    TVar31 = TVar23;
                    if (!bVar15) goto LAB_14739cee2;
                  }
                  if (((TVar31.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0)
                  {
                    UClass::InternalCreateDefaultObjectWrapper(TVar31.DebugPtr);
                  }
                  plVar4 = *(longlong **)((longlong)TVar31 + 0x110);
                  pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  iVar29 = (int)pUVar24->_padding_;
                  if (((*(int *)(plVar4[2] + 0x38) < iVar29) ||
                      ((longlong *)
                       *(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar29 * 8) !=
                       &pUVar24->_padding_)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Ret->IsA(T::StaticClass())",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                          ,0x1181,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                    return pFVar21;
                  }
                  cVar16 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
                  if (cVar16 == '\0') goto LAB_14739cf75;
                  pTVar25 = (TObjectPtr<UClass>_u_0 *)
                            (**(code **)(*plVar4 + 0x2c0))(plVar4,local_a0,this_00,param_1);
                  TVar23 = (TObjectPtr<UClass>_u_0)pTVar25->DebugPtr;
LAB_14739cf8f:
                  if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14739cfa7;
                  if (TVar23.DebugPtr != (UClass *)0x0) {
                    UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                    goto LAB_14739cfac;
                  }
                }
                uVar28 = uVar28 + 1;
                lVar32 = lVar32 + 0xa0;
              } while ((int)uVar28 < *(int *)(pFVar38 + 0x20));
            }
          }
          iVar29 = (__return_storage_ptr__->SimpleLinks).ArrayNum;
          local_res8 = local_res8 + 1;
          pFVar38 = pFVar38 + 0xb0;
        } while (local_res8 < iVar29);
      }
      uVar28 = (__return_storage_ptr__->CustomLinks).ArrayNum + iVar29;
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
      }
      if ((__return_storage_ptr__->SimpleLinks).ArrayMax < (int)uVar28) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb0,0x10,uVar28,&(__return_storage_ptr__->SimpleLinks).AllocatorInstance,
                   (__return_storage_ptr__->SimpleLinks).ArrayNum,
                   &(__return_storage_ptr__->SimpleLinks).ArrayMax);
      }
      uVar28 = (__return_storage_ptr__->CustomLinks).ArrayNum - 1;
      if (-1 < (int)uVar28) {
        lVar32 = (longlong)(int)uVar28;
        pTVar33 = &__return_storage_ptr__->SimpleLinks;
        local_130 = pTVar33;
        do {
          uVar34 = 0;
          if ((int)uVar28 < (__return_storage_ptr__->CustomLinks).ArrayNum) {
            uVar34 = ~uVar28 >> 0x1f;
          }
          local_128 = lVar32;
          if ((uVar34 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
            return pFVar21;
          }
          pFVar38 = (__return_storage_ptr__->CustomLinks).AllocatorInstance.Data + lVar32 * 0x80;
          local_f8 = pFVar38;
          if (((byte)*pFVar38 & 1) != 0) {
            pUVar24 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar38 + 0x70));
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar24 != (UClass *)0x0) goto LAB_14739d14b;
LAB_14739d197:
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                atexit(`UNavLinkDefinition::GetLinksDefinition'::__l2::
                       _dynamic_atexit_destructor_for__DummyDefinition__);
                _Init_thread_footer(&::_TSS0);
              }
              pTVar37 = &DummyDefinition;
            }
            else {
              if (pUVar24 == (UClass *)0x0) goto LAB_14739d197;
              UE::GC::MarkAsReachable((UObject *)pUVar24);
LAB_14739d14b:
              pUVar26 = Z_Construct_UClass_UNavLinkDefinition_NoRegister();
              if (pUVar26 == (UClass *)0x0) goto LAB_14739d197;
              iVar29 = (int)pUVar26->_padding_;
              if (((int)pUVar24->_padding_ < iVar29) ||
                 ((longlong *)*(undefined1 **)(pUVar24->_padding_ + (longlong)iVar29 * 8) !=
                  &pUVar26->_padding_)) {
                bVar15 = false;
              }
              else {
                bVar15 = true;
              }
              if ((!bVar15) ||
                 (pUVar27 = UClass::GetDefaultObject<UNavLinkDefinition>(pUVar24),
                 pUVar27 == (UNavLinkDefinition *)0x0)) goto LAB_14739d197;
              UNavLinkDefinition::InitializeAreaClass(pUVar27);
              pTVar37 = &pUVar27->Links;
            }
            local_138 = pTVar37;
            uVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0xb0,0x10,1,&pTVar33->AllocatorInstance,&pTVar33->ArrayNum,
                                &pTVar33->ArrayMax);
            lVar32 = (longlong)(int)uVar17 * 0xb0;
            memset((pTVar33->AllocatorInstance).Data + lVar32,0,0xb0);
            uVar34 = 0;
            if ((int)uVar17 < pTVar33->ArrayNum) {
              uVar34 = ~uVar17 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
              return pFVar21;
            }
            pFVar5 = (pTVar33->AllocatorInstance).Data;
            uVar8 = *(undefined8 *)(pFVar38 + 0x18);
            *(undefined8 *)(pFVar5 + lVar32 + 0x30) = *(undefined8 *)(pFVar38 + 0x10);
            *(undefined8 *)(pFVar5 + lVar32 + 0x30 + 8) = uVar8;
            uVar8 = *(undefined8 *)(pFVar38 + 0x28);
            *(undefined8 *)(pFVar5 + lVar32 + 0x40) = *(undefined8 *)(pFVar38 + 0x20);
            *(undefined8 *)(pFVar5 + lVar32 + 0x40 + 8) = uVar8;
            uVar8 = *(undefined8 *)(pFVar38 + 0x38);
            *(undefined8 *)(pFVar5 + lVar32 + 0x50) = *(undefined8 *)(pFVar38 + 0x30);
            *(undefined8 *)(pFVar5 + lVar32 + 0x50 + 8) = uVar8;
            uVar8 = *(undefined8 *)(pFVar38 + 0x48);
            *(undefined8 *)(pFVar5 + lVar32 + 0x60) = *(undefined8 *)(pFVar38 + 0x40);
            *(undefined8 *)(pFVar5 + lVar32 + 0x60 + 8) = uVar8;
            uVar8 = *(undefined8 *)(pFVar38 + 0x58);
            *(undefined8 *)(pFVar5 + lVar32 + 0x70) = *(undefined8 *)(pFVar38 + 0x50);
            *(undefined8 *)(pFVar5 + lVar32 + 0x70 + 8) = uVar8;
            uVar8 = *(undefined8 *)(pFVar38 + 0x68);
            *(undefined8 *)(pFVar5 + lVar32 + 0x80) = *(undefined8 *)(pFVar38 + 0x60);
            *(undefined8 *)(pFVar5 + lVar32 + 0x80 + 8) = uVar8;
            uVar34 = pTVar37->ArrayNum;
            if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
            }
            if (*(int *)(pFVar5 + lVar32 + 0x14) < (int)uVar34) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x70,8,uVar34,(ForAnyElementType *)(pFVar5 + lVar32 + 8),
                         *(int *)(pFVar5 + lVar32 + 0x10),(int *)(pFVar5 + lVar32 + 0x14));
            }
            iVar29 = pTVar37->ArrayNum;
            uVar34 = 0;
            if (0 < iVar29) {
              local_140 = 0;
              do {
                lVar39 = local_140;
                uVar17 = 0;
                if ((int)uVar34 < iVar29) {
                  uVar17 = ~uVar34 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                  return pFVar21;
                }
                pFVar36 = (FNavigationLinkBase *)((pTVar37->AllocatorInstance).Data + lVar39);
                if (((*(FNavigationLinkBase **)(pFVar5 + lVar32 + 8) <= pFVar36) &&
                    (pFVar36 < (FNavigationLinkBase *)
                               ((longlong)*(int *)(pFVar5 + lVar32 + 0x14) * 0x70 +
                               (longlong)*(FNavigationLinkBase **)(pFVar5 + lVar32 + 8)))) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                  return pFVar21;
                }
                uVar17 = *(uint *)(pFVar5 + lVar32 + 0x10);
                if (uVar17 == *(uint *)(pFVar5 + lVar32 + 0x14)) {
                  uVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x870,(ForAnyElementType *)(pFVar5 + lVar32 + 8),
                                      (int *)(pFVar5 + lVar32 + 0x14));
                }
                *(uint *)(pFVar5 + lVar32 + 0x10) = uVar17 + 1;
                lVar39 = (longlong)(int)uVar17 * 0x70;
                this_02 = (FNavigationLinkBase *)(*(longlong *)(pFVar5 + lVar32 + 8) + lVar39);
                FNavigationLinkBase::FNavigationLinkBase(this_02,pFVar36);
                fVar10 = pFVar36[1].MaxFallDownLength;
                uVar18 = pFVar36[1].UserId;
                uVar11 = *(undefined4 *)&pFVar36[1].field_0xc;
                this_02[1].LeftProjectHeight = pFVar36[1].LeftProjectHeight;
                this_02[1].MaxFallDownLength = fVar10;
                this_02[1].UserId = uVar18;
                *(undefined4 *)&this_02[1].field_0xc = uVar11;
                this_02[1].NavLinkId.Id = pFVar36[1].NavLinkId.Id;
                fVar10 = pFVar36[1].SnapHeight;
                FVar12.field0_0x0 = pFVar36[1].SupportedAgents.field0_0x0;
                FVar13 = pFVar36[1].field7_0x24;
                this_02[1].SnapRadius = pFVar36[1].SnapRadius;
                this_02[1].SnapHeight = fVar10;
                this_02[1].SupportedAgents = (FNavAgentSelector)FVar12.field0_0x0;
                this_02[1].field7_0x24 = FVar13;
                uVar14 = *(undefined7 *)&pFVar36[1].field_0x29;
                this_02[1].Direction =
                     (TEnumAsByte<ENavLinkDirection::Type>)pFVar36[1].Direction.Value;
                *(undefined7 *)&this_02[1].field_0x29 = uVar14;
                uVar18 = 0;
                if ((int)uVar17 < *(int *)(pFVar5 + lVar32 + 0x10)) {
                  uVar18 = ~uVar17 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                  return pFVar21;
                }
                lVar6 = *(longlong *)(pFVar5 + lVar32 + 8);
                TVar23.DebugPtr =
                     (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar6 + 0x38 + lVar39));
                TVar22 = FNavigationSystem::DefaultWalkableArea;
                if (TVar23.DebugPtr == (UClass *)0x0) {
                  if (UE::GC::GIsIncrementalReachabilityPending == false) {
                    if ((TObjectPtr<UClass>_u_0)
                        FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 !=
                        (TObjectPtr<UClass>_u_0)0x0) goto LAB_14739d48c;
                  }
                  else if ((TObjectPtr<UClass>_u_0)
                           FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 !=
                           (TObjectPtr<UClass>_u_0)0x0) {
                    UE::GC::MarkAsReachable
                              ((UObject *)FNavigationSystem::DefaultWalkableArea.Class.field0_0x0);
LAB_14739d48c:
                    pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                    if (pUVar24 != (UClass *)0x0) {
                      iVar29 = (int)pUVar24->_padding_;
                      if ((*(int *)((longlong)TVar22.Class.field0_0x0 + 0x38) < iVar29) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)((longlong)TVar22.Class.field0_0x0 + 0x30) +
                           (longlong)iVar29 * 8) != &pUVar24->_padding_)) {
                        bVar15 = false;
                      }
                      else {
                        bVar15 = true;
                      }
                      TVar23 = (TObjectPtr<UClass>_u_0)TVar22;
                      if (bVar15) goto LAB_14739d4bc;
                    }
                  }
                  TVar23.DebugPtr = (UClass *)0x0;
                }
LAB_14739d4bc:
                if (UE::GC::GIsIncrementalReachabilityPending == false) {
                  if (TVar23.DebugPtr != (UClass *)0x0) goto LAB_14739d4e1;
LAB_14739d5e1:
                  local_88 = TVar23;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (TVar23.DebugPtr != (UClass *)0x0) {
                      UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                    }
                    goto LAB_14739d5fb;
                  }
LAB_14739d613:
                  if (TVar23.DebugPtr != (UClass *)0x0) {
LAB_14739d618:
                    pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                    if (pUVar24 != (UClass *)0x0) {
                      iVar29 = (int)pUVar24->_padding_;
                      if (((int)(TVar23.DebugPtr)->_padding_ < iVar29) ||
                         ((longlong *)
                          *(undefined1 **)((TVar23.DebugPtr)->_padding_ + (longlong)iVar29 * 8) !=
                          &pUVar24->_padding_)) {
                        bVar15 = false;
                      }
                      else {
                        bVar15 = true;
                      }
                      if (bVar15) {
                        local_100 = TVar23;
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                        }
                        FWeakObjectPtr::operator=
                                  ((FWeakObjectPtr *)(lVar39 + 0x38 + lVar6),(FObjectPtr)&local_100)
                        ;
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                        }
                        ((TObjectPtr<UClass>_u_0 *)(lVar6 + 0x30 + lVar39))->DebugPtr =
                             (UClass *)TVar23;
                      }
                    }
                  }
                }
                else {
                  if (TVar23.DebugPtr == (UClass *)0x0) goto LAB_14739d5e1;
                  UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
LAB_14739d4e1:
                  pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  if (pUVar24 == (UClass *)0x0) goto LAB_14739d5e1;
                  iVar29 = (int)pUVar24->_padding_;
                  if (((int)(TVar23.DebugPtr)->_padding_ < iVar29) ||
                     ((longlong *)
                      *(undefined1 **)((TVar23.DebugPtr)->_padding_ + (longlong)iVar29 * 8) !=
                      &pUVar24->_padding_)) {
                    bVar15 = false;
                  }
                  else {
                    bVar15 = true;
                  }
                  if (!bVar15) goto LAB_14739d5e1;
                  pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  if (pUVar24 == (UClass *)0x0) {
LAB_14739d54a:
                    TVar31.DebugPtr = (UClass *)0x0;
                  }
                  else {
                    iVar29 = (int)pUVar24->_padding_;
                    if (((int)(TVar23.DebugPtr)->_padding_ < iVar29) ||
                       ((longlong *)
                        *(undefined1 **)((TVar23.DebugPtr)->_padding_ + (longlong)iVar29 * 8) !=
                        &pUVar24->_padding_)) {
                      bVar15 = false;
                    }
                    else {
                      bVar15 = true;
                    }
                    TVar31 = TVar23;
                    if (!bVar15) goto LAB_14739d54a;
                  }
                  if (((TVar31.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0)
                  {
                    UClass::InternalCreateDefaultObjectWrapper(TVar31.DebugPtr);
                  }
                  plVar4 = *(longlong **)((longlong)TVar31 + 0x110);
                  pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  iVar29 = (int)pUVar24->_padding_;
                  if (((*(int *)(plVar4[2] + 0x38) < iVar29) ||
                      ((longlong *)
                       *(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar29 * 8) !=
                       &pUVar24->_padding_)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Ret->IsA(T::StaticClass())",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                          ,0x1181,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                    return pFVar21;
                  }
                  cVar16 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
                  if (cVar16 == '\0') goto LAB_14739d5e1;
                  pTVar25 = (TObjectPtr<UClass>_u_0 *)
                            (**(code **)(*plVar4 + 0x2c0))(plVar4,local_90,this_00,param_1);
                  TVar23 = (TObjectPtr<UClass>_u_0)pTVar25->DebugPtr;
LAB_14739d5fb:
                  if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14739d613;
                  if (TVar23.DebugPtr != (UClass *)0x0) {
                    UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                    goto LAB_14739d618;
                  }
                }
                local_140 = local_140 + 0x70;
                uVar34 = uVar34 + 1;
                iVar29 = local_138->ArrayNum;
                pTVar37 = local_138;
              } while ((int)uVar34 < iVar29);
            }
            pFVar38 = local_f8;
            pUVar24 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_f8 + 0x70));
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar24 != (UClass *)0x0) goto LAB_14739d6d6;
LAB_14739d722:
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                atexit(`UNavLinkDefinition::GetSegmentLinksDefinition'::__l2::
                       _dynamic_atexit_destructor_for__DummyDefinition__);
                _Init_thread_footer(&::_TSS0);
              }
              pTVar35 = &DummyDefinition;
            }
            else {
              if (pUVar24 == (UClass *)0x0) goto LAB_14739d722;
              UE::GC::MarkAsReachable((UObject *)pUVar24);
LAB_14739d6d6:
              pUVar26 = Z_Construct_UClass_UNavLinkDefinition_NoRegister();
              if (pUVar26 == (UClass *)0x0) goto LAB_14739d722;
              iVar29 = (int)pUVar26->_padding_;
              if (((int)pUVar24->_padding_ < iVar29) ||
                 ((longlong *)*(undefined1 **)(pUVar24->_padding_ + (longlong)iVar29 * 8) !=
                  &pUVar26->_padding_)) {
                bVar15 = false;
              }
              else {
                bVar15 = true;
              }
              if ((!bVar15) ||
                 (pUVar27 = UClass::GetDefaultObject<UNavLinkDefinition>(pUVar24),
                 pUVar27 == (UNavLinkDefinition *)0x0)) goto LAB_14739d722;
              UNavLinkDefinition::InitializeAreaClass(pUVar27);
              pTVar35 = &pUVar27->SegmentLinks;
            }
            pTVar33 = local_130;
            uVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0xb0,0x10,1,&local_130->AllocatorInstance,&local_130->ArrayNum,
                                &local_130->ArrayMax);
            lVar32 = (longlong)(int)uVar17 * 0xb0;
            memset((pTVar33->AllocatorInstance).Data + lVar32,0,0xb0);
            uVar34 = 0;
            if ((int)uVar17 < pTVar33->ArrayNum) {
              uVar34 = ~uVar17 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
              return pFVar21;
            }
            pFVar5 = (pTVar33->AllocatorInstance).Data;
            uVar8 = *(undefined8 *)(pFVar38 + 0x18);
            *(undefined8 *)(pFVar5 + lVar32 + 0x30) = *(undefined8 *)(pFVar38 + 0x10);
            *(undefined8 *)(pFVar5 + lVar32 + 0x30 + 8) = uVar8;
            uVar8 = *(undefined8 *)(pFVar38 + 0x28);
            *(undefined8 *)(pFVar5 + lVar32 + 0x40) = *(undefined8 *)(pFVar38 + 0x20);
            *(undefined8 *)(pFVar5 + lVar32 + 0x40 + 8) = uVar8;
            uVar8 = *(undefined8 *)(pFVar38 + 0x38);
            *(undefined8 *)(pFVar5 + lVar32 + 0x50) = *(undefined8 *)(pFVar38 + 0x30);
            *(undefined8 *)(pFVar5 + lVar32 + 0x50 + 8) = uVar8;
            uVar8 = *(undefined8 *)(pFVar38 + 0x48);
            *(undefined8 *)(pFVar5 + lVar32 + 0x60) = *(undefined8 *)(pFVar38 + 0x40);
            *(undefined8 *)(pFVar5 + lVar32 + 0x60 + 8) = uVar8;
            uVar8 = *(undefined8 *)(pFVar38 + 0x58);
            *(undefined8 *)(pFVar5 + lVar32 + 0x70) = *(undefined8 *)(pFVar38 + 0x50);
            *(undefined8 *)(pFVar5 + lVar32 + 0x70 + 8) = uVar8;
            uVar8 = *(undefined8 *)(pFVar38 + 0x68);
            *(undefined8 *)(pFVar5 + lVar32 + 0x80) = *(undefined8 *)(pFVar38 + 0x60);
            *(undefined8 *)(pFVar5 + lVar32 + 0x80 + 8) = uVar8;
            uVar34 = pTVar35->ArrayNum;
            if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
            }
            if (*(int *)(pFVar5 + lVar32 + 0x24) < (int)uVar34) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xa0,8,uVar34,(ForAnyElementType *)(pFVar5 + lVar32 + 0x18),
                         *(int *)(pFVar5 + lVar32 + 0x20),(int *)(pFVar5 + lVar32 + 0x24));
            }
            iVar29 = pTVar35->ArrayNum;
            uVar34 = 0;
            if (0 < iVar29) {
              do {
                uVar17 = 0;
                if ((int)uVar34 < iVar29) {
                  uVar17 = ~uVar34 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                  return pFVar21;
                }
                pFVar30 = (FNavigationSegmentLink *)
                          ((pTVar35->AllocatorInstance).Data + (longlong)(int)uVar34 * 0xa0);
                if (((*(FNavigationSegmentLink **)(pFVar5 + lVar32 + 0x18) <= pFVar30) &&
                    (pFVar30 < *(FNavigationSegmentLink **)(pFVar5 + lVar32 + 0x18) +
                               *(int *)(pFVar5 + lVar32 + 0x24))) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                  return pFVar21;
                }
                uVar17 = *(uint *)(pFVar5 + lVar32 + 0x20);
                if (uVar17 == *(uint *)(pFVar5 + lVar32 + 0x24)) {
                  uVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x8a0,(ForAnyElementType *)(pFVar5 + lVar32 + 0x18),
                                      (int *)(pFVar5 + lVar32 + 0x24));
                }
                *(uint *)(pFVar5 + lVar32 + 0x20) = uVar17 + 1;
                FNavigationSegmentLink::FNavigationSegmentLink
                          ((FNavigationSegmentLink *)
                           (*(longlong *)(pFVar5 + lVar32 + 0x18) + (longlong)(int)uVar17 * 0xa0),
                           pFVar30);
                uVar18 = 0;
                if ((int)uVar17 < *(int *)(pFVar5 + lVar32 + 0x20)) {
                  uVar18 = ~uVar17 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                  return pFVar21;
                }
                lVar39 = (longlong)(int)uVar17 * 0xa0 + *(longlong *)(pFVar5 + lVar32 + 0x18);
                TVar23.DebugPtr = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar39 + 0x38));
                TVar22 = FNavigationSystem::DefaultWalkableArea;
                if (TVar23.DebugPtr == (UClass *)0x0) {
                  if (UE::GC::GIsIncrementalReachabilityPending == false) {
                    if ((TObjectPtr<UClass>_u_0)
                        FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 !=
                        (TObjectPtr<UClass>_u_0)0x0) goto LAB_14739d9e8;
                  }
                  else if ((TObjectPtr<UClass>_u_0)
                           FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 !=
                           (TObjectPtr<UClass>_u_0)0x0) {
                    UE::GC::MarkAsReachable
                              ((UObject *)FNavigationSystem::DefaultWalkableArea.Class.field0_0x0);
LAB_14739d9e8:
                    pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                    if (pUVar24 != (UClass *)0x0) {
                      iVar29 = (int)pUVar24->_padding_;
                      if ((*(int *)((longlong)TVar22.Class.field0_0x0 + 0x38) < iVar29) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)((longlong)TVar22.Class.field0_0x0 + 0x30) +
                           (longlong)iVar29 * 8) != &pUVar24->_padding_)) {
                        bVar15 = false;
                      }
                      else {
                        bVar15 = true;
                      }
                      TVar23 = (TObjectPtr<UClass>_u_0)TVar22;
                      if (bVar15) goto LAB_14739da18;
                    }
                  }
                  TVar23.DebugPtr = (UClass *)0x0;
                }
LAB_14739da18:
                if (UE::GC::GIsIncrementalReachabilityPending == false) {
                  if (TVar23.DebugPtr != (UClass *)0x0) goto LAB_14739da3d;
LAB_14739db3d:
                  local_78 = TVar23;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (TVar23.DebugPtr != (UClass *)0x0) {
                      UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                    }
                    goto LAB_14739db57;
                  }
LAB_14739db6f:
                  if (TVar23.DebugPtr != (UClass *)0x0) {
LAB_14739db74:
                    pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                    if (pUVar24 != (UClass *)0x0) {
                      iVar29 = (int)pUVar24->_padding_;
                      if (((int)(TVar23.DebugPtr)->_padding_ < iVar29) ||
                         ((longlong *)
                          *(undefined1 **)((TVar23.DebugPtr)->_padding_ + (longlong)iVar29 * 8) !=
                          &pUVar24->_padding_)) {
                        bVar15 = false;
                      }
                      else {
                        bVar15 = true;
                      }
                      if (bVar15) {
                        local_f0 = TVar23;
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                        }
                        FWeakObjectPtr::operator=
                                  ((FWeakObjectPtr *)(lVar39 + 0x38),(FObjectPtr)&local_f0);
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                        }
                        ((TObjectPtr<UClass>_u_0 *)(lVar39 + 0x30))->DebugPtr = (UClass *)TVar23;
                      }
                    }
                  }
                }
                else {
                  if (TVar23.DebugPtr == (UClass *)0x0) goto LAB_14739db3d;
                  UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
LAB_14739da3d:
                  pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  if (pUVar24 == (UClass *)0x0) goto LAB_14739db3d;
                  iVar29 = (int)pUVar24->_padding_;
                  if (((int)(TVar23.DebugPtr)->_padding_ < iVar29) ||
                     ((longlong *)
                      *(undefined1 **)((TVar23.DebugPtr)->_padding_ + (longlong)iVar29 * 8) !=
                      &pUVar24->_padding_)) {
                    bVar15 = false;
                  }
                  else {
                    bVar15 = true;
                  }
                  if (!bVar15) goto LAB_14739db3d;
                  pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  if (pUVar24 == (UClass *)0x0) {
LAB_14739daa6:
                    TVar31.DebugPtr = (UClass *)0x0;
                  }
                  else {
                    iVar29 = (int)pUVar24->_padding_;
                    if (((int)(TVar23.DebugPtr)->_padding_ < iVar29) ||
                       ((longlong *)
                        *(undefined1 **)((TVar23.DebugPtr)->_padding_ + (longlong)iVar29 * 8) !=
                        &pUVar24->_padding_)) {
                      bVar15 = false;
                    }
                    else {
                      bVar15 = true;
                    }
                    TVar31 = TVar23;
                    if (!bVar15) goto LAB_14739daa6;
                  }
                  if (((TVar31.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0)
                  {
                    UClass::InternalCreateDefaultObjectWrapper(TVar31.DebugPtr);
                  }
                  plVar4 = *(longlong **)((longlong)TVar31 + 0x110);
                  pUVar24 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  iVar29 = (int)pUVar24->_padding_;
                  if (((*(int *)(plVar4[2] + 0x38) < iVar29) ||
                      ((longlong *)
                       *(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar29 * 8) !=
                       &pUVar24->_padding_)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Ret->IsA(T::StaticClass())",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                          ,0x1181,L""), bVar15)) {
                    pcVar7 = (code *)swi(3);
                    pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
                    return pFVar21;
                  }
                  cVar16 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
                  if (cVar16 == '\0') goto LAB_14739db3d;
                  pTVar25 = (TObjectPtr<UClass>_u_0 *)
                            (**(code **)(*plVar4 + 0x2c0))(plVar4,local_80,this_00,param_1);
                  TVar23 = (TObjectPtr<UClass>_u_0)pTVar25->DebugPtr;
LAB_14739db57:
                  if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14739db6f;
                  if (TVar23.DebugPtr != (UClass *)0x0) {
                    UE::GC::MarkAsReachable((UObject *)TVar23.DebugPtr);
                    goto LAB_14739db74;
                  }
                }
                iVar29 = pTVar35->ArrayNum;
                uVar34 = uVar34 + 1;
              } while ((int)uVar34 < iVar29);
            }
            uVar34 = 0;
            if ((int)uVar28 < (__return_storage_ptr__->CustomLinks).ArrayNum) {
              uVar34 = ~uVar28 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              pFVar21 = (FCompositeNavModifier *)(*pcVar7)();
              return pFVar21;
            }
            iVar29 = (__return_storage_ptr__->CustomLinks).ArrayNum;
            pFVar38 = (__return_storage_ptr__->CustomLinks).AllocatorInstance.Data;
            iVar19 = (iVar29 - uVar28) + -1;
            if (1 < iVar19) {
              iVar19 = 1;
            }
            if (iVar19 != 0) {
              memmove(pFVar38 + (longlong)(int)uVar28 * 0x80,
                      pFVar38 + (longlong)(iVar29 - iVar19) * 0x80,(longlong)iVar19 << 7);
            }
            piVar2 = &(__return_storage_ptr__->CustomLinks).ArrayNum;
            *piVar2 = *piVar2 + -1;
            lVar32 = local_128;
            pTVar33 = local_130;
          }
          uVar28 = uVar28 - 1;
          lVar32 = lVar32 + -1;
          local_128 = lVar32;
        } while (-1 < (int)uVar28);
      }
    }
    else {
      do {
        pFVar9 = &this_00->PreferredNavData;
        this_00 = *(FNavAgentProperties **)&(this_00->PreferredNavData).field_0x8;
        if ((this_00 != (FNavAgentProperties *)0x0) &&
           (bVar15 = UObjectBaseUtility::IsA<AActor>((UObjectBaseUtility *)this_00), bVar15))
        goto LAB_14739ca99;
        this_00 = *(FNavAgentProperties **)&pFVar9->field_0x8;
      } while (this_00 != (FNavAgentProperties *)0x0);
    }
  }
  if ((local_158.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_158.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_158.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_158.StatId,CycleScopeEnd);
  }
  return __return_storage_ptr__;
}

// GetInstantiatedMetaModifier @ 14739dd40

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FCompositeNavModifier * __thiscall
FCompositeNavModifier::GetInstantiatedMetaModifier
          (FCompositeNavModifier *this,FCompositeNavModifier *__return_storage_ptr__,
          FNavAgentProperties *param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> param_2)

{
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_2.WeakPtr;
  GetInstantiatedMetaModifier
            (this,__return_storage_ptr__,param_1,
             (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_res10);
  return __return_storage_ptr__;
}

// Reset @ 1473b3550

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FCompositeNavModifier::Reset(FCompositeNavModifier *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FAreaNavModifier *pFVar4;
  FSimpleLinkNavModifier *pFVar5;
  
  piVar1 = &(this->Areas).ArrayMax;
  pFVar4 = (FAreaNavModifier *)(this->Areas).AllocatorInstance.Data;
  iVar3 = (this->Areas).ArrayNum;
  if ((this->Areas).ArrayMax < 0) {
    DestructItems<FAreaNavModifier,int>(pFVar4,iVar3);
    (this->Areas).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,0,&(this->Areas).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FAreaNavModifier,int>(pFVar4,iVar3);
    (this->Areas).ArrayNum = 0;
  }
  piVar1 = &(this->SimpleLinks).ArrayMax;
  pFVar5 = (FSimpleLinkNavModifier *)(this->SimpleLinks).AllocatorInstance.Data;
  iVar3 = (this->SimpleLinks).ArrayNum;
  if ((this->SimpleLinks).ArrayMax < 0) {
    DestructItems<FSimpleLinkNavModifier,int>(pFVar5,iVar3);
    (this->SimpleLinks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,0x10,0,&(this->SimpleLinks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSimpleLinkNavModifier,int>(pFVar5,iVar3);
    (this->SimpleLinks).ArrayNum = 0;
  }
  (this->CustomLinks).ArrayNum = 0;
  if ((this->CustomLinks).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,&(this->CustomLinks).AllocatorInstance,0,&(this->CustomLinks).ArrayMax);
  }
  this->bHasPotentialLinks = 0;
  this->bRasterizeAsFilledConvexVolume = 0;
  this->bMaskFillCollisionUnderneathForNavmesh = 0;
  this->bFillCollisionUnderneathForNavmesh = 0;
  this->bIsPerInstanceModifier = 0;
  this->bAdjustHeight = 0;
  this->NavMeshResolution = Invalid;
  return;
}

// Shrink @ 1473b86c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FCompositeNavModifier::Shrink(FCompositeNavModifier *this)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->Areas).ArrayNum;
  piVar1 = &(this->Areas).ArrayMax;
  if (*piVar1 != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,iVar2,&(this->Areas).AllocatorInstance,iVar2,piVar1);
  }
  iVar2 = (this->SimpleLinks).ArrayNum;
  if ((this->SimpleLinks).ArrayMax != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,iVar2,&(this->SimpleLinks).AllocatorInstance,iVar2,
               &(this->SimpleLinks).ArrayMax);
  }
  iVar2 = (this->CustomLinks).ArrayNum;
  if ((this->CustomLinks).ArrayMax != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar2,&(this->CustomLinks).AllocatorInstance,iVar2,
               &(this->CustomLinks).ArrayMax);
  }
  return;
}

