// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 5

// StaticStruct @ 1463009e0

UScriptStruct * __cdecl FDataflowRigidSolverProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowRigidSolverProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FDataflowRigidSolverProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowRigidSolverProxy,(UObject *)pUVar1,
                         L"DataflowRigidSolverProxy");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowRigidSolverProxy.OuterSingleton;
}

// ~FDataflowRigidSolverProxy @ 14630b150

void __thiscall
FDataflowRigidSolverProxy::~FDataflowRigidSolverProxy(FDataflowRigidSolverProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PushDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// AdvanceSolverDatas @ 14630d3d0

void __thiscall
FDataflowRigidSolverProxy::AdvanceSolverDatas(FDataflowRigidSolverProxy *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDRigidsSolver *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FSolverTasksPTOnly local_68;
  
  if (this->Solver != (FPBDRigidsSolver *)0x0) {
    iVar2 = (this->PushDatas).ArrayNum;
    pFVar4 = (this->PushDatas).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->PushDatas).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::FPushPhysicsData_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      pFVar3 = this->Solver;
      local_68.ProcessPushData.PushData = *(FPushPhysicsData **)pFVar4;
      local_68.ProcessPushData.Solver = (FPhysicsSolverBase *)pFVar3;
      Chaos::FPhysicsSolverAdvanceTask::FPhysicsSolverAdvanceTask
                (&local_68.AdvanceTask,(FPhysicsSolverBase *)pFVar3,
                 local_68.ProcessPushData.PushData);
      local_68.Solver = (FPhysicsSolverBase *)pFVar3;
      Chaos::FSolverTasksPTOnly::AdvanceSolver(&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.AdvanceTask.CVDContext.CurrentDataChannel.SharedReferenceCount.
                 ReferenceController);
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// GetScriptStruct @ 146313be0

UScriptStruct * __thiscall
FDataflowRigidSolverProxy::GetScriptStruct(FDataflowRigidSolverProxy *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowRigidSolverProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FDataflowRigidSolverProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowRigidSolverProxy,(UObject *)pUVar1,
                         L"DataflowRigidSolverProxy");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowRigidSolverProxy.OuterSingleton;
}

// IsValid @ 146318930

bool __thiscall FDataflowRigidSolverProxy::IsValid(FDataflowRigidSolverProxy *this)

{
  return this->Solver != (FPBDRigidsSolver *)0x0;
}

