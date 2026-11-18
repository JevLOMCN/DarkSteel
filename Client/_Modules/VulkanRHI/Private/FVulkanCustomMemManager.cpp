// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// FVulkanCustomMemManager @ 145b005b0

FVulkanCustomMemManager * __thiscall
FVulkanCustomMemManager::FVulkanCustomMemManager(FVulkanCustomMemManager *this)

{
  (this->Types).Elements[0].UsedMemory = 0;
  (this->Types).Elements[0].MaxAllocSize = 0;
  *(undefined8 *)&(this->Types).Elements[0].Allocs = 0;
  *(undefined8 *)&(this->Types).Elements[0].Allocs.field_0x8 = 0;
  *(undefined8 *)&(this->Types).Elements[0].Allocs.field_0x20 = 0;
  *(undefined4 *)&(this->Types).Elements[0].Allocs.field_0x28 = 0;
  *(undefined4 *)&(this->Types).Elements[0].Allocs.field_0x2c = 0x80;
  *(undefined4 *)&(this->Types).Elements[0].Allocs.field_0x34 = 0;
  *(undefined4 *)&(this->Types).Elements[0].Allocs.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Types).Elements[0].Allocs.field_0x40 = 0;
  *(undefined4 *)&(this->Types).Elements[0].Allocs.field_0x48 = 0;
  (this->Types).Elements[1].UsedMemory = 0;
  (this->Types).Elements[1].MaxAllocSize = 0;
  *(undefined8 *)&(this->Types).Elements[1].Allocs = 0;
  *(undefined8 *)&(this->Types).Elements[1].Allocs.field_0x8 = 0;
  *(undefined8 *)&(this->Types).Elements[1].Allocs.field_0x20 = 0;
  *(undefined4 *)&(this->Types).Elements[1].Allocs.field_0x28 = 0;
  *(undefined4 *)&(this->Types).Elements[1].Allocs.field_0x2c = 0x80;
  *(undefined4 *)&(this->Types).Elements[1].Allocs.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Types).Elements[1].Allocs.field_0x34 = 0;
  *(undefined8 *)&(this->Types).Elements[1].Allocs.field_0x40 = 0;
  *(undefined4 *)&(this->Types).Elements[1].Allocs.field_0x48 = 0;
  (this->Types).Elements[2].UsedMemory = 0;
  (this->Types).Elements[2].MaxAllocSize = 0;
  *(undefined8 *)&(this->Types).Elements[2].Allocs = 0;
  *(undefined8 *)&(this->Types).Elements[2].Allocs.field_0x8 = 0;
  *(undefined8 *)&(this->Types).Elements[2].Allocs.field_0x20 = 0;
  *(undefined4 *)&(this->Types).Elements[2].Allocs.field_0x28 = 0;
  *(undefined4 *)&(this->Types).Elements[2].Allocs.field_0x2c = 0x80;
  *(undefined4 *)&(this->Types).Elements[2].Allocs.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Types).Elements[2].Allocs.field_0x34 = 0;
  *(undefined8 *)&(this->Types).Elements[2].Allocs.field_0x40 = 0;
  *(undefined4 *)&(this->Types).Elements[2].Allocs.field_0x48 = 0;
  (this->Types).Elements[3].UsedMemory = 0;
  (this->Types).Elements[3].MaxAllocSize = 0;
  *(undefined8 *)&(this->Types).Elements[3].Allocs = 0;
  *(undefined8 *)&(this->Types).Elements[3].Allocs.field_0x8 = 0;
  *(undefined8 *)&(this->Types).Elements[3].Allocs.field_0x20 = 0;
  *(undefined4 *)&(this->Types).Elements[3].Allocs.field_0x28 = 0;
  *(undefined4 *)&(this->Types).Elements[3].Allocs.field_0x2c = 0x80;
  *(undefined4 *)&(this->Types).Elements[3].Allocs.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Types).Elements[3].Allocs.field_0x34 = 0;
  *(undefined8 *)&(this->Types).Elements[3].Allocs.field_0x40 = 0;
  *(undefined4 *)&(this->Types).Elements[3].Allocs.field_0x48 = 0;
  (this->Types).Elements[4].UsedMemory = 0;
  (this->Types).Elements[4].MaxAllocSize = 0;
  *(undefined8 *)&(this->Types).Elements[4].Allocs = 0;
  *(undefined8 *)&(this->Types).Elements[4].Allocs.field_0x8 = 0;
  *(undefined8 *)&(this->Types).Elements[4].Allocs.field_0x20 = 0;
  *(undefined4 *)&(this->Types).Elements[4].Allocs.field_0x28 = 0;
  *(undefined4 *)&(this->Types).Elements[4].Allocs.field_0x2c = 0x80;
  *(undefined4 *)&(this->Types).Elements[4].Allocs.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Types).Elements[4].Allocs.field_0x34 = 0;
  *(undefined8 *)&(this->Types).Elements[4].Allocs.field_0x40 = 0;
  *(undefined4 *)&(this->Types).Elements[4].Allocs.field_0x48 = 0;
  VulkanRHI::GAllocationCallbacks.pUserData = (void *)0x0;
  VulkanRHI::GAllocationCallbacks.pfnAllocation = Alloc;
  VulkanRHI::GAllocationCallbacks.pfnReallocation = Realloc;
  VulkanRHI::GAllocationCallbacks.pfnFree = Free;
  VulkanRHI::GAllocationCallbacks.pfnInternalAllocation = InternalAllocationNotification;
  VulkanRHI::GAllocationCallbacks.pfnInternalFree = InternalFreeNotification;
  return this;
}

