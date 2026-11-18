// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 7

// FD3D11RenderQuery @ 14596c4e0

FD3D11RenderQuery * __thiscall
FD3D11RenderQuery::FD3D11RenderQuery(FD3D11RenderQuery *this,EType param_1)

{
  ID3D11Query *pIVar1;
  ID3D11Device *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FD3D11RenderQuery *pFVar6;
  longlong lVar7;
  undefined8 local_res8;
  
  this->Type = param_1;
  (this->Resource).Reference = (ID3D11Query *)0x0;
  this->Target = (ulong64 *)0x0;
  this->Prev = (FD3D11RenderQuery **)0x0;
  this->Next = (FD3D11RenderQuery *)0x0;
  this->TOPCounter = '\0';
  this->BOPCounter = '\0';
  this->LastCachedBOPCounter = (atomic<unsigned_char>)0x0;
  local_res8 = 0;
  if (param_1 != Timestamp) {
    if (param_1 == Occlusion) {
      local_res8 = 1;
      goto LAB_14596c56e;
    }
    if ((param_1 != Profiler) && (param_1 != ProfilerEndFrame)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                         ,0x2a,L"");
      if (!bVar4) {
        return this;
      }
      pcVar3 = (code *)swi(3);
      pFVar6 = (FD3D11RenderQuery *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_res8 = 2;
LAB_14596c56e:
  lVar7 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  pIVar1 = (this->Resource).Reference;
  pIVar2 = *(ID3D11Device **)(lVar7 + 0x178);
  pcVar3 = *(code **)((longlong)*pIVar2 + 0xc0);
  if (pIVar1 != (ID3D11Query *)0x0) {
    (this->Resource).Reference = (ID3D11Query *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  iVar5 = (*pcVar3)(pIVar2,&local_res8,this);
  if (iVar5 < 0) {
    VerifyD3D11Result(iVar5,"Device->CreateQuery(&Desc, Resource.GetInitReference())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                      ,0x2f,pIVar2);
  }
  return this;
}

// ~FD3D11RenderQuery @ 14596f030

void __thiscall FD3D11RenderQuery::~FD3D11RenderQuery(FD3D11RenderQuery *this)

{
  ID3D11Query *pIVar1;
  
  Unlink(this);
  pIVar1 = (this->Resource).Reference;
  if (pIVar1 != (ID3D11Query *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014596f04e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// Begin @ 145972330

void __thiscall FD3D11RenderQuery::Begin(FD3D11RenderQuery *this,ID3D11DeviceContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Type != Occlusion) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EType::Occlusion",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014597237f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 0xd8))(param_1,(this->Resource).Reference);
  return;
}

// CacheResult @ 1459725a0

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FD3D11RenderQuery::CacheResult(FD3D11RenderQuery *this,FD3D11DynamicRHI *param_1,bool param_2)

{
  int *piVar1;
  TArray<FD3D11RenderQuery_*,TSizedDefaultAllocator<32>_> *pTVar2;
  EType EVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FTimestampCalibration *pFVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  FD3D11RenderQuery *local_18 [2];
  
  if ((atomic<unsigned_char>)this->BOPCounter == this->LastCachedBOPCounter) {
    if ((this->Prev != (FD3D11RenderQuery **)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsLinked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                           ,0xb4,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  else {
    if ((this->Target == (ulong64 *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Target",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                           ,0xb8,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    bVar8 = FD3D11DynamicRHI::GetQueryData
                      (param_1,(this->Resource).Reference,&local_res8,8,this->Type == Timestamp,
                       param_2,false);
    if (!bVar8) {
      return false;
    }
    EVar3 = this->Type;
    if (EVar3 == Timestamp) {
      pFVar11 = TOptional<FD3D11DynamicRHI::FTimestampCalibration>::operator->
                          (&param_1->TimestampCalibration);
      uVar12 = pFVar11->GPUFrequency / 1000000;
      if (uVar12 == 0) {
        uVar12 = 1;
      }
      local_res8 = local_res8 / uVar12;
    }
    else if ((EVar3 == Profiler) || (EVar3 == ProfilerEndFrame)) {
      pFVar11 = TOptional<FD3D11DynamicRHI::FTimestampCalibration>::operator->
                          (&param_1->TimestampCalibration);
      uVar4 = pFVar11->GPUTimestamp;
      pFVar11 = TOptional<FD3D11DynamicRHI::FTimestampCalibration>::operator->
                          (&param_1->TimestampCalibration);
      uVar5 = pFVar11->CPUFrequency;
      pFVar11 = TOptional<FD3D11DynamicRHI::FTimestampCalibration>::operator->
                          (&param_1->TimestampCalibration);
      uVar12 = pFVar11->GPUFrequency;
      pFVar11 = TOptional<FD3D11DynamicRHI::FTimestampCalibration>::operator->
                          (&param_1->TimestampCalibration);
      local_res8 = pFVar11->CPUTimestamp + ((local_res8 - uVar4) * uVar5) / uVar12;
    }
    *this->Target = local_res8;
    this->Target = (ulong64 *)0x0;
    Unlink(this);
    this->LastCachedBOPCounter = (atomic<unsigned_char>)this->BOPCounter;
    if (this->Type == Profiler) {
      pTVar2 = &(param_1->Profiler).TimestampPool;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      local_18[0] = this;
      if (((pFVar6 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar6 + (longlong)(param_1->Profiler).TimestampPool.ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar10 = (param_1->Profiler).TimestampPool.ArrayNum;
      piVar1 = &(param_1->Profiler).TimestampPool.ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (param_1->Profiler).TimestampPool.ArrayNum = iVar10 + 1;
      *(FD3D11RenderQuery **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_18[0]
      ;
    }
  }
  return true;
}

// End @ 14597c740

void __thiscall
FD3D11RenderQuery::End(FD3D11RenderQuery *this,ID3D11DeviceContext *param_1,ulong64 *param_2)

{
  FD3D11RenderQuery **ppFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  this->BOPCounter = this->BOPCounter + '\x01';
  (**(code **)((longlong)*param_1 + 0xe0))(param_1,(this->Resource).Reference);
  this->Target = param_2;
  Unlink(this);
  lVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  ppFVar1 = (FD3D11RenderQuery **)(lVar4 + 0x4108);
  if (*ppFVar1 != (FD3D11RenderQuery *)0x0) {
    if (*(longlong *)(lVar4 + 0x4110) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("List.Last",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                         ,0x104,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)(*(longlong *)(lVar4 + 0x4110) + 0x18) != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("List.Last->Next == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                         ,0x105,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(FD3D11RenderQuery **)(*(longlong *)(lVar4 + 0x4110) + 0x18) = this;
    this->Prev = (FD3D11RenderQuery **)(*(longlong *)(lVar4 + 0x4110) + 0x18);
    *(FD3D11RenderQuery **)(lVar4 + 0x4110) = this;
    return;
  }
  if (*(longlong *)(lVar4 + 0x4110) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!List.Last",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                       ,0xfc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->Next != (FD3D11RenderQuery *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Next == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                       ,0xfd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *ppFVar1 = this;
  this->Prev = ppFVar1;
  *(FD3D11RenderQuery **)(lVar4 + 0x4110) = this;
  return;
}

// Link @ 145985dc0

void __thiscall FD3D11RenderQuery::Link(FD3D11RenderQuery *this)

{
  FD3D11RenderQuery **ppFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  Unlink(this);
  lVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  ppFVar1 = (FD3D11RenderQuery **)(lVar4 + 0x4108);
  if (*ppFVar1 != (FD3D11RenderQuery *)0x0) {
    if (*(longlong *)(lVar4 + 0x4110) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("List.Last",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                         ,0x104,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)(*(longlong *)(lVar4 + 0x4110) + 0x18) != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("List.Last->Next == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                         ,0x105,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(FD3D11RenderQuery **)(*(longlong *)(lVar4 + 0x4110) + 0x18) = this;
    this->Prev = (FD3D11RenderQuery **)(*(longlong *)(lVar4 + 0x4110) + 0x18);
    *(FD3D11RenderQuery **)(lVar4 + 0x4110) = this;
    return;
  }
  if (*(longlong *)(lVar4 + 0x4110) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!List.Last",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                       ,0xfc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->Next != (FD3D11RenderQuery *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Next == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                       ,0xfd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *ppFVar1 = this;
  this->Prev = ppFVar1;
  *(FD3D11RenderQuery **)(lVar4 + 0x4110) = this;
  return;
}

// Unlink @ 14599d2a0

void __thiscall FD3D11RenderQuery::Unlink(FD3D11RenderQuery *this)

{
  longlong lVar1;
  
  if (this->Prev != (FD3D11RenderQuery **)0x0) {
    lVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    if (*(FD3D11RenderQuery **)(lVar1 + 0x4110) == this) {
      if (this->Prev == (FD3D11RenderQuery **)(lVar1 + 0x4108)) {
        *(undefined8 *)(lVar1 + 0x4110) = 0;
      }
      else {
        *(FD3D11RenderQuery ***)(lVar1 + 0x4110) = this->Prev + -3;
      }
    }
    if (this->Next != (FD3D11RenderQuery *)0x0) {
      this->Next->Prev = this->Prev;
    }
    if (this->Prev != (FD3D11RenderQuery **)0x0) {
      *this->Prev = this->Next;
    }
    this->Next = (FD3D11RenderQuery *)0x0;
    this->Prev = (FD3D11RenderQuery **)0x0;
  }
  return;
}

