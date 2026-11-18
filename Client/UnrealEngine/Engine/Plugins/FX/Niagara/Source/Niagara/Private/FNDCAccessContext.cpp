// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 149078100

UScriptStruct * __cdecl FNDCAccessContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDCAccessContext.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCAccessContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContext,(UObject *)pUVar1,
                         L"NDCAccessContext");
  }
  return Z_Registration_Info_UScriptStruct_FNDCAccessContext.OuterSingleton;
}

// operator= @ 1490b96c0

FNDCAccessContext * __thiscall
FNDCAccessContext::operator=(FNDCAccessContext *this,FNDCAccessContext *param_1)

{
  TArray<FNDCSpawnedSystemRef,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  UObject *pUVar5;
  FScriptContainerElement *_Src;
  double dVar6;
  uint uVar7;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  *(uint *)&this->_padding_ =
       (uint)this->_padding_ ^ ((uint)this->_padding_ ^ (uint)param_1->_padding_) & 1;
  dVar6 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar6;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  uVar7 = (this->bOverrideLocation ^ param_1->bOverrideLocation) & 1 ^ *(uint *)&this->field_0x28;
  *(uint *)&this->field_0x28 = uVar7;
  *(uint *)&this->field_0x28 = (uVar7 ^ *(uint *)&param_1->field_0x28) & 2 ^ uVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->SystemToSpawn).field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  pTVar1 = &this->SpawnedSystems;
  (this->SystemToSpawn).field0_0x0 = (param_1->SystemToSpawn).field0_0x0;
  if (pTVar1 != &param_1->SpawnedSystems) {
    iVar4 = (param_1->SpawnedSystems).ArrayNum;
    piVar2 = &(this->SpawnedSystems).ArrayMax;
    _Src = (param_1->SpawnedSystems).AllocatorInstance.Data;
    (this->SpawnedSystems).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  return this;
}

// GetLocation @ 149105fa0

TVector<double> * __thiscall
FNDCAccessContext::GetLocation(FNDCAccessContext *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  
  lVar1 = this->_padding_;
  if ((lVar1 == 0) || (this->bOverrideLocation != 0)) {
    uVar2 = *(undefined4 *)&(this->Location).field0_0x0;
    uVar3 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 4);
    uVar4 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 8);
    uVar5 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 0xc);
    dVar6 = (this->Location).field0_0x0._s_0.Z;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x210);
    uVar3 = *(undefined4 *)(lVar1 + 0x214);
    uVar4 = *(undefined4 *)(lVar1 + 0x218);
    uVar5 = *(undefined4 *)(lVar1 + 0x21c);
    dVar6 = *(double *)(lVar1 + 0x220);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar3,uVar2);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar5,uVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
  return __return_storage_ptr__;
}

