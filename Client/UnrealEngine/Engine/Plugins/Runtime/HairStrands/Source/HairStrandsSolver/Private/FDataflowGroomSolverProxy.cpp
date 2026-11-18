// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 5

// StaticStruct @ 14e245a90

UScriptStruct * __cdecl FDataflowGroomSolverProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsSolver();
    Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGroomSolverProxy,(UObject *)pUVar1,
                         L"DataflowGroomSolverProxy");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton;
}

// ~FDataflowGroomSolverProxy @ 14e251fe0

void __thiscall
FDataflowGroomSolverProxy::~FDataflowGroomSolverProxy(FDataflowGroomSolverProxy *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FDataflowPhysicsSolverProxy__;
  this->_padding_ = (longlong)&_vftable__for__Chaos__FPhysicsSolverEvents__;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  *(undefined4 *)&(this->DeformerInstanceGuids).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeformerInstanceGuids).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeformerInstanceGuids);
  Chaos::FPhysicsSolverEvents::~FPhysicsSolverEvents((FPhysicsSolverEvents *)&this->_padding_);
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

// AdvanceSolverDatas @ 14e253130

void __thiscall
FDataflowGroomSolverProxy::AdvanceSolverDatas(FDataflowGroomSolverProxy *this,float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)&this->_padding_
             ,dVar1);
  TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)&this->_padding_
             ,dVar1);
  TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)&this->_padding_
             ,dVar1);
  return;
}

// GetScriptStruct @ 14e253c20

UScriptStruct * __thiscall
FDataflowGroomSolverProxy::GetScriptStruct(FDataflowGroomSolverProxy *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsSolver();
    Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGroomSolverProxy,(UObject *)pUVar1,
                         L"DataflowGroomSolverProxy");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowGroomSolverProxy.OuterSingleton;
}

// IsValid @ 14e253ff0

bool __thiscall FDataflowGroomSolverProxy::IsValid(FDataflowGroomSolverProxy *this)

{
  return false;
}