// Alloc @ 145b0c310

void * __cdecl
FVulkanCustomMemManager::Alloc
          (void *param_1,ulong64 param_2,ulong64 param_3,VkSystemAllocationScope param_4)

{
  FType *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  void *pvVar5;
  ulong64 uVar6;
  ulong64 local_res10 [2];
  FLLMScope local_res20 [2];
  FLLMScope local_38;
  undefined1 local_34 [20];
  undefined8 *local_20;
  ulong64 *local_18;
  
  local_res10[0] = param_2;
  if (4 < (int)param_4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocScope < VK_SYSTEM_ALLOCATION_SCOPE_RANGE_SIZE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x1345,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  FLLMScope::FLLMScope
            (&local_38,VideoRecording|GenericPlatformMallocCrashPlatform,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)(local_34 + 0xc),VideoRecording|GenericPlatformMallocCrashPlatform,true);
  FLLMScope::FLLMScope(local_res20,GraphicsPlatform,false,None,Platform,true);
  EnterCriticalSection((LPCRITICAL_SECTION)&GMemMgrCS);
  local_34._4_8_ = FMemory::Malloc(local_res10[0],(uint)param_3);
  if (4 < (int)param_4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocScope < VK_SYSTEM_ALLOCATION_SCOPE_RANGE_SIZE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x133f,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  uVar6 = local_res10[0];
  if (local_res10[0] < GVulkanInstrumentedMemMgr.Types.Elements[param_4].MaxAllocSize) {
    uVar6 = GVulkanInstrumentedMemMgr.Types.Elements[param_4].MaxAllocSize;
  }
  pFVar1 = GVulkanInstrumentedMemMgr.Types.Elements + param_4;
  pFVar1->UsedMemory = pFVar1->UsedMemory + local_res10[0];
  GVulkanInstrumentedMemMgr.Types.Elements[param_4].MaxAllocSize = uVar6;
  local_20 = (undefined8 *)(local_34 + 4);
  local_18 = local_res10;
  TSet<TTuple<void_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<void_*,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<void_*_const_&,unsigned___int64_const_&>_>
            ((TSet<TTuple<void_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<void_*,unsigned___int64,0>,FDefaultSetAllocator>
              *)&GVulkanInstrumentedMemMgr.Types.Elements[param_4].Allocs,
             (TPairInitializer<void_*_const_&,unsigned___int64_const_&> *)local_34,(bool *)&local_20
            );
  uVar3 = local_34._4_8_;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GMemMgrCS);
  FLLMScope::~FLLMScope(local_res20);
  FMemScope::~FMemScope((FMemScope *)(local_34 + 0xc));
  FLLMScope::~FLLMScope(&local_38);
  return (void *)uVar3;
}

// Free @ 145b1b210

void __cdecl FVulkanCustomMemManager::Free(void *param_1,void *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope
            (local_res20,VideoRecording|GenericPlatformMallocCrashPlatform,false,None,Default,true);
  FMemScope::FMemScope(local_18,VideoRecording|GenericPlatformMallocCrashPlatform,true);
  FLLMScope::FLLMScope(local_res18,GraphicsPlatform,false,None,Platform,true);
  EnterCriticalSection((LPCRITICAL_SECTION)&GMemMgrCS);
  FMemory::Free(param_2);
  piVar6 = (int *)&GVulkanInstrumentedMemMgr.Types.Elements[0].Allocs.field_0x34;
  uVar4 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  do {
    if (piVar6[-0xb] != *piVar6) {
      piVar5 = *(int **)(piVar6 + 3);
      if (*(int **)(piVar6 + 3) == (int *)0x0) {
        piVar5 = piVar6 + 1;
      }
      iVar2 = piVar5[piVar6[5] - 1U & (uVar4 >> 0x10 ^ uVar4)];
      if (iVar2 != -1) {
        do {
          lVar1 = *(longlong *)(piVar6 + -0xd) + (longlong)iVar2 * 0x18;
          if (*(void **)(*(longlong *)(piVar6 + -0xd) + (longlong)iVar2 * 0x18) == param_2) {
            plVar3 = (longlong *)(lVar1 + 8);
            if (lVar1 == 0) {
              plVar3 = (longlong *)0x0;
            }
            if (plVar3 != (longlong *)0x0) {
              *(longlong *)(piVar6 + -0x11) = *(longlong *)(piVar6 + -0x11) - *plVar3;
              goto LAB_145b1b31e;
            }
            break;
          }
          iVar2 = *(int *)(lVar1 + 0x10);
        } while (iVar2 != -1);
      }
    }
    piVar6 = piVar6 + 0x18;
    if (0x154bdc673 < (longlong)piVar6) {
LAB_145b1b31e:
      LeaveCriticalSection((LPCRITICAL_SECTION)&GMemMgrCS);
      FLLMScope::~FLLMScope(local_res18);
      FMemScope::~FMemScope(local_18);
      FLLMScope::~FLLMScope(local_res20);
      return;
    }
  } while( true );
}

