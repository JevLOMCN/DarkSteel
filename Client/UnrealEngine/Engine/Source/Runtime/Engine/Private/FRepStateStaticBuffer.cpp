// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FRepStateStaticBuffer @ 1484bdd00

void __thiscall FRepStateStaticBuffer::~FRepStateStaticBuffer(FRepStateStaticBuffer *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRepLayout *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  if (0 < (this->Buffer).ArrayNum) {
    pFVar3 = (this->Buffer).AllocatorInstance.Data;
    pFVar4 = (this->RepLayout).Object;
    iVar2 = (pFVar4->Parents).ArrayNum;
    pFVar9 = (pFVar4->Parents).AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)iVar2 * 0x30;
    while( true ) {
      if ((pFVar4->Parents).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRepParentCmd_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar8) break;
      if (*(int *)(pFVar9 + 0x10) == 0) {
        if ((this->Buffer).ArrayNum <
            *(int *)(*(longlong *)pFVar9 + 0x34) * *(int *)(*(longlong *)pFVar9 + 0x30) +
            *(int *)(pFVar9 + 0x18)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Parent.ShadowOffset + Parent.Property->GetSize()) <= InShadowData.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                             ,0x1ce5,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        plVar5 = *(longlong **)pFVar9;
        if ((plVar5[7] & 0x1000000000U) == 0) {
          (**(code **)(*plVar5 + 0x138))(plVar5,pFVar3 + *(int *)(pFVar9 + 0x18));
        }
      }
      pFVar9 = pFVar9 + 0x30;
    }
    piVar1 = &(this->Buffer).ArrayMax;
    (this->Buffer).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  iVar2 = (this->Buffer).ArrayMax;
  piVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = 0;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,iVar2,(ForAnyElementType *)this,0,piVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RepLayout).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// CountBytes @ 1484cd7b0

void __thiscall FRepStateStaticBuffer::CountBytes(FRepStateStaticBuffer *this,FArchive *param_1)

{
  int iVar1;
  FRepLayout *pFVar2;
  longlong lVar3;
  FString local_128;
  FScopeMarker local_118;
  FArchiveState *local_e8;
  FScriptContainerElement *local_e0;
  TArray<FRepParentCmd,TSizedDefaultAllocator<32>_> *local_d8;
  TArray<FRepLayoutCmd,TSizedDefaultAllocator<32>_> *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  FArchiveState local_a8;
  longlong local_18;
  longlong local_10;
  
  ::FString::FString(&local_128,"FRepStateStaticBuffer::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
            (&local_118,param_1,&local_128);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  FArchiveState::FArchiveState(&local_a8);
  pFVar2 = (this->RepLayout).Object;
  iVar1 = (this->Buffer).ArrayNum;
  local_18 = (longlong)iVar1;
  lVar3 = (longlong)(this->Buffer).ArrayMax;
  local_a8._padding_ = (longlong)&___7FArchiveCountMem__6B_;
  local_a8.ArIsFilterEditorOnly = '\0';
  local_a8.ArIsCountingMemory = '\x01';
  local_e8 = &local_a8;
  local_e0 = (this->Buffer).AllocatorInstance.Data;
  local_d8 = &pFVar2->Parents;
  local_d0 = &pFVar2->Cmds;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = lVar3;
  local_10 = lVar3;
  if (0 < iVar1) {
    `FRepStateStaticBuffer::CountBytes'::__l2::FCountBytesHelper::CountBytes(&local_e8);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_118);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar3,lVar3);
  ::FString::FString(&local_128,"Static_OnRep");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_118,&local_128);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_118);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_b0,local_b0);
  ::FString::FString(&local_128,"Static_NotOnRep");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_118,&local_128);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_118);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_c0,local_c0);
  ::FString::FString(&local_128,"Dynamic_OnRep");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_118,&local_128);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_118);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_b8,local_b8);
  ::FString::FString(&local_128,"Dynamic_NotOnRep");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_118,&local_128);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_a8);
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_118);
  return;
}

