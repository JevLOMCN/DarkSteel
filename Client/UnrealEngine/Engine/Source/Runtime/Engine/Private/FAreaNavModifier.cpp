// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// FAreaNavModifier @ 147378b30

FAreaNavModifier * __thiscall
FAreaNavModifier::FAreaNavModifier
          (FAreaNavModifier *this,TBox<double> *param_1,TTransform<double> *param_2,
          TSubclassOf<UNavAreaBase> param_3)

{
  UObject *local_res8;
  
  this->_padding_ = this->_padding_ & 0xfffffffe;
  (this->AreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ReplaceAreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Bounds).IsValid = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  local_res8 = *(UObject **)param_3.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  Init(this,(TSubclassOf<UNavAreaBase>)&local_res8);
  SetBox(this,param_1,param_2);
  return this;
}

// FAreaNavModifier @ 147378bb0

FAreaNavModifier * __thiscall
FAreaNavModifier::FAreaNavModifier
          (FAreaNavModifier *this,TVector<double> *param_1,TTransform<double> *param_2,
          TSubclassOf<UNavAreaBase> param_3)

{
  UObject *local_res8;
  TVector<double>_u_0 local_68;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38;
  
  this->_padding_ = this->_padding_ & 0xfffffffe;
  (this->AreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ReplaceAreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Bounds).IsValid = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  local_res8 = *(UObject **)param_3.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  Init(this,(TSubclassOf<UNavAreaBase>)&local_res8);
  local_50 = (param_1->field0_0x0)._s_0.X;
  local_48 = (param_1->field0_0x0)._s_0.Y;
  local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - local_50;
  local_40 = (param_1->field0_0x0)._s_0.Z;
  local_50 = local_50 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y - local_48;
  local_38 = 1;
  local_48 = local_48 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - local_40;
  local_40 = local_40 + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  SetBox(this,(TBox<double> *)&local_68._s_0,param_2);
  return this;
}

// FAreaNavModifier @ 147378cd0

FAreaNavModifier * __thiscall
FAreaNavModifier::FAreaNavModifier
          (FAreaNavModifier *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          int param_3,Type param_4,TTransform<double> *param_5,TSubclassOf<UNavAreaBase> param_6)

{
  code *pcVar1;
  bool bVar2;
  FAreaNavModifier *pFVar3;
  UObject *local_res8;
  
  this->_padding_ = this->_padding_ & 0xfffffffe;
  (this->AreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ReplaceAreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Bounds).IsValid = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  if ((((param_2 < 0) || (param_1->ArrayNum <= param_2)) || (param_3 + -1 < 0)) ||
     (param_1->ArrayNum <= param_3 + -1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPoints.IsValidIndex(FirstIndex) && InPoints.IsValidIndex(LastIndex-1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAreaNavModifier *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_res8 = *(UObject **)param_6.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  Init(this,(TSubclassOf<UNavAreaBase>)&local_res8);
  SetConvex(this,(TVector<double> *)(param_1->AllocatorInstance).Data,param_2,param_3,param_4,
            param_5);
  return this;
}

// FAreaNavModifier @ 147378dc0

FAreaNavModifier * __thiscall
FAreaNavModifier::FAreaNavModifier
          (FAreaNavModifier *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,Type param_2,
          TTransform<double> *param_3,TSubclassOf<UNavAreaBase> param_4)

{
  this->_padding_ = this->_padding_ & 0xfffffffe;
  (this->AreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ReplaceAreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Bounds).IsValid = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  param_4.Class.field0_0x0 = *(TObjectPtr<UClass> *)param_4.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_4.Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4.Class.field0_0x0);
  }
  Init(this,(TSubclassOf<UNavAreaBase>)&param_4);
  SetConvex(this,(TVector<double> *)(param_1->AllocatorInstance).Data,0,param_1->ArrayNum,param_2,
            param_3);
  return this;
}

// FAreaNavModifier @ 147378e60

FAreaNavModifier * __thiscall
FAreaNavModifier::FAreaNavModifier
          (FAreaNavModifier *this,TNavStatArray<UE::Math::TVector<double>_> *param_1,int param_2,
          int param_3,Type param_4,TTransform<double> *param_5,TSubclassOf<UNavAreaBase> param_6)

{
  code *pcVar1;
  bool bVar2;
  FAreaNavModifier *pFVar3;
  UObject *local_res8;
  
  this->_padding_ = this->_padding_ & 0xfffffffe;
  (this->AreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ReplaceAreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Bounds).IsValid = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  if ((((param_2 < 0) || (*(int *)&param_1->field_0x10 <= param_2)) || (param_3 + -1 < 0)) ||
     (*(int *)&param_1->field_0x10 <= param_3 + -1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPoints.IsValidIndex(FirstIndex) && InPoints.IsValidIndex(LastIndex-1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                       ,0x184,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAreaNavModifier *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_res8 = *(UObject **)param_6.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  Init(this,(TSubclassOf<UNavAreaBase>)&local_res8);
  SetConvex(this,*(TVector<double> **)param_1,param_2,param_3,param_4,param_5);
  return this;
}

// FAreaNavModifier @ 147378f50

FAreaNavModifier * __thiscall
FAreaNavModifier::FAreaNavModifier
          (FAreaNavModifier *this,float param_1,float param_2,TTransform<double> *param_3,
          TSubclassOf<UNavAreaBase> param_4)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  FAreaNavModifier *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  uint uVar21;
  undefined7 uStack_5f;
  
  this->_padding_ = this->_padding_ & 0xfffffffe;
  piVar1 = &(this->Points).ArrayNum;
  piVar2 = &(this->Points).ArrayMax;
  *piVar2 = 0;
  (this->AreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ReplaceAreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Bounds).IsValid = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  param_4.Class.field0_0x0 = *(TObjectPtr<UClass> *)param_4.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_4.Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4.Class.field0_0x0);
  }
  Init(this,(TSubclassOf<UNavAreaBase>)&param_4);
  iVar15 = *piVar1;
  uVar20 = *(uint *)((param_3->Scale3D).XY.m128d_f64 + 1) &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar21 = *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = *(uint *)(param_3->Scale3D).XY.m128d_f64 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar21,uVar20) <= (double)CONCAT44(uVar17,uVar16)) {
    uVar20 = uVar16;
    uVar21 = uVar17;
  }
  dVar7 = (double)CONCAT44(uVar21,uVar20) * (double)param_1;
  dVar8 = (double)CONCAT44(*(uint *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           *(uint *)(param_3->Scale3D).ZW.m128d_f64 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) * (double)param_2;
  if (iVar15 < 2) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,2 - iVar15,&(this->Points).AllocatorInstance,piVar1,piVar2);
  }
  else if (2 < iVar15) {
    iVar15 = iVar15 + -2;
    if (iVar15 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FAreaNavModifier *)(*pcVar4)();
        return pFVar13;
      }
    }
    else if (iVar15 == 0) goto LAB_147379108;
    pFVar14 = (this->Points).AllocatorInstance.Data + 0x30;
    iVar12 = (*piVar1 - iVar15) + -2;
    if (iVar12 != 0) {
      memmove(pFVar14,pFVar14 + (longlong)iVar15 * 0x18,(longlong)iVar12 * 0x18);
    }
    *piVar1 = *piVar1 - iVar15;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&(this->Points).AllocatorInstance,*piVar1,piVar2);
  }