// InternalAllocationNotification @ 145b26ae0

void __cdecl
FVulkanCustomMemManager::InternalAllocationNotification
          (void *param_1,ulong64 param_2,VkInternalAllocationType param_3,
          VkSystemAllocationScope param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (4 < (int)param_4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocScope < VK_SYSTEM_ALLOCATION_SCOPE_RANGE_SIZE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x1378,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// InternalFreeNotification @ 145b26b20

void __cdecl
FVulkanCustomMemManager::InternalFreeNotification
          (void *param_1,ulong64 param_2,VkInternalAllocationType param_3,
          VkSystemAllocationScope param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (4 < (int)param_4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocScope < VK_SYSTEM_ALLOCATION_SCOPE_RANGE_SIZE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x137d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Realloc @ 145b2f150

void * __cdecl
FVulkanCustomMemManager::Realloc
          (void *param_1,void *param_2,ulong64 param_3,ulong64 param_4,
          VkSystemAllocationScope param_5)

{
  code *pcVar1;
  VkSystemAllocationScope VVar2;
  undefined8 uVar3;
  bool bVar4;
  void *pvVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  FType *pFVar8;
  ulong64 local_res18 [2];
  FLLMScope local_38;
  undefined1 local_34 [20];
  undefined8 *local_20;
  ulong64 *local_18;
  
  VVar2 = param_5;
  uVar7 = (ulonglong)param_5;
  local_res18[0] = param_3;
  if (4 < (int)param_5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocScope < VK_SYSTEM_ALLOCATION_SCOPE_RANGE_SIZE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x1367,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar1)();
      return pvVar5;
    }
  }
  FLLMScope::FLLMScope
            (&local_38,VideoRecording|GenericPlatformMallocCrashPlatform,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)(local_34 + 0xc),VideoRecording|GenericPlatformMallocCrashPlatform,true);
  FLLMScope::FLLMScope((FLLMScope *)&param_5,GraphicsPlatform,false,None,Platform,true);
  EnterCriticalSection((LPCRITICAL_SECTION)&GMemMgrCS);
  local_34._4_8_ = FMemory::Realloc(param_2,local_res18[0],(uint)param_4);
  if (4 < (int)VVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocScope < VK_SYSTEM_ALLOCATION_SCOPE_RANGE_SIZE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x133f,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar1)();
      return pvVar5;
    }
  }
  pFVar8 = GVulkanInstrumentedMemMgr.Types.Elements + uVar7;
  if (param_2 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = TMap<void_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,unsigned___int64,0>_>
            ::FindAndRemoveChecked(&GVulkanInstrumentedMemMgr.Types.Elements[uVar7].Allocs,param_2);
  }
  pFVar8->UsedMemory = pFVar8->UsedMemory - uVar6;
  local_20 = (undefined8 *)(local_34 + 4);
  local_18 = local_res18;
  TSet<TTuple<void_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<void_*,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<void_*_const_&,unsigned___int64_const_&>_>
            ((TSet<TTuple<void_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<void_*,unsigned___int64,0>,FDefaultSetAllocator>
              *)&GVulkanInstrumentedMemMgr.Types.Elements[uVar7].Allocs,
             (TPairInitializer<void_*_const_&,unsigned___int64_const_&> *)local_34,(bool *)&local_20
            );
  uVar3 = local_34._4_8_;
  pFVar8->UsedMemory = pFVar8->UsedMemory + local_res18[0];
  uVar6 = local_res18[0];
  if (local_res18[0] < GVulkanInstrumentedMemMgr.Types.Elements[uVar7].MaxAllocSize) {
    uVar6 = GVulkanInstrumentedMemMgr.Types.Elements[uVar7].MaxAllocSize;
  }
  GVulkanInstrumentedMemMgr.Types.Elements[uVar7].MaxAllocSize = uVar6;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GMemMgrCS);
  FLLMScope::~FLLMScope((FLLMScope *)&param_5);
  FMemScope::~FMemScope((FMemScope *)(local_34 + 0xc));
  FLLMScope::~FLLMScope(&local_38);
  return (void *)uVar3;
}

