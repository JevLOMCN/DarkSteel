// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 6

// FEstate @ 14456af90

FEstate * __thiscall LaneTraceDetail::FEstate::FEstate(FEstate *this,FLaneTraceSpec *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = (param_1->Name).Size;
  uVar3 = *(undefined4 *)&(param_1->Name).field_0xc;
  (this->LaneSpec).Name.DataPtr = (param_1->Name).DataPtr;
  (this->LaneSpec).Name.Size = iVar5;
  *(undefined4 *)&(this->LaneSpec).Name.field_0xc = uVar3;
  uVar3 = *(undefined4 *)((longlong)&(param_1->Group).DataPtr + 4);
  iVar5 = (param_1->Group).Size;
  uVar4 = *(undefined4 *)&(param_1->Group).field_0xc;
  *(undefined4 *)&(this->LaneSpec).Group.DataPtr = *(undefined4 *)&(param_1->Group).DataPtr;
  *(undefined4 *)((longlong)&(this->LaneSpec).Group.DataPtr + 4) = uVar3;
  (this->LaneSpec).Group.Size = iVar5;
  *(undefined4 *)&(this->LaneSpec).Group.field_0xc = uVar4;
  uVar3 = *(undefined4 *)((longlong)&param_1->Channel + 4);
  iVar5 = param_1->Weight;
  uVar4 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->LaneSpec).Channel = *(undefined4 *)&param_1->Channel;
  *(undefined4 *)((longlong)&(this->LaneSpec).Channel + 4) = uVar3;
  (this->LaneSpec).Weight = iVar5;
  *(undefined4 *)&(this->LaneSpec).field_0x2c = uVar4;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Lock,4000);
  piVar1 = &(this->Directory).ArrayNum;
  piVar2 = &(this->Directory).ArrayMax;
  *piVar1 = 0;
  (this->Directory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,4,&(this->Directory).AllocatorInstance,piVar1,piVar2);
  pFVar6 = (this->Directory).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  *(undefined8 *)(pFVar6 + 0x10) = 0;
  *(undefined8 *)(pFVar6 + 0x18) = 0;
  *(undefined8 *)(pFVar6 + 0x20) = 0;
  *(undefined8 *)(pFVar6 + 0x28) = 0;
  *(undefined8 *)(pFVar6 + 0x30) = 0;
  *(undefined8 *)(pFVar6 + 0x38) = 0;
  return this;
}

// ~FEstate @ 14456bdb0

void __thiscall LaneTraceDetail::FEstate::~FEstate(FEstate *this)