LAB_147379108:
  dVar3 = (param_3->Translation).ZW.m128d_f64[0];
  dVar9 = (param_3->Translation).XY.m128d_f64[0];
  dVar10 = (param_3->Translation).XY.m128d_f64[1];
  if ((*piVar1 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FAreaNavModifier *)(*pcVar4)();
    return pFVar13;
  }
  pFVar14 = (this->Points).AllocatorInstance.Data;
  *(double *)pFVar14 = dVar9;
  *(double *)(pFVar14 + 8) = dVar10;
  *(double *)(pFVar14 + 0x10) = dVar3;
  if ((*piVar1 < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FAreaNavModifier *)(*pcVar4)();
    return pFVar13;
  }
  *(double *)((this->Points).AllocatorInstance.Data + 0x18) = dVar7;
  if ((*piVar1 < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FAreaNavModifier *)(*pcVar4)();
    return pFVar13;
  }
  *(double *)((this->Points).AllocatorInstance.Data + 0x28) = dVar8;
  (this->ShapeType).Value = '\x01';
  dVar3 = (param_3->Translation).XY.m128d_f64[0];
  dVar9 = (param_3->Translation).XY.m128d_f64[1];
  dVar10 = (param_3->Translation).ZW.m128d_f64[0];
  dVar19 = dVar10 + dVar8;
  dVar18 = dVar9 - dVar7;
  auVar5._8_4_ = SUB84(dVar18,0);
  auVar5._0_8_ = dVar3 - dVar7;
  auVar5._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])&(this->Bounds).Min.field0_0x0 = auVar5;
  (this->Bounds).Min.field0_0x0._s_0.Z = dVar10 - dVar8;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar3 + dVar7;
  auVar6._8_4_ = SUB84(dVar19,0);
  auVar6._0_8_ = dVar9 + dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Bounds).Max.field0_0x0 + 8) = auVar6;
  (this->Bounds).IsValid = 1;
  (this->Bounds).Pad[0] = (char)uStack_5f;
  (this->Bounds).Pad[1] = (char)((uint7)uStack_5f >> 8);
  (this->Bounds).Pad[2] = (char)((uint7)uStack_5f >> 0x10);
  (this->Bounds).Pad[3] = (char)((uint7)uStack_5f >> 0x18);
  (this->Bounds).Pad[4] = (char)((uint7)uStack_5f >> 0x20);
  (this->Bounds).Pad[5] = (char)((uint7)uStack_5f >> 0x28);
  (this->Bounds).Pad[6] = (char)((uint7)uStack_5f >> 0x30);
  return this;
}

// FAreaNavModifier @ 1473792b0

FAreaNavModifier * __thiscall
FAreaNavModifier::FAreaNavModifier
          (FAreaNavModifier *this,UBrushComponent *param_1,TSubclassOf<UNavAreaBase> param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FAreaNavModifier *pFVar7;
  uint uVar8;
  UBodySetup *pUVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  UObject *local_78 [7];
  undefined1 local_40;
  undefined4 uStack_3f;
  undefined2 uStack_3b;
  undefined1 uStack_39;
  
  this->_padding_ = this->_padding_ & 0xfffffffe;
  uVar12 = 0;
  (this->AreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ReplaceAreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Bounds).IsValid = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  if ((param_1 == (UBrushComponent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BrushComponent != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                         ,0x19c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FAreaNavModifier *)(*pcVar4)();
    return pFVar7;
  }
  pUVar9 = (param_1->BrushBodySetup).field0_0x0.DebugPtr;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  if ((pUVar9 != (UBodySetup *)0x0) &&
     (uVar11 = uVar12, uVar10 = uVar12, 0 < (pUVar9->AggGeom).ConvexElems.ArrayNum)) {
    do {
      uVar13 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar13 < (pUVar9->AggGeom).ConvexElems.ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FAreaNavModifier *)(*pcVar4)();
        return pFVar7;
      }
      pFVar2 = (pUVar9->AggGeom).ConvexElems.AllocatorInstance.Data;
      uVar10 = uVar12;
      if (0 < *(int *)(pFVar2 + uVar11 + 0x38)) {
        do {
          uVar8 = (uint)uVar10;
          uVar6 = 0;
          if ((int)uVar8 < *(int *)(pFVar2 + uVar11 + 0x38)) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FAreaNavModifier *)(*pcVar4)();
            return pFVar7;
          }
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<UE::Math::TVector<double>_const_&>
                    (&local_88,
                     (TVector<double> *)
                     (*(longlong *)(pFVar2 + uVar11 + 0x30) + (longlong)(int)uVar8 * 0x18));
          uVar10 = (ulonglong)(uVar8 + 1);
        } while ((int)(uVar8 + 1) < *(int *)(pFVar2 + uVar11 + 0x38));
      }
      pUVar9 = (param_1->BrushBodySetup).field0_0x0.DebugPtr;
      uVar11 = uVar11 + 0x100;
      uVar10 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < (pUVar9->AggGeom).ConvexElems.ArrayNum);
  }
  pUVar3 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  this->bExpandTopByCellHeight = '\0';
  this->bIncludeAgentHeight = '\0';
  uStack_3f = 0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  uStack_3b = 0;
  uStack_39 = 0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  local_40 = 0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->ApplyMode).Value = '\0';
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  this->Cost = 0.0;
  this->FixedCost = 0.0;
  local_78[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  SetAreaClass(this,(TSubclassOf<UNavAreaBase>)local_78);
  SetConvex(this,(TVector<double> *)local_88.AllocatorInstance.Data,0,local_88.ArrayNum,Unreal,
            (TTransform<double> *)&param_1->field_0x1f0);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return this;
}

// FAreaNavModifier @ 147379550

FAreaNavModifier * __thiscall
FAreaNavModifier::FAreaNavModifier
          (FAreaNavModifier *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          Type param_2,TTransform<double> *param_3,TSubclassOf<UNavAreaBase> param_4)

{
  this->_padding_ = this->_padding_ & 0xfffffffe;
  (this->AreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ReplaceAreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Bounds).IsValid = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  param_4.Class.field0_0x0 = *(TObjectPtr<UClass> *)param_4.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_4.Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4.Class.field0_0x0);
  }
  Init(this,(TSubclassOf<UNavAreaBase>)&param_4);
  SetConvex(this,param_1->DataPtr,0,param_1->ArrayNum,param_2,param_3);
  return this;
}

// FAreaNavModifier @ 1473795f0

FAreaNavModifier * __thiscall FAreaNavModifier::FAreaNavModifier(FAreaNavModifier *this)

