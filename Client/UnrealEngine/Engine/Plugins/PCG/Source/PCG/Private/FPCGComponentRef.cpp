// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// FPCGComponentRef @ 149ca27a0

FPCGComponentRef * __thiscall
FPCGComponentRef::FPCGComponentRef(FPCGComponentRef *this,FPCGComponentRef *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UPCGComponent *pUVar2;
  double dVar3;
  
  (this->IdShared).Object = (param_1->IdShared).Object;
  pTVar1 = (param_1->IdShared).SharedReferenceCount.ReferenceController;
  (this->IdShared).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar2 = (param_1->Component).field0_0x0.DebugPtr;
  (this->Component).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  dVar3 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar3;
  (this->Bounds).SphereRadius = (param_1->Bounds).SphereRadius;
  return this;
}

// FPCGComponentRef @ 149ca2820

FPCGComponentRef * __thiscall
FPCGComponentRef::FPCGComponentRef
          (FPCGComponentRef *this,UPCGComponent *param_1,
          TSharedRef<FPCGComponentOctreeID,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FPCGComponentRef *pFVar4;
  
  (this->IdShared).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->IdShared).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Component).field0_0x0.DebugPtr = (UPCGComponent *)0x0;
  if (param_1 == (UPCGComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGComponentOctree.cpp"
                       ,9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGComponentRef *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Component).field0_0x0.DebugPtr = param_1;
  UpdateBounds(this);
  return this;
}

// UpdateBounds @ 149ce1ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPCGComponentRef::UpdateBounds(FPCGComponentRef *this)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TBox<double> *pTVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_a8 [32];
  TBox<double> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((this->Component).field0_0x0.DebugPtr == (UPCGComponent *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGComponentOctree.cpp"
                       ,0x12,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = UPCGComponent::GetGridBounds((this->Component).field0_0x0.DebugPtr,&local_88);
  dVar5 = (pTVar8->Max).field0_0x0._s_0.X - (pTVar8->Min).field0_0x0._s_0.X;
  dVar1 = (pTVar8->Min).field0_0x0._s_0.Y;
  dVar2 = (pTVar8->Min).field0_0x0._s_0.Z;
  dVar6 = (pTVar8->Max).field0_0x0._s_0.Y - dVar1;
  dVar4 = (pTVar8->Max).field0_0x0._s_0.Z - dVar2;
  dVar13 = dVar5 * __real_3fe0000000000000;
  dVar12 = dVar6 * __real_3fe0000000000000;
  dVar11 = dVar4 * __real_3fe0000000000000;
  (this->Bounds).Origin.field0_0x0._s_0.X = dVar13 + (pTVar8->Min).field0_0x0._s_0.X;
  auVar9._0_8_ = dVar11 + dVar2;
  auVar9._8_8_ = 0;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar12 + dVar1;
  (this->Bounds).Origin.field0_0x0._s_0.Z = auVar9._0_8_;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar13;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar12;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar11;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4) * __real_3fd0000000000000;
  auVar10 = sqrtpd(auVar9,auVar10);
  (this->Bounds).SphereRadius = auVar10._0_8_;
  return;
}