{
  int iVar1;
  FScopeBuffer *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->Directory).AllocatorInstance.Data;
  iVar1 = (this->Directory).ArrayNum;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Directory).ArrayNum != iVar1) {
      `TCheckedPointerIterator<LaneTraceDetail::FEstate::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    this_00 = *(FScopeBuffer **)(pFVar2 + 8);
    if (this_00 != (FScopeBuffer *)0x0) {
      FScopeBuffer::Flush(this_00,true);
      ::operator_delete(this_00,0xa8);
    }
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->Directory).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014456be46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Lock);
  return;
}

// operator() @ 14456c6a0

FLaneTrace * __thiscall
`LaneTraceDetail::FEstate::Build'::__l2::<lambda_1>::operator()
          (void *this,ulong64 param_1,FEntry *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *_Str;
  uchar *puVar4;
  uint uVar5;
  FLaneTrace *pFVar6;
  FLaneTrace *pFVar8;
  int iVar9;
  FImportantLogScope local_38;
  size_t sVar7;
  
  pFVar8 = param_2->Lane;
  param_2->Postcode = param_1;
  if (pFVar8 == (FLaneTrace *)0x0) {
    puVar2 = *(undefined8 **)this;
    pFVar6 = ::operator_new(0xa8);
    pFVar8 = (FLaneTrace *)0x0;
    if (pFVar6 != (FLaneTrace *)0x0) {
      uVar3 = puVar2[4];
      *(undefined8 *)pFVar6 = 0;
      *(undefined8 *)&pFVar6->field_0x8 = 0;
      *(undefined1 **)&pFVar6->field_0x10 = &pFVar6->field_0x26;
      *(undefined8 *)&pFVar6->field_0x18 = uVar3;
      *(undefined4 *)&pFVar6->field_0x20 = 0;
      *(undefined2 *)&pFVar6->field_0x24 = 0;
      LOCK();
      UNLOCK();
      uVar5 = *(uint *)(puVar2 + 1);
      iVar9 = NextId + 0x801;
      NextId = NextId + 1;
      UE::Trace::Private::FImportantLogScope::Enter<LaneTraceDetail::F_TraceThreadInfoFields>
                (&local_38,uVar5);
      puVar4 = local_38.Ptr;
      *(int *)local_38.Ptr = iVar9;
      *(int *)((longlong)local_38.Ptr + 4) = *(int *)(puVar2 + 5);
      _Str = (char *)*puVar2;
      if ((int)uVar5 < 0) {
        sVar7 = strlen(_Str);
        uVar5 = (uint)sVar7;
      }
      puVar1 = (uint *)((longlong)puVar4 + (longlong)local_38.AuxCursor);
      *puVar1 = uVar5 << 0xd | 0x200;
      *(undefined1 *)puVar1 = 1;
      memcpy(puVar1 + 1,_Str,(longlong)(int)uVar5);
      *(undefined1 *)((longlong)(int)(local_38.AuxCursor + uVar5) + 4 + (longlong)puVar4) = 3;
      LOCK();
      *(int *)((longlong)local_38.BufferOffset + (longlong)local_38.Ptr) =
           *(int *)((longlong)local_38.BufferOffset + (longlong)local_38.Ptr) + 1;
      UNLOCK();
      *(int *)&pFVar6->field_0x20 = iVar9;
      pFVar8 = pFVar6;
    }
    param_2->Lane = pFVar8;
  }
  return pFVar8;
}

// Build @ 14456f9d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FLaneTrace * __thiscall LaneTraceDetail::FEstate::Build(FEstate *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FLaneTrace *pFVar6;
  FEntry *pFVar7;
  FEntry *pFVar8;
  undefined1 local_res8 [8];
  FEstate *local_res18;
  
  lpCriticalSection = &this->Lock;
  local_res18 = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Directory).ArrayNum;
  pFVar8 = (FEntry *)(this->Directory).AllocatorInstance.Data;
  pFVar7 = pFVar8 + iVar1;
  while( true ) {
    if ((this->Directory).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<LaneTraceDetail::FEstate::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (pFVar8->Postcode == 0) goto LAB_14456faa8;
    pFVar8 = pFVar8 + 1;
  }
  uVar2 = (this->Directory).ArrayNum;
  TArray<LaneTraceDetail::FEstate::FEntry,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->Directory,uVar2 + 4,Default);
  uVar5 = 0;
  if ((int)uVar2 < (this->Directory).ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FLaneTrace *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar8 = (FEntry *)((this->Directory).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10);
LAB_14456faa8:
  pFVar6 = `LaneTraceDetail::FEstate::Build'::__l2::<lambda_1>::operator()
                     (&local_res18,param_1,pFVar8);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar6;
}

// Demolish @ 144571fd0

void __thiscall LaneTraceDetail::FEstate::Demolish(FEstate *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ushort uVar1;
  LARGE_INTEGER *this_00;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res18 [2];
  
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar5 = (this->Directory).ArrayNum;
  pFVar7 = (this->Directory).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar5 * 0x10;
  while( true ) {
    if ((this->Directory).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<LaneTraceDetail::FEstate::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\LaneTrace.cpp"
                         ,0x22f,L"Invalid/unknown postcode given, unable to demolish estate: %llx");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_144572101;
    }
    if (*(ulong64 *)pFVar7 == param_1) break;
    pFVar7 = pFVar7 + 0x10;
  }
  this_00 = *(LARGE_INTEGER **)(pFVar7 + 8);
  QueryPerformanceCounter(local_res18);
  uVar1 = *(ushort *)((longlong)this_00 + 0x24);
  while (uVar1 != 0) {
    if (((ulonglong)local_res18[0] < (ulonglong)*(_struct_19 *)this_00) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Timestamp >= LastTimestamp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\LaneTrace.cpp"
                           ,0xcd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00->QuadPart = (LONGLONG)local_res18[0];
    if (*(ushort *)((longlong)this_00 + 0x24) == 0) break;
    uVar2 = this_00[1].QuadPart;
    this_00[1].QuadPart = (LONGLONG)local_res18[0];
    iVar5 = Encode64_7bit((local_res18[0].QuadPart - uVar2) * 2,(void *)this_00[2]);
    *(ushort *)((longlong)this_00 + 0x24) = *(ushort *)((longlong)this_00 + 0x24) - 1;
    this_00[2].QuadPart = (LONGLONG)((uchar *)this_00[2].QuadPart + iVar5);
    uVar1 = *(ushort *)((longlong)this_00 + 0x24);
  }
  FScopeBuffer::Flush((FScopeBuffer *)&this_00->s,true);
  *(longlong *)pFVar7 = 0;
LAB_144572101:
                    /* WARNING: Could not recover jumptable at 0x00014457211b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Lookup @ 144579580

FLaneTrace * __thiscall LaneTraceDetail::FEstate::Lookup(FEstate *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FLaneTrace *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Directory).ArrayNum;
  pFVar5 = (this->Directory).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Directory).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<LaneTraceDetail::FEstate::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(ulong64 *)pFVar5 == param_1) {
      pFVar4 = *(FLaneTrace **)(pFVar5 + 8);
LAB_14457961d:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return pFVar4;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\LaneTrace.cpp"
                     ,0x21c,L"Invalid/unknown postcode given, unable to find estate: %llx");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLaneTrace *)(*pcVar2)();
    return pFVar4;
  }
  pFVar4 = (FLaneTrace *)0x0;
  goto LAB_14457961d;
}