{
  undefined1 *puVar1;
  
  this->_padding_ = this->_padding_ & 0xfffffffe;
  (this->AreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ReplaceAreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  this->Cost = 0.0;
  this->FixedCost = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  this->bExpandTopByCellHeight = '\0';
  this->bIsLowAreaModifier = '\0';
  this->bIncludeAgentHeight = '\0';
  this->ShapeType = '\0';
  this->ApplyMode = '\0';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  return this;
}

// FillConvexNavAreaData @ 1473931e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAreaNavModifier::FillConvexNavAreaData
          (TVector<double> *param_1,int param_2,TTransform<double> *param_3,
          FConvexNavAreaData *param_4,TBox<double> *param_5)

{
  int *piVar1;
  ForElementType<UE::Math::TVector<double>_> FVar2;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ForElementType<UE::Math::TVector<double>_> FVar18;
  ForElementType<UE::Math::TVector<double>_> FVar19;
  ForElementType<int> FVar20;
  ForElementType<UE::Math::TVector<double>_> FVar21;
  longlong lVar22;
  ForElementType<UE::Math::TVector<double>_> FVar23;
  uint uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStackY_258 [32];
  double local_208;
  double dStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined4 uStack_1bf;
  undefined2 uStack_1bb;
  undefined1 uStack_1b9;
  undefined1 local_1b8 [16];
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_198;
  TArray<UE::Math::TVector<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_168;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_258;
  piVar1 = &(param_4->Points).ArrayMax;
  local_1c0 = 0;
  uStack_1bf = 0;
  uStack_1bb = 0;
  (param_5->Min).field0_0x0._s_0.X = 0.0;
  (param_5->Min).field0_0x0._s_0.Y = 0.0;
  uStack_1b9 = 0;
  FVar21 = (ForElementType<UE::Math::TVector<double>_>)0x0;
  lVar22 = (longlong)param_2;
  (param_5->Min).field0_0x0._s_0.Z = 0.0;
  (param_5->Max).field0_0x0._s_0.X = 0.0;
  (param_5->Max).field0_0x0._s_0.Y = 0.0;
  (param_5->Max).field0_0x0._s_0.Z = 0.0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  param_5->IsValid = '\0';
  param_5->Pad[0] = '\0';
  param_5->Pad[1] = '\0';
  param_5->Pad[2] = '\0';
  param_5->Pad[3] = '\0';
  param_5->Pad[4] = '\0';
  param_5->Pad[5] = '\0';
  param_5->Pad[6] = '\0';
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  (param_4->Points).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)param_4,0,piVar1);
  }
  param_4->MinZ = 3.4028234663852886e+38;
  param_4->MaxZ = -3.4028234663852886e+38;
  dVar5 = __real_4030000000000000;
  if (0 < param_2) {
    local_168.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
    local_168.ArrayMax = 8;
    local_168.ArrayNum = 0;
    FVar23 = FVar21;
    FVar18 = FVar21;
    for (; lVar22 != 0; lVar22 = lVar22 + -1) {
      auVar34 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
      uVar15 = FVar18._0_4_;
      auVar28 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
      FVar19 = (ForElementType<UE::Math::TVector<double>_>)&local_168;
      if (FVar23 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar19 = FVar23;
      }
      dVar11 = (param_1->field0_0x0)._s_0.Z * (param_3->Scale3D).ZW.m128d_f64[0];
      dVar38 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
      FVar2 = (ForElementType<UE::Math::TVector<double>_>)
              ((longlong)FVar19 + (longlong)(int)uVar15 * 0x18);
      auVar37 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
      dVar12 = auVar37._8_8_;
      local_1f8 = 0;
      dVar9 = (param_3->Scale3D).XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
      dVar10 = (param_3->Scale3D).XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
      uVar29 = (undefined4)((ulonglong)dVar10 >> 0x20);
      local_1b8 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
      auVar40._8_4_ = SUB84(dVar10,0);
      auVar40._0_8_ = dVar9;
      auVar40._12_4_ = uVar29;
      dVar25 = auVar34._0_8_;
      auVar31 = blendpd(local_1b8,auVar34,2);
      auVar41._0_8_ = auVar40._8_8_ * local_1b8._0_8_ - local_1b8._8_8_ * dVar9;
      auVar41._8_8_ = dVar11 * local_1b8._8_8_ - dVar25 * dVar10;
      auVar33._8_4_ = SUB84(dVar10,0);
      auVar33._0_8_ = dVar9;
      auVar33._12_4_ = uVar29;
      auVar26._8_4_ = SUB84(dVar38,0);
      auVar26._0_8_ = dVar11;
      auVar26._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      auVar26 = blendpd(auVar33,auVar26,2);
      auVar27._0_8_ = auVar26._0_8_ * dVar25 - auVar31._0_8_ * dVar11;
      auVar27._8_8_ = auVar26._8_8_ * auVar34._8_8_ - auVar31._8_8_ * dVar38;
      auVar26 = blendpd(auVar41,auVar27,2);
      dVar38 = auVar41._8_8_ + auVar41._8_8_;
      dVar39 = auVar27._0_8_ + auVar27._0_8_;
      auVar42._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar42._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar35._8_4_ = SUB84(dVar39,0);
      auVar35._0_8_ = dVar38;
      uVar29 = (undefined4)((ulonglong)dVar39 >> 0x20);
      auVar35._12_4_ = uVar29;
      auVar31._8_4_ = SUB84(dVar39,0);
      auVar31._0_8_ = dVar38;
      auVar31._12_4_ = uVar29;
      auVar33 = blendpd(auVar28,auVar34,2);
      auVar36._0_8_ = auVar35._8_8_ * auVar28._0_8_ - auVar28._8_8_ * dVar38;
      auVar36._8_8_ = auVar42._0_8_ * auVar28._8_8_ - dVar25 * dVar39;
      auVar28._8_4_ = SUB84(auVar36._8_8_,0);
      auVar28._0_8_ = auVar36._0_8_;
      auVar28._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
      auVar26 = blendpd(auVar31,auVar42,2);
      auVar32._0_8_ = auVar26._0_8_ * dVar25 - auVar33._0_8_ * auVar42._0_8_;
      auVar32._8_8_ = auVar26._8_8_ * auVar34._8_8_ - auVar33._8_8_ * auVar42._8_8_;
      auVar34._8_4_ = auVar37._8_4_;
      auVar34._0_8_ = dVar12;
      auVar34._12_4_ = auVar37._12_4_;
      auVar37 = blendpd(auVar36,auVar32,2);
      local_208 = dVar12 * dVar38 + dVar9 + auVar28._8_8_ + (param_3->Translation).XY.m128d_f64[0];
      dStack_200 = auVar34._8_8_ * dVar39 + dVar10 + auVar32._0_8_ +
                   (param_3->Translation).XY.m128d_f64[1];
      dVar25 = dVar12 * auVar42._0_8_ + dVar11 + auVar37._0_8_ +
               (param_3->Translation).ZW.m128d_f64[0];
      dVar9 = param_4->MinZ;
      if (dVar25 <= param_4->MinZ) {
        dVar9 = dVar25;
      }
      param_4->MinZ = dVar9;
      dVar9 = param_4->MaxZ;
      if (param_4->MaxZ <= dVar25) {
        dVar9 = dVar25;
      }
      param_4->MaxZ = dVar9;
      if (FVar19 != FVar2) {
        auVar13._4_8_ = auVar37._8_8_;
        auVar13._0_4_ = (int)((ulonglong)local_208 >> 0x20);
        auVar37._0_8_ = auVar13._0_8_ << 0x20;
        auVar37._8_4_ = SUB84(dStack_200,0);
        auVar37._12_4_ = (int)((ulonglong)dStack_200 >> 0x20);
        do {
          dVar25 = auVar37._8_8_ - *(double *)((longlong)FVar19 + 8);
          if ((local_208 - *(double *)FVar19) * (local_208 - *(double *)FVar19) + dVar25 * dVar25 +
              *(double *)((longlong)FVar19 + 0x10) * *(double *)((longlong)FVar19 + 0x10) < dVar5)
          goto LAB_1473935b7;
          FVar19 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar19 + 0x18);
        } while (FVar19 != FVar2);
      }
      FVar18 = (ForElementType<UE::Math::TVector<double>_>)&local_168;
      if (FVar23 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar18 = FVar23;
      }
      if ((ulonglong)FVar18 <= &local_208) {
        FVar18 = (ForElementType<UE::Math::TVector<double>_>)&local_168;
        if (FVar23 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar18 = FVar23;
        }
        if ((&local_208 < (double *)((longlong)FVar18 + (longlong)local_168.ArrayMax * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), FVar23 = local_168.AllocatorInstance.SecondaryData,
           uVar15 = local_168.ArrayNum, bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (uVar15 == local_168.ArrayMax) {
        uVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                           (0x818,&local_168.AllocatorInstance,&local_168.ArrayMax);
        FVar23 = local_168.AllocatorInstance.SecondaryData;
      }
      local_168.ArrayNum = uVar15 + 1;
      FVar18 = (ForElementType<UE::Math::TVector<double>_>)&local_168;
      if (FVar23 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar18 = FVar23;
      }
      pdVar3 = (double *)((longlong)FVar18 + (longlong)(int)uVar15 * 0x18);
      *pdVar3 = local_208;
      pdVar3[1] = dStack_200;
      *(undefined8 *)((uchar *)((longlong)FVar18 + 0x10) + (longlong)(int)uVar15 * 0x18) = local_1f8
      ;
      FVar18._4_4_ = 0;
      FVar18._0_4_ = local_168.ArrayNum;
      FVar23 = local_168.AllocatorInstance.SecondaryData;
LAB_1473935b7:
      param_1 = param_1 + 1;
    }
    local_198.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_198.ArrayMax = 8;
    local_198.ArrayNum = 0;
    ConvexHull2D::ComputeConvexHullLegacy<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              (&local_168,&local_198);
    if (2 < local_198.ArrayNum) {
      FVar23 = FVar21;
      if (0 < local_198.ArrayNum) {
        do {
          uVar24 = FVar21._0_4_;
          uVar15 = 0;
          if ((int)uVar24 < local_198.ArrayNum) {
            uVar15 = ~uVar24 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar20 = (ForElementType<int>)&local_198;
          if (local_198.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar20 = local_198.AllocatorInstance.SecondaryData;
          }
          uVar15 = *(uint *)((longlong)FVar23 + (longlong)FVar20);
          uVar16 = 0;
          if ((int)uVar15 < local_168.ArrayNum) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar6 = (param_4->Points).AllocatorInstance.Data;
          FVar21 = (ForElementType<UE::Math::TVector<double>_>)&local_168;
          if (local_168.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Math::TVector<double>_>)0x0) {
            FVar21 = local_168.AllocatorInstance.SecondaryData;
          }
          pFVar4 = (FScriptContainerElement *)((longlong)FVar21 + (longlong)(int)uVar15 * 0x18);
          if (((pFVar6 <= pFVar4) && (pFVar4 < pFVar6 + (longlong)*piVar1 * 0x18)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar17 = (param_4->Points).ArrayNum;
          if (iVar17 == *piVar1) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,(ForAnyElementType *)param_4,piVar1);
          }
          (param_4->Points).ArrayNum = iVar17 + 1;
          dVar5 = *(double *)(pFVar4 + 8);
          pFVar7 = (param_4->Points).AllocatorInstance.Data;
          pFVar6 = pFVar7 + (longlong)iVar17 * 0x18;
          *(double *)pFVar6 = *(double *)pFVar4;
          *(double *)(pFVar6 + 8) = dVar5;
          *(double *)(pFVar7 + (longlong)iVar17 * 0x18 + 0x10) = *(double *)(pFVar4 + 0x10);
          if (param_5->IsValid == '\0') {
            dVar5 = *(double *)(pFVar4 + 8);
            (param_5->Max).field0_0x0._s_0.X = *(double *)pFVar4;
            (param_5->Max).field0_0x0._s_0.Y = dVar5;
            dVar5 = *(double *)(pFVar4 + 0x10);
            (param_5->Max).field0_0x0._s_0.Z = dVar5;
            dVar25 = (param_5->Max).field0_0x0._s_0.X;
            dVar9 = (param_5->Max).field0_0x0._s_0.Y;
            param_5->IsValid = '\x01';
            (param_5->Min).field0_0x0._s_0.X = dVar25;
            (param_5->Min).field0_0x0._s_0.Y = dVar9;
            (param_5->Min).field0_0x0._s_0.Z = dVar5;
          }
          else {
            dVar5 = (param_5->Min).field0_0x0._s_0.X;
            if (*(double *)pFVar4 <= dVar5) {
              dVar5 = *(double *)pFVar4;
            }
            (param_5->Min).field0_0x0._s_0.X = dVar5;
            dVar5 = (param_5->Min).field0_0x0._s_0.Y;
            dVar25 = *(double *)(pFVar4 + 8);
            if (dVar5 <= *(double *)(pFVar4 + 8)) {
              dVar25 = dVar5;
            }
            (param_5->Min).field0_0x0._s_0.Y = dVar25;
            dVar5 = (param_5->Min).field0_0x0._s_0.Z;
            if (*(double *)(pFVar4 + 0x10) <= dVar5) {
              dVar5 = *(double *)(pFVar4 + 0x10);
            }
            (param_5->Min).field0_0x0._s_0.Z = dVar5;
            dVar5 = *(double *)pFVar4;
            uVar29 = SUB84(dVar5,0);
            uVar30 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar25 = *(double *)&(param_5->Max).field0_0x0;
            if (dVar5 <= dVar25) {
              uVar29 = SUB84(dVar25,0);
              uVar30 = (undefined4)((ulonglong)dVar25 >> 0x20);
            }
            (param_5->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar30,uVar29);
            dVar5 = *(double *)((longlong)&(param_5->Max).field0_0x0 + 0x10);
            uVar29 = SUB84(dVar5,0);
            uVar30 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar25 = (param_5->Max).field0_0x0._s_0.Y;
            dVar9 = *(double *)(pFVar4 + 8);
            if (*(double *)(pFVar4 + 8) <= dVar25) {
              dVar9 = dVar25;
            }
            (param_5->Max).field0_0x0._s_0.Y = dVar9;
            dVar25 = *(double *)(pFVar4 + 0x10);
            if (dVar5 <= dVar25) {
              uVar29 = SUB84(dVar25,0);
              uVar30 = (undefined4)((ulonglong)dVar25 >> 0x20);
            }
            (param_5->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar30,uVar29);
          }
          FVar21._0_4_ = uVar24 + 1;
          FVar21._4_4_ = 0;
          FVar23 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar23 + 4);
        } while ((int)FVar21._0_4_ < local_198.ArrayNum);
      }
      (param_5->Min).field0_0x0._s_0.Z = param_4->MinZ;
      (param_5->Max).field0_0x0._s_0.Z = param_4->MaxZ;
    }
    if (local_198.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_198.AllocatorInstance.SecondaryData);
    }
    if (local_168.AllocatorInstance.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0
       ) {
      FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetBox @ 147399a50

void __thiscall FAreaNavModifier::GetBox(FAreaNavModifier *this,FBoxNavAreaData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  
  if (((this->Points).ArrayNum != 2) || ((this->ShapeType).Value != '\x02')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Points.Num() == 2 && ShapeType == ENavigationShapeType::Box",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                       ,0x1b9,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Points).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  dVar3 = *(double *)(pFVar1 + 8);
  (param_1->Origin).field0_0x0._s_0.X = *(double *)pFVar1;
  (param_1->Origin).field0_0x0._s_0.Y = dVar3;
  (param_1->Origin).field0_0x0._s_0.Z = *(double *)(pFVar1 + 0x10);
  if ((this->Points).ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  dVar3 = *(double *)(pFVar1 + 0x20);
  (param_1->Extent).field0_0x0._s_0.X = *(double *)(pFVar1 + 0x18);
  (param_1->Extent).field0_0x0._s_0.Y = dVar3;
  (param_1->Extent).field0_0x0._s_0.Z = *(double *)(pFVar1 + 0x28);
  return;
}

// GetConvex @ 14739a8b0

void __thiscall FAreaNavModifier::GetConvex(FAreaNavModifier *this,FConvexNavAreaData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  
  if ((this->ShapeType).Value != '\x03') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShapeType == ENavigationShapeType::Convex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                       ,0x1c0,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(&param_1->Points,&this->Points);
  if ((param_1->Points).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (param_1->Points).ArrayNum;
  iVar7 = iVar2 + -1;
  pFVar1 = (param_1->Points).AllocatorInstance.Data + (longlong)iVar2 * 0x18 + -0x18;
  dVar4 = *(double *)pFVar1;
  dVar5 = *(double *)(pFVar1 + 8);
  (param_1->Points).ArrayNum = iVar7;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,(ForAnyElementType *)param_1,iVar7,&(param_1->Points).ArrayMax);
  param_1->MinZ = dVar4;
  param_1->MaxZ = dVar5;
  return;
}

// GetCylinder @ 14739aae0

void __thiscall FAreaNavModifier::GetCylinder(FAreaNavModifier *this,FCylinderNavAreaData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  if ((((this->Points).ArrayNum != 2) || ((this->ShapeType).Value != '\x01')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Points.Num() == 2 && ShapeType == ENavigationShapeType::Cylinder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                         ,0x1b1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Points).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  dVar5 = *(double *)(pFVar1 + 8);
  (param_1->Origin).field0_0x0._s_0.X = *(double *)pFVar1;
  (param_1->Origin).field0_0x0._s_0.Y = dVar5;
  (param_1->Origin).field0_0x0._s_0.Z = *(double *)(pFVar1 + 0x10);
  if (((this->Points).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  dVar3 = __real_3fb0000000000000;
  dVar5 = *(double *)((this->Points).AllocatorInstance.Data + 0x18);
  fVar8 = (float)dVar5;
  dVar5 = (double)fVar8 - dVar5;
  if ((__real_3fb0000000000000 <
       (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  param_1->Radius = fVar8;
  if (((this->Points).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  dVar5 = *(double *)((this->Points).AllocatorInstance.Data + 0x28);
  fVar8 = (float)dVar5;
  dVar5 = (double)fVar8 - dVar5;
  if ((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar7,SUB84(dVar5,0) & uVar6)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FloatFitsIn<OutType>(In, Precision)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xc0,L"Loss of data caused by narrowing conversion"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_1->Height = fVar8;
  return;
}

// GetPerInstanceConvex @ 14739ffc0

void __thiscall
FAreaNavModifier::GetPerInstanceConvex
          (FAreaNavModifier *this,TTransform<double> *param_1,FConvexNavAreaData *param_2)

{
  code *pcVar1;
  bool bVar2;
  TBox<double> local_48;
  
  if ((this->ShapeType).Value != '\x04') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7179430412454724041>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                       ,0x1c9,"ShapeType == ENavigationShapeType::InstancedConvex");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.IsValid = '\0';
  FillConvexNavAreaData
            ((TVector<double> *)(this->Points).AllocatorInstance.Data,(this->Points).ArrayNum,
             param_1,param_2,&local_48);
  return;
}

// Init @ 1473a4760

void __thiscall FAreaNavModifier::Init(FAreaNavModifier *this,TSubclassOf<UNavAreaBase> param_1)

{
  undefined1 *puVar1;
  UObject *local_48 [7];
  undefined1 local_10;
  undefined4 uStack_f;
  undefined2 uStack_b;
  undefined1 uStack_9;
  
  this->bExpandTopByCellHeight = '\0';
  this->bIncludeAgentHeight = '\0';
  (this->ApplyMode).Value = '\0';
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  this->Cost = 0.0;
  this->FixedCost = 0.0;
  local_10 = 0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  uStack_f = 0;
  uStack_b = 0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  uStack_9 = 0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  local_48[0] = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48[0]);
  }
  SetAreaClass(this,(TSubclassOf<UNavAreaBase>)local_48);
  return;
}

// InitializeConvex @ 1473a4ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAreaNavModifier::InitializeConvex
          (FAreaNavModifier *this,TNavStatArray<UE::Math::TVector<double>_> *param_1,int param_2,
          int param_3,TTransform<double> *param_4,TSubclassOf<UNavAreaBase> param_5)

{
  int iVar1;
  void *_Src;
  FName FVar2;
  code *pcVar3;
  long64 lVar4;
  long64 lVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar9;
  UObject *local_res10;
  FName local_58;
  FName local_50;
  FStatMessage local_48;
  ForAnyElementType local_38;
  int local_28;
  int local_24 [3];
  
  if (((((param_2 < 0) || (iVar1 = *(int *)&param_1->field_0x10, iVar1 <= param_2)) ||
       (param_3 + -1 < 0)) || (iVar1 <= param_3 + -1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPoints.IsValidIndex(FirstIndex) && InPoints.IsValidIndex(LastIndex-1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                         ,0x18c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res10 = *(UObject **)param_5.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  Init(this,(TSubclassOf<UNavAreaBase>)&local_res10);
  local_28 = *(int *)&param_1->field_0x10;
  lVar9 = (longlong)local_28;
  _Src = *(void **)param_1;
  local_38._padding_ = 0;
  local_38.AllocatedSize._0_1_ = '\0';
  local_38.AllocatedSize._1_1_ = '\0';
  local_38.AllocatedSize._2_1_ = '\0';
  local_38.AllocatedSize._3_1_ = '\0';
  local_38.AllocatedSize._4_1_ = '\0';
  local_38.AllocatedSize._5_1_ = '\0';
  local_38.AllocatedSize._6_1_ = '\0';
  local_38.AllocatedSize._7_1_ = '\0';
  if (local_28 == 0) {
    local_24[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,local_28,0,&local_38,local_28,local_24);
    memcpy((void *)local_38._padding_,_Src,lVar9 * 0x18);
  }
  SetConvex(this,(TVector<double> *)local_38._padding_,param_2,param_3,Unreal,param_4);
  lVar4 = local_38.AllocatedSize;
  if ((uchar  [8])local_38.AllocatedSize != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_50,"STAT_NavigationMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar7,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar8;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      lVar5 = local_38.AllocatedSize;
      local_48.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_38.AllocatedSize._0_1_ = (undefined1)lVar4;
      local_38.AllocatedSize._1_1_ = SUB81(lVar4,1);
      local_38.AllocatedSize._2_1_ = SUB81(lVar4,2);
      local_38.AllocatedSize._3_1_ = SUB81(lVar4,3);
      local_38.AllocatedSize._4_1_ = SUB81(lVar4,4);
      local_38.AllocatedSize._5_1_ = SUB81(lVar4,5);
      local_38.AllocatedSize._6_1_ = SUB81(lVar4,6);
      local_38.AllocatedSize._7_1_ = SUB81(lVar4,7);
      local_48.StatData.Pad[0] = (undefined1)local_38.AllocatedSize;
      local_48.StatData.Pad[1] = local_38.AllocatedSize._1_1_;
      local_48.StatData.Pad[2] = local_38.AllocatedSize._2_1_;
      local_48.StatData.Pad[3] = local_38.AllocatedSize._3_1_;
      local_48.StatData.Pad[4] = local_38.AllocatedSize._4_1_;
      local_48.StatData.Pad[5] = local_38.AllocatedSize._5_1_;
      local_48.StatData.Pad[6] = local_38.AllocatedSize._6_1_;
      local_48.StatData.Pad[7] = local_38.AllocatedSize._7_1_;
      local_58 = FVar2;
      local_48.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      local_38.AllocatedSize = lVar5;
      FThreadStats::AddStatMessage(this_00,&local_48);
      FStatsTrace::Add(&local_58,-lVar4);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((TVector<double> *)local_38._padding_ != (TVector<double> *)0x0) {
    FMemory::Free((void *)local_38._padding_);
  }
  return;
}

// InitializePerInstanceConvex @ 1473a5920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAreaNavModifier::InitializePerInstanceConvex
          (FAreaNavModifier *this,TNavStatArray<UE::Math::TVector<double>_> *param_1,int param_2,
          int param_3,TSubclassOf<UNavAreaBase> param_4)

{
  int iVar1;
  void *_Src;
  FName FVar2;
  code *pcVar3;
  long64 lVar4;
  long64 lVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar9;
  UObject *local_res10;
  FName local_58;
  FName local_50;
  FStatMessage local_48;
  ForAnyElementType local_38;
  int local_28;
  int local_24 [3];
  
  if (((((param_2 < 0) || (iVar1 = *(int *)&param_1->field_0x10, iVar1 <= param_2)) ||
       (param_3 + -1 < 0)) || (iVar1 <= param_3 + -1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPoints.IsValidIndex(FirstIndex) && InPoints.IsValidIndex(LastIndex - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationModifier.cpp"
                         ,0x194,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res10 = *(UObject **)param_4.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  Init(this,(TSubclassOf<UNavAreaBase>)&local_res10);
  local_28 = *(int *)&param_1->field_0x10;
  lVar9 = (longlong)local_28;
  _Src = *(void **)param_1;
  local_38._padding_ = 0;
  local_38.AllocatedSize._0_1_ = '\0';
  local_38.AllocatedSize._1_1_ = '\0';
  local_38.AllocatedSize._2_1_ = '\0';
  local_38.AllocatedSize._3_1_ = '\0';
  local_38.AllocatedSize._4_1_ = '\0';
  local_38.AllocatedSize._5_1_ = '\0';
  local_38.AllocatedSize._6_1_ = '\0';
  local_38.AllocatedSize._7_1_ = '\0';
  if (local_28 == 0) {
    local_24[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,local_28,0,&local_38,local_28,local_24);
    memcpy((void *)local_38._padding_,_Src,lVar9 * 0x18);
  }
  SetPerInstanceConvex(this,(TVector<double> *)local_38._padding_,param_2,param_3);
  lVar4 = local_38.AllocatedSize;
  if ((uchar  [8])local_38.AllocatedSize != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_50,"STAT_NavigationMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar7,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar8;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      lVar5 = local_38.AllocatedSize;
      local_48.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_38.AllocatedSize._0_1_ = (undefined1)lVar4;
      local_38.AllocatedSize._1_1_ = SUB81(lVar4,1);
      local_38.AllocatedSize._2_1_ = SUB81(lVar4,2);
      local_38.AllocatedSize._3_1_ = SUB81(lVar4,3);
      local_38.AllocatedSize._4_1_ = SUB81(lVar4,4);
      local_38.AllocatedSize._5_1_ = SUB81(lVar4,5);
      local_38.AllocatedSize._6_1_ = SUB81(lVar4,6);
      local_38.AllocatedSize._7_1_ = SUB81(lVar4,7);
      local_48.StatData.Pad[0] = (undefined1)local_38.AllocatedSize;
      local_48.StatData.Pad[1] = local_38.AllocatedSize._1_1_;
      local_48.StatData.Pad[2] = local_38.AllocatedSize._2_1_;
      local_48.StatData.Pad[3] = local_38.AllocatedSize._3_1_;
      local_48.StatData.Pad[4] = local_38.AllocatedSize._4_1_;
      local_48.StatData.Pad[5] = local_38.AllocatedSize._5_1_;
      local_48.StatData.Pad[6] = local_38.AllocatedSize._6_1_;
      local_48.StatData.Pad[7] = local_38.AllocatedSize._7_1_;
      local_58 = FVar2;
      local_48.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      local_38.AllocatedSize = lVar5;
      FThreadStats::AddStatMessage(this_00,&local_48);
      FStatsTrace::Add(&local_58,-lVar4);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((TVector<double> *)local_38._padding_ != (TVector<double> *)0x0) {
    FMemory::Free((void *)local_38._padding_);
  }
  return;
}

// SetApplyMode @ 1473b5920

void __thiscall FAreaNavModifier::SetApplyMode(FAreaNavModifier *this,Type param_1)

{
  byte bVar1;
  
  (this->ApplyMode).Value = (uchar)param_1;
  bVar1 = 4;
  if (1 < param_1 - ApplyInLowPass) {
    bVar1 = 0;
  }
  this->bIsLowAreaModifier = '\0';
  this->field_0x6a = this->field_0x6a | bVar1;
  return;
}

// SetAreaClass @ 1473b5950

void __thiscall
FAreaNavModifier::SetAreaClass(FAreaNavModifier *this,TSubclassOf<UNavAreaBase> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UObject *local_res8;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
LAB_1473b59a0:
    local_res8 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UNavAreaBase_NoRegister();
    if (pUVar4 == (UClass *)0x0) goto LAB_1473b59a0;
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1473b59a0;
    local_res8 = *(UObject **)param_1.Class.field0_0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->AreaClassOb).WeakPtr,(FObjectPtr)&local_res8);
  pUVar4 = (UClass *)FWeakObjectPtr::Get(&(this->AreaClassOb).WeakPtr);
  pUVar5 = (UClass *)FWeakObjectPtr::Get(&(this->ReplaceAreaClassOb).WeakPtr);
  if (pUVar4 != (UClass *)0x0) {
    bVar3 = IsMetaAreaClass(pUVar4);
    if (bVar3) goto LAB_1473b5a02;
  }
  if (pUVar5 != (UClass *)0x0) {
    bVar3 = IsMetaAreaClass(pUVar5);
    if (bVar3) {
LAB_1473b5a02:
      this->_padding_ = this->_padding_ & 0xfffffffe;
      this->_padding_ = this->_padding_ | 1;
      return;
    }
  }
  this->_padding_ = this->_padding_ & 0xfffffffe;
  return;
}

// SetAreaClassToReplace @ 1473b5aa0

void __thiscall
FAreaNavModifier::SetAreaClassToReplace(FAreaNavModifier *this,TSubclassOf<UNavAreaBase> param_1)

{
  uchar uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  UClass *pUVar6;
  UClass *this_00;
  UNavAreaBase *pUVar7;
  UObject *pUVar8;
  uchar uVar9;
  uint uVar10;
  UObject *local_res8;
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  pUVar8 = (UObject *)0x0;
  if ((lVar3 != 0) &&
     (pUVar6 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar8 = *(UObject **)param_1.Class.field0_0x0;
    }
  }
  bVar5 = 0;
  local_res8 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&(this->ReplaceAreaClassOb).WeakPtr,(FObjectPtr)&local_res8);
  pUVar6 = (UClass *)FWeakObjectPtr::Get(&(this->AreaClassOb).WeakPtr);
  this_00 = (UClass *)FWeakObjectPtr::Get(&(this->ReplaceAreaClassOb).WeakPtr);
  uVar10 = 0;
  if (((pUVar6 != (UClass *)0x0) && (bVar4 = IsMetaAreaClass(pUVar6), bVar4)) ||
     ((this_00 != (UClass *)0x0 && (bVar4 = IsMetaAreaClass(this_00), bVar4)))) {
    uVar10 = 1;
  }
  this->_padding_ = this->_padding_ & 0xfffffffe;
  this->_padding_ = this->_padding_ | uVar10;
  if (this_00 == (UClass *)0x0) {
    uVar1 = (this->ApplyMode).Value;
    if ((uVar1 - 1 & 0xfd) == 0) {
      this->bIsLowAreaModifier = '\0';
      if (uVar1 == '\x03') {
        bVar5 = 4;
      }
      this->field_0x6a = this->field_0x6a | bVar5;
      uVar9 = '\0';
      if (uVar1 == '\x03') {
        uVar9 = '\x02';
      }
      (this->ApplyMode).Value = uVar9;
    }
  }
  else {
    pUVar7 = UClass::GetDefaultObject<UNavAreaBase>(this_00);
    bVar5 = (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7);
    this->field_0x6a = this->field_0x6a ^ (bVar5 << 2 ^ this->field_0x6a) & 4;
    (this->ApplyMode).Value = (bVar5 & 1) * '\x02' | 1;
  }
  return;
}

// SetBox @ 1473b5e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAreaNavModifier::SetBox(FAreaNavModifier *this,TBox<double> *param_1,TTransform<double> *param_2)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  ForAnyElementType local_198;
  int local_190;
  int iStack_18c;
  TVector<double>_u_0 local_188;
  TRotator<double> local_168;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined4 uStack_11f;
  undefined2 uStack_11b;
  undefined1 uStack_119;
  TQuat<double> local_118;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [16];
  
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  dVar15 = (param_1->Max).field0_0x0._s_0.Y;
  dVar16 = (param_1->Max).field0_0x0._s_0.Z;
  dVar24 = ((param_1->Min).field0_0x0._s_0.Z + dVar16) * __real_3fe0000000000000;
  local_190 = 0;
  iStack_18c = 0;
  dVar17 = ((param_1->Min).field0_0x0._s_0.X + dVar1) * __real_3fe0000000000000;
  uVar13 = 0;
  local_198.Data = (FScriptContainerElement *)0x0;
  dVar1 = (dVar1 - (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar8 = ((param_1->Min).field0_0x0._s_0.Y + dVar15) * __real_3fe0000000000000;
  dVar15 = (dVar15 - (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  dVar16 = (dVar16 - (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  do {
    auVar23 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    dVar9 = (param_2->Rotation).ZW.m128d_f64[1];
    local_f8 = (double)(int)((uVar13 >> 2 & 1) * 2 + -1) * dVar1 + dVar17;
    dStack_f0 = (double)(int)((uVar13 >> 1 & 1) * 2 + -1) * dVar15 + dVar8;
    local_e8 = (double)(int)((uVar13 & 1) * 2 + -1) * dVar16 + dVar24;
    auVar28 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar20 = auVar28._0_8_;
    dVar33 = (param_2->Scale3D).XY.m128d_f64[0] * local_f8;
    dVar34 = (param_2->Scale3D).XY.m128d_f64[1] * dStack_f0;
    local_d8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    dVar6 = local_e8 * (param_2->Scale3D).ZW.m128d_f64[0];
    dVar7 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar30._8_4_ = SUB84(dVar34,0);
    auVar30._0_8_ = dVar33;
    uVar29 = (undefined4)((ulonglong)dVar34 >> 0x20);
    auVar30._12_4_ = uVar29;
    auVar21 = blendpd(local_d8,auVar28,2);
    auVar31._0_8_ = auVar30._8_8_ * local_d8._0_8_ - local_d8._8_8_ * dVar33;
    auVar31._8_8_ = dVar6 * local_d8._8_8_ - dVar20 * dVar34;
    auVar25._8_4_ = SUB84(dVar34,0);
    auVar25._0_8_ = dVar33;
    auVar25._12_4_ = uVar29;
    auVar18._8_4_ = SUB84(dVar7,0);
    auVar18._0_8_ = dVar6;
    auVar18._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar18 = blendpd(auVar25,auVar18,2);
    auVar19._0_8_ = auVar18._0_8_ * dVar20 - auVar21._0_8_ * dVar6;
    auVar19._8_8_ = auVar18._8_8_ * auVar28._8_8_ - auVar21._8_8_ * dVar7;
    auVar18 = blendpd(auVar31,auVar19,2);
    dVar7 = auVar31._8_8_ + auVar31._8_8_;
    dVar4 = auVar19._0_8_ + auVar19._0_8_;
    uVar29 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar32._0_8_ = auVar18._0_8_ + auVar18._0_8_;
    auVar32._8_8_ = auVar18._8_8_ + auVar18._8_8_;
    auVar26._8_4_ = SUB84(dVar4,0);
    auVar26._0_8_ = dVar7;
    auVar26._12_4_ = uVar29;
    auVar22._8_4_ = SUB84(dVar4,0);
    auVar22._0_8_ = dVar7;
    auVar22._12_4_ = uVar29;
    auVar18 = blendpd(auVar22,auVar32,2);
    auVar27._0_8_ = auVar26._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar7;
    auVar27._8_8_ = auVar32._0_8_ * auVar23._8_8_ - dVar20 * dVar4;
    auVar21._8_4_ = SUB84(auVar27._8_8_,0);
    auVar21._0_8_ = auVar27._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
    auVar25 = blendpd(auVar23,auVar28,2);
    auVar23._0_8_ = auVar18._0_8_ * dVar20 - auVar25._0_8_ * auVar32._0_8_;
    auVar23._8_8_ = auVar18._8_8_ * auVar28._8_8_ - auVar25._8_8_ * auVar32._8_8_;
    auVar28 = blendpd(auVar27,auVar23,2);
    dVar4 = dVar4 * dVar9 + dVar34 + auVar23._0_8_ + (param_2->Translation).XY.m128d_f64[1];
    local_188._s_0.Z =
         auVar32._0_8_ * dVar9 + dVar6 + auVar28._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
    local_188._8_4_ = SUB84(dVar4,0);
    local_188._s_0.X =
         dVar7 * dVar9 + dVar33 + auVar21._8_8_ + (param_2->Translation).XY.m128d_f64[0];
    local_188._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    if (((local_198.Data <= &local_188) &&
        (&local_188 < (TVector<double>_u_0 *)(local_198.Data + (longlong)iStack_18c * 0x18))) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_190 == iStack_18c) {
      local_190 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_198,&iStack_18c);
    }
    iVar12 = local_190 + 1;
    uVar13 = uVar13 + 1;
    *(double *)(local_198.Data + (longlong)local_190 * 0x18) = local_188._s_0.X;
    *(double *)(local_198.Data + (longlong)local_190 * 0x18 + 8) = local_188._s_0.Y;
    *(double *)(local_198.Data + (longlong)local_190 * 0x18 + 0x10) = local_188._s_0.Z;
    local_190 = iVar12;
  } while ((int)uVar13 < 8);
  local_118.X = (param_2->Rotation).XY.m128d_f64[0];
  local_118.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_118.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_118.W = (param_2->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_118,&local_168);
  dVar1 = __real_4056800000000000;
  dVar15 = FGenericPlatformMath::Fmod
                     ((double)CONCAT44((uint)((ulonglong)local_168.Pitch >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_168.Pitch,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff),
                      __real_4056800000000000);
  dVar16 = FGenericPlatformMath::Fmod
                     ((double)CONCAT44((uint)((ulonglong)local_168.Yaw >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_168.Yaw,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff),dVar1);
  dVar17 = FGenericPlatformMath::Fmod
                     ((double)CONCAT44((uint)((ulonglong)local_168.Roll >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_168.Roll,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff),dVar1);
  dVar1 = __real_3fe0000000000000;
  if ((((__real_3ff0000000000000 <= dVar15) && (dVar15 <= __real_4056400000000000)) ||
      ((__real_3ff0000000000000 <= dVar16 && (dVar16 <= __real_4056400000000000)))) ||
     ((__real_3ff0000000000000 <= dVar17 && (dVar17 <= __real_4056400000000000)))) {
    SetConvex(this,(TVector<double> *)local_198.Data,0,local_190,Unreal,
              &UE::Math::TTransform<double>::Identity);
  }
  else {
    local_120 = 0;
    uStack_11f = 0;
    (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
    (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
    uStack_11b = 0;
    uVar13 = 0;
    uStack_119 = 0;
    (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
    (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
    (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
    (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
    local_130 = 0;
    uStack_128 = 0;
    (this->Bounds).IsValid = '\0';
    (this->Bounds).Pad[0] = '\0';
    (this->Bounds).Pad[1] = '\0';
    (this->Bounds).Pad[2] = '\0';
    (this->Bounds).Pad[3] = '\0';
    (this->Bounds).Pad[4] = '\0';
    (this->Bounds).Pad[5] = '\0';
    (this->Bounds).Pad[6] = '\0';
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    if (0 < local_190) {
      lVar14 = 0;
      iVar12 = local_190;
      do {
        uVar11 = 0;
        if ((int)uVar13 < iVar12) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar12 = local_190, bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this->Bounds).IsValid == '\0') {
          dVar15 = *(double *)(local_198.Data + lVar14 + 8);
          (this->Bounds).Max.field0_0x0._s_0.X = *(double *)(local_198.Data + lVar14);
          (this->Bounds).Max.field0_0x0._s_0.Y = dVar15;
          dVar15 = *(double *)(local_198.Data + lVar14 + 0x10);
          (this->Bounds).Max.field0_0x0._s_0.Z = dVar15;
          dVar16 = (this->Bounds).Max.field0_0x0._s_0.X;
          dVar17 = (this->Bounds).Max.field0_0x0._s_0.Y;
          (this->Bounds).IsValid = '\x01';
          (this->Bounds).Min.field0_0x0._s_0.X = dVar16;
          (this->Bounds).Min.field0_0x0._s_0.Y = dVar17;
          (this->Bounds).Min.field0_0x0._s_0.Z = dVar15;
        }
        else {
          dVar15 = (this->Bounds).Min.field0_0x0._s_0.X;
          if (*(double *)(local_198.Data + lVar14) <= dVar15) {
            dVar15 = *(double *)(local_198.Data + lVar14);
          }
          (this->Bounds).Min.field0_0x0._s_0.X = dVar15;
          dVar15 = (this->Bounds).Min.field0_0x0._s_0.Y;
          dVar16 = *(double *)(local_198.Data + lVar14 + 8);
          if (dVar15 <= *(double *)(local_198.Data + lVar14 + 8)) {
            dVar16 = dVar15;
          }
          (this->Bounds).Min.field0_0x0._s_0.Y = dVar16;
          dVar15 = (this->Bounds).Min.field0_0x0._s_0.Z;
          if (*(double *)(local_198.Data + lVar14 + 0x10) <= dVar15) {
            dVar15 = *(double *)(local_198.Data + lVar14 + 0x10);
          }
          (this->Bounds).Min.field0_0x0._s_0.Z = dVar15;
          dVar15 = (this->Bounds).Max.field0_0x0._s_0.X;
          dVar16 = *(double *)(local_198.Data + lVar14);
          if (*(double *)(local_198.Data + lVar14) <= dVar15) {
            dVar16 = dVar15;
          }
          (this->Bounds).Max.field0_0x0._s_0.X = dVar16;
          dVar17 = (this->Bounds).Max.field0_0x0._s_0.Z;
          dVar15 = (this->Bounds).Max.field0_0x0._s_0.Y;
          dVar16 = *(double *)(local_198.Data + lVar14 + 8);
          if (*(double *)(local_198.Data + lVar14 + 8) <= dVar15) {
            dVar16 = dVar15;
          }
          (this->Bounds).Max.field0_0x0._s_0.Y = dVar16;
          if (dVar17 <= *(double *)(local_198.Data + lVar14 + 0x10)) {
            dVar17 = *(double *)(local_198.Data + lVar14 + 0x10);
          }
          (this->Bounds).Max.field0_0x0._s_0.Z = dVar17;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 0x18;
      } while ((int)uVar13 < iVar12);
    }
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->Points,2,Default);
    dVar24 = _UNK_150689678;
    dVar7 = ___xmm_3fe00000000000003fe0000000000000;
    dVar15 = (this->Bounds).Min.field0_0x0._s_0.X;
    dVar16 = (this->Bounds).Max.field0_0x0._s_0.X;
    dVar17 = ((this->Bounds).Min.field0_0x0._s_0.Y + (this->Bounds).Max.field0_0x0._s_0.Y) *
             ___xmm_3fe00000000000003fe0000000000000;
    dVar8 = ((this->Bounds).Min.field0_0x0._s_0.Z + (this->Bounds).Max.field0_0x0._s_0.Z) *
            _UNK_150689678;
    if (((this->Points).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    *(double *)pFVar2 = (dVar15 + dVar16) * dVar1;
    auVar28._8_4_ = SUB84(dVar8,0);
    auVar28._0_8_ = dVar17;
    auVar28._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])(pFVar2 + 8) = auVar28;
    dVar15 = (this->Bounds).Max.field0_0x0._s_0.X;
    dVar17 = (this->Bounds).Max.field0_0x0._s_0.Y;
    dVar8 = (this->Bounds).Min.field0_0x0._s_0.Y;
    dVar16 = (this->Bounds).Min.field0_0x0._s_0.X;
    dVar24 = ((this->Bounds).Max.field0_0x0._s_0.Z - (this->Bounds).Min.field0_0x0._s_0.Z) * dVar24;
    if (((this->Points).ArrayNum < 2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    *(double *)(pFVar2 + 0x18) = (dVar15 - dVar16) * dVar1;
    auVar5._8_4_ = SUB84(dVar24,0);
    auVar5._0_8_ = (dVar17 - dVar8) * dVar7;
    auVar5._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    *(undefined1 (*) [16])(pFVar2 + 0x20) = auVar5;
    (this->ShapeType).Value = '\x02';
  }
  if ((TVector<double>_u_0 *)local_198.Data != (TVector<double>_u_0 *)0x0) {
    FMemory::Free(local_198.Data);
  }
  return;
}

// SetConvex @ 1473b6510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAreaNavModifier::SetConvex
          (FAreaNavModifier *this,TVector<double> *param_1,int param_2,int param_3,Type param_4,
          TTransform<double> *param_5)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uchar uVar7;
  int iVar8;
  TTransform<double> *pTVar9;
  longlong lVar10;
  undefined1 auStackY_138 [32];
  FConvexNavAreaData local_e8;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pTVar9 = FNavigationSystem::FCoordTransforms::Get(&CoordTypeTransforms,param_4,Unreal);
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_a8,param_5,pTVar9);
  local_e8.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Points.ArrayNum = 0;
  local_e8.Points.ArrayMax = 0;
  FillConvexNavAreaData(param_1 + param_2,param_3 - param_2,&local_a8,&local_e8,&this->Bounds);
  if (local_e8.Points.ArrayNum < 1) {
    uVar7 = '\0';
  }
  else {
    pTVar1 = &this->Points;
    if ((FConvexNavAreaData *)pTVar1 == &local_e8) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar10 = (longlong)local_e8.Points.ArrayNum;
    if (local_e8.Points.ArrayNum != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,local_e8.Points.ArrayNum,&pTVar1->AllocatorInstance,
                         &(this->Points).ArrayNum,&(this->Points).ArrayMax);
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x18,
             local_e8.Points.AllocatorInstance.Data,lVar10 * 0x18);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    local_c8 = local_e8.MinZ;
    dStack_c0 = local_e8.MaxZ;
    local_b8 = 0;
    if ((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
       ((FScriptContainerElement *)&local_c8 < pFVar3 + (longlong)(this->Points).ArrayMax * 0x18)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->Points).ArrayNum;
    piVar2 = &(this->Points).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Points).ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
    *(double *)pFVar3 = local_c8;
    *(double *)(pFVar3 + 8) = dStack_c0;
    *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_b8;
    uVar7 = '\x03';
  }
  (this->ShapeType).Value = uVar7;
  if (local_e8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Points.AllocatorInstance.Data);
  }
  return;
}

// SetPerInstanceConvex @ 1473b7a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAreaNavModifier::SetPerInstanceConvex
          (FAreaNavModifier *this,TVector<double> *param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int *piVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_d8 [32];
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 uStack_57;
  undefined2 uStack_53;
  undefined1 uStack_51;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  uStack_57 = 0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  uStack_53 = 0;
  uStack_51 = 0;
  (this->Bounds).IsValid = '\0';
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar7 = __real_3e45798ee2308c3a;
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  lVar12 = (longlong)param_2;
  if (lVar12 < param_3) {
    pFVar15 = (FScriptContainerElement *)(param_1 + lVar12);
    lVar12 = param_3 - lVar12;
    do {
      pFVar3 = (this->Points).AllocatorInstance.Data;
      lVar16 = (longlong)(this->Points).ArrayNum;
      if (pFVar3 != pFVar3 + lVar16 * 0x18) {
        pFVar13 = pFVar3;
        do {
          dVar5 = *(double *)&pFVar15->field_0x0 - *(double *)&pFVar13->field_0x0;
          dVar5 = (*(double *)(pFVar15 + 8) - *(double *)(pFVar13 + 8)) *
                  (*(double *)(pFVar15 + 8) - *(double *)(pFVar13 + 8)) + dVar5 * dVar5 +
                  (*(double *)(pFVar15 + 0x10) - *(double *)(pFVar13 + 0x10)) *
                  (*(double *)(pFVar15 + 0x10) - *(double *)(pFVar13 + 0x10));
          uVar21 = SUB84(dVar5,0) & uVar8;
          uVar22 = (uint)((ulonglong)dVar5 >> 0x20) & uVar9;
          if ((double)CONCAT44(uVar22,uVar21) < dVar7 || (double)CONCAT44(uVar22,uVar21) == dVar7)
          goto LAB_1473b7c8f;
          pFVar13 = pFVar13 + 0x18;
        } while (pFVar13 != pFVar3 + lVar16 * 0x18);
      }
      piVar14 = &(this->Points).ArrayMax;
      if ((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (longlong)*piVar14 * 0x18)) {
        local_98 = 0x18;
        local_b8 = pFVar15;
        local_b0 = pFVar3;
        local_a8 = (longlong)*piVar14;
        local_a0 = lVar16;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar11 = (this->Points).ArrayNum;
      if (iVar11 == *piVar14) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->Points).AllocatorInstance,piVar14);
      }
      (this->Points).ArrayNum = iVar11 + 1;
      uVar6 = *(undefined8 *)(pFVar15 + 8);
      pFVar13 = (this->Points).AllocatorInstance.Data;
      pFVar3 = pFVar13 + (longlong)iVar11 * 0x18;
      *(undefined8 *)pFVar3 = *(undefined8 *)&pFVar15->field_0x0;
      *(undefined8 *)(pFVar3 + 8) = uVar6;
      *(undefined8 *)(pFVar13 + (longlong)iVar11 * 0x18 + 0x10) = *(undefined8 *)(pFVar15 + 0x10);
      if ((this->Bounds).IsValid == '\0') {
        dVar5 = *(double *)(pFVar15 + 8);
        (this->Bounds).Max.field0_0x0._s_0.X = *(double *)&pFVar15->field_0x0;
        (this->Bounds).Max.field0_0x0._s_0.Y = dVar5;
        dVar5 = *(double *)(pFVar15 + 0x10);
        (this->Bounds).Max.field0_0x0._s_0.Z = dVar5;
        dVar1 = (this->Bounds).Max.field0_0x0._s_0.X;
        dVar2 = (this->Bounds).Max.field0_0x0._s_0.Y;
        (this->Bounds).IsValid = '\x01';
        (this->Bounds).Min.field0_0x0._s_0.X = dVar1;
        (this->Bounds).Min.field0_0x0._s_0.Y = dVar2;
        (this->Bounds).Min.field0_0x0._s_0.Z = dVar5;
      }
      else {
        dVar5 = *(double *)&(this->Bounds).Min.field0_0x0;
        uVar17 = SUB84(dVar5,0);
        uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar1 = *(double *)&pFVar15->field_0x0;
        if (dVar1 <= dVar5) {
          uVar17 = SUB84(dVar1,0);
          uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        dVar5 = *(double *)&(this->Bounds).Max.field0_0x0;
        uVar19 = SUB84(dVar5,0);
        uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
        (this->Bounds).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar18,uVar17);
        dVar1 = *(double *)((longlong)&(this->Bounds).Min.field0_0x0 + 8);
        uVar17 = SUB84(dVar1,0);
        uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar2 = *(double *)(pFVar15 + 8);
        if (dVar2 <= dVar1) {
          uVar17 = SUB84(dVar2,0);
          uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (this->Bounds).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar18,uVar17);
        dVar1 = *(double *)((longlong)&(this->Bounds).Min.field0_0x0 + 0x10);
        uVar17 = SUB84(dVar1,0);
        uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar2 = *(double *)(pFVar15 + 0x10);
        if (dVar2 <= dVar1) {
          uVar17 = SUB84(dVar2,0);
          uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        (this->Bounds).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar17);
        dVar1 = *(double *)&pFVar15->field_0x0;
        if (dVar5 <= dVar1) {
          uVar19 = SUB84(dVar1,0);
          uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        dVar5 = *(double *)((longlong)&(this->Bounds).Max.field0_0x0 + 8);
        uVar17 = SUB84(dVar5,0);
        uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
        (this->Bounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar20,uVar19);
        dVar1 = *(double *)(pFVar15 + 8);
        if (dVar5 <= dVar1) {
          uVar17 = SUB84(dVar1,0);
          uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        (this->Bounds).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar18,uVar17);
        dVar5 = *(double *)(pFVar15 + 0x10);
        uVar17 = SUB84(dVar5,0);
        uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar1 = *(double *)((longlong)&(this->Bounds).Max.field0_0x0 + 0x10);
        if (dVar5 <= dVar1) {
          uVar17 = SUB84(dVar1,0);
          uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        (this->Bounds).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar17);
      }
LAB_1473b7c8f:
      pFVar15 = pFVar15 + 0x18;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  (this->ShapeType).Value = '\x04';
  return;
}

