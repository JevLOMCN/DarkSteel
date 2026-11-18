// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 22

// FDeviceMemoryManager @ 145b000a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FDeviceMemoryManager * __thiscall
VulkanRHI::FDeviceMemoryManager::FDeviceMemoryManager(FDeviceMemoryManager *this)

{
  *(undefined8 *)&this->Allocations = 0;
  *(undefined8 *)&(this->Allocations).field_0x8 = 0;
  *(undefined8 *)&(this->Allocations).field_0x20 = 0;
  *(undefined4 *)&(this->Allocations).field_0x28 = 0;
  *(undefined4 *)&(this->Allocations).field_0x2c = 0x80;
  *(undefined4 *)&(this->Allocations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Allocations).field_0x34 = 0;
  *(undefined8 *)&(this->Allocations).field_0x40 = 0;
  *(undefined4 *)&(this->Allocations).field_0x48 = 0;
  this->MemoryUpdateTime = 0.0;
  this->DeviceHandle = (VkDevice_T *)0x0;
  this->Device = (FVulkanDevice *)0x0;
  this->NumAllocations = 0;
  this->PeakNumAllocations = 0;
  this->bHasUnifiedMemory = false;
  this->bSupportsMemoryless = false;
  (this->HeapInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeapInfos).ArrayNum = 0;
  (this->HeapInfos).ArrayMax = 0;
  this->PrimaryHeapIndex = -1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DeviceMemLock,4000);
  memset(&this->MemoryBudget,0,0x110);
  memset(&this->MemoryProperties,0,0x208);
  return this;
}

// ~FDeviceMemoryManager @ 145b04e60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall VulkanRHI::FDeviceMemoryManager::~FDeviceMemoryManager(FDeviceMemoryManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  Deinit(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeviceMemLock);
  DestructItems<VulkanRHI::FDeviceMemoryManager::FHeapInfo,int>
            ((FHeapInfo *)(this->HeapInfos).AllocatorInstance.Data,(this->HeapInfos).ArrayNum);
  pFVar1 = (this->HeapInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Allocations).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Allocations).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Alloc @ 145b0abc0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FDeviceMemoryAllocation * __thiscall
VulkanRHI::FDeviceMemoryManager::Alloc
          (FDeviceMemoryManager *this,bool param_1,ulong64 param_2,uint param_3,uint param_4,
          void *param_5,float param_6,bool param_7,char *param_8,uint param_9)

{
  uint uVar1;
  FDeviceMemoryAllocation *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = (this->MemoryProperties).memoryTypeCount;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      if (param_3 == 0) break;
      uVar3 = (uint)uVar4;
      if (((param_3 & 1) != 0) &&
         (((this->MemoryProperties).memoryTypes[uVar4].propertyFlags & param_4) == param_4))
      goto LAB_145b0ac49;
      param_3 = param_3 >> 1;
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < uVar1);
  }
  VerifyVulkanResult(VK_ERROR_FEATURE_NOT_PRESENT,
                     "this->GetMemoryTypeFromProperties(MemoryTypeBits, MemoryPropertyFlags, &MemoryTypeIndex)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                     ,0x315);
  uVar3 = 0xffffffff;
LAB_145b0ac49:
  pFVar2 = Alloc(this,param_1,param_2,uVar3,param_5,param_6,param_7,param_8,param_9);
  return pFVar2;
}

// Alloc @ 145b0acd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDeviceMemoryAllocation * __thiscall
VulkanRHI::FDeviceMemoryManager::Alloc
          (FDeviceMemoryManager *this,bool param_1,ulong64 param_2,uint param_3,void *param_4,
          float param_5,bool param_6,char *param_7,uint param_8)

{
  byte *pbVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FDeviceMemoryBlock *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory0> FVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory1> FVar12;
  TStatId TVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> FVar15;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved> FVar16;
  FName FVar17;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved> FVar18;
  FDeviceMemoryAllocation *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_VulkanDedicatedMemory> FVar20;
  FOutputDeviceRedirector *pFVar21;
  FDeviceMemoryAllocation *pFVar22;
  ulong64 uVar23;
  ulonglong uVar24;
  FLowLevelMemTracker *this_00;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPhysicalMemAllocations> FVar25;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory5> FVar26;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryTotal> FVar27;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved> *this_01;
  FVulkanTrackInfo *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *this_02;
  uint uVar29;
  uint uVar30;
  wchar_t *pwVar31;
  int iVar32;
  FScriptContainerElement *pFVar33;
  bool bVar34;
  undefined1 auStackY_278 [32];
  VkResult local_210;
  FDeviceMemoryAllocation *local_208;
  uint local_200;
  VkDevice_T **local_1f8;
  void *local_1f0;
  FDeviceMemoryAllocation *local_1e8;
  FLLMScope local_1e0 [2];
  VkDeviceMemory_T *local_1d8;
  VkMemoryAllocateInfo local_1d0;
  FVulkanTrackInfo local_1b0;
  int local_1a0;
  undefined4 uStack_19c;
  FDeviceMemoryAllocation local_198;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [20];
  undefined4 local_144;
  FLLMPauseScope local_140 [2];
  FName local_128 [2];
  FName local_118 [2];
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80 [3];
  FDeviceMemoryBlockKey local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1f0 = param_4;
  local_200 = param_3;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FDeviceMemoryManager_Alloc");
  bVar34 = -1 < CpuChannel->Enabled;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId795,"FDeviceMemoryManager_Alloc",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0x31b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId795);
  }
  lpCriticalSection = &this->DeviceMemLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_4 == (void *)0x0) {
    local_68.MemoryTypeIndex = param_3;
    local_68.BlockSize = param_2;
    uVar7 = (*FCrc::MemCrc32Func)(&local_68.BlockSize,8,0);
    uVar8 = (*FCrc::MemCrc32Func)(&local_68,4,0);
    uVar30 = uVar8 - uVar7 ^ uVar7 >> 0xd;
    uVar8 = (-0x61c88647 - uVar7) - uVar30 ^ uVar30 << 8;
    uVar29 = (uVar7 - uVar8) - uVar30 ^ uVar8 >> 0xd;
    uVar30 = (uVar30 - uVar29) - uVar8 ^ uVar29 >> 0xc;
    uVar7 = (uVar8 - uVar30) - uVar29 ^ uVar30 << 0x10;
    uVar8 = (uVar29 - uVar7) - uVar30 ^ uVar7 >> 5;
    uVar29 = (uVar30 - uVar8) - uVar7 ^ uVar8 >> 3;
    uVar7 = (uVar7 - uVar29) - uVar8 ^ uVar29 << 10;
    pFVar10 = TMapBase<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,0>_>
              ::FindOrAddImpl<VulkanRHI::FDeviceMemoryBlockKey_const_&>
                        ((TMapBase<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,0>_>
                          *)this,uVar7 >> 0xf ^ (uVar8 - uVar7) - uVar29,&local_68);
    param_3 = local_200;
    if (0 < (pFVar10->Allocations).ArrayNum) {
      iVar9 = (pFVar10->Allocations).ArrayNum;
      iVar32 = iVar9 + -1;
      pFVar19 = *(FDeviceMemoryAllocation **)
                 ((pFVar10->Allocations).AllocatorInstance.Data + (longlong)iVar9 * 0x10 + -0x10);
      (pFVar10->Allocations).ArrayNum = iVar32;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(pFVar10->Allocations).AllocatorInstance,iVar32,
                 &(pFVar10->Allocations).ArrayMax);
      switch(local_200) {
      case 0:
        if (param_2 != 0) {
          FVar11 = StatPtr_STAT_VulkanMemory0;
          if (StatPtr_STAT_VulkanMemory0 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0>)0x0) {
            pFVar14 = ::FName::FName(&local_b8,"STAT_VulkanMemory0");
            FVar11 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory0,*pFVar14,
                                L"MemoryPool 0","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                                L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
          }
          FThreadStats::AddMessage<__int64>(*(FName *)FVar11,Add,param_2,false);
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                   StatPtr_STAT_VulkanMemory0Reserved;
          if (StatPtr_STAT_VulkanMemory0Reserved ==
              (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0Reserved>)0x0) {
            pFVar14 = ::FName::FName(&local_98,"STAT_VulkanMemory0Reserved");
            pwVar31 = L"MemoryPool 0 Reserved";
            this_01 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved> *)
                      &StatPtr_STAT_VulkanMemory0Reserved;
LAB_145b0b2f2:
            FVar16 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)this_01,*pFVar14,pwVar31,
                                "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",
                                true,false,ST_int64,false,true,MCR_Physical);
          }
LAB_145b0b32f:
          FVar17 = *(FName *)FVar16;
LAB_145b0b332:
          FThreadStats::AddMessage<__int64>(FVar17,Subtract,param_2,false);
          FVar18 = StatPtr_STAT_VulkanMemoryReserved;
          if (StatPtr_STAT_VulkanMemoryReserved ==
              (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved>)0x0) {
            pFVar14 = ::FName::FName(&local_f0,"STAT_VulkanMemoryReserved");
            FVar18 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryReserved,
                                *pFVar14,L"_Reserved","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced"
                                ,L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
          }
          FThreadStats::AddMessage<__int64>(*(FName *)FVar18,Subtract,param_2,false);
        }
        break;
      case 1:
        if (param_2 != 0) {
          FVar12 = StatPtr_STAT_VulkanMemory1;
          if (StatPtr_STAT_VulkanMemory1 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1>)0x0) {
            pFVar14 = ::FName::FName(&local_88,"STAT_VulkanMemory1");
            FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory1,*pFVar14,
                                L"MemoryPool 1","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                                L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
          }
          FThreadStats::AddMessage<__int64>(*(FName *)FVar12,Add,param_2,false);
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                   StatPtr_STAT_VulkanMemory1Reserved;
          if (StatPtr_STAT_VulkanMemory1Reserved ==
              (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1Reserved>)0x0) {
            pFVar14 = ::FName::FName(local_80,"STAT_VulkanMemory1Reserved");
            pwVar31 = L"MemoryPool 1 Reserved";
            this_01 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved> *)
                      &StatPtr_STAT_VulkanMemory1Reserved;
            goto LAB_145b0b2f2;
          }
          goto LAB_145b0b32f;
        }
        break;
      case 2:
        if (param_2 != 0) {
          TVar13 = FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory2,1>::GetStatId
                             ((FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory2,1> *)
                              &StatPtr_STAT_VulkanMemory2);
          FThreadStats::AddMessage<__int64>(*(FName *)(TVar13.StatIdPtr)->Name,Add,param_2,false);
          TVar13 = FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory2Reserved,1>::GetStatId
                             ((FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory2Reserved,1> *)
                              &StatPtr_STAT_VulkanMemory2Reserved);
          FVar17 = *(FName *)(TVar13.StatIdPtr)->Name;
          goto LAB_145b0b332;
        }
        break;
      case 3:
        if (param_2 != 0) {
          TVar13 = FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory3,1>::GetStatId
                             ((FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory3,1> *)
                              &StatPtr_STAT_VulkanMemory3);
          FThreadStats::AddMessage<__int64>(*(FName *)(TVar13.StatIdPtr)->Name,Add,param_2,false);
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                   StatPtr_STAT_VulkanMemory3Reserved;
          if (StatPtr_STAT_VulkanMemory3Reserved ==
              (FThreadSafeStaticStat<FStat_STAT_VulkanMemory3Reserved>)0x0) {
            pFVar14 = ::FName::FName(local_128,"STAT_VulkanMemory3Reserved");
            pwVar31 = L"MemoryPool 3 Reserved";
            this_01 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved> *)
                      &StatPtr_STAT_VulkanMemory3Reserved;
            goto LAB_145b0b2f2;
          }
          goto LAB_145b0b32f;
        }
        break;
      case 4:
        if (param_2 != 0) {
          TVar13 = FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory4,1>::GetStatId
                             ((FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory4,1> *)
                              &StatPtr_STAT_VulkanMemory4);
          FThreadStats::AddMessage<__int64>(*(FName *)(TVar13.StatIdPtr)->Name,Add,param_2,false);
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                   StatPtr_STAT_VulkanMemory4Reserved;
          if (StatPtr_STAT_VulkanMemory4Reserved ==
              (FThreadSafeStaticStat<FStat_STAT_VulkanMemory4Reserved>)0x0) {
            pFVar14 = ::FName::FName(local_118,"STAT_VulkanMemory4Reserved");
            pwVar31 = L"MemoryPool 4 Reserved";
            this_01 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved> *)
                      &StatPtr_STAT_VulkanMemory4Reserved;
            goto LAB_145b0b2f2;
          }
          goto LAB_145b0b32f;
        }
        break;
      case 5:
        if (param_2 != 0) {
          TVar13 = FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory5,1>::GetStatId
                             ((FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory5,1> *)
                              &StatPtr_STAT_VulkanMemory5);
          FThreadStats::AddMessage<__int64>(*(FName *)(TVar13.StatIdPtr)->Name,Add,param_2,false);
          FVar16 = StatPtr_STAT_VulkanMemory5Reserved;
          if (StatPtr_STAT_VulkanMemory5Reserved ==
              (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)0x0) {
            pFVar14 = ::FName::FName(&local_108,"STAT_VulkanMemory5Reserved");
            pwVar31 = L"MemoryPool 5 Reserved";
            this_01 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved> *)
                      &StatPtr_STAT_VulkanMemory5Reserved;
            goto LAB_145b0b2f2;
          }
          goto LAB_145b0b32f;
        }
        break;
      default:
        if (param_2 != 0) {
          FVar15 = StatPtr_STAT_VulkanMemoryX;
          if (StatPtr_STAT_VulkanMemoryX == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX>)0x0) {
            pFVar14 = ::FName::FName(&local_100,"STAT_VulkanMemoryX");
            FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryX,*pFVar14,
                                L"MemoryPool (remaining)","STATGROUP_VulkanMemoryRaw",
                                "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,
                                true,MCR_Physical);
          }
          FThreadStats::AddMessage<__int64>(*(FName *)FVar15,Add,param_2,false);
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                   StatPtr_STAT_VulkanMemoryXReserved;
          if (StatPtr_STAT_VulkanMemoryXReserved ==
              (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved>)0x0) {
            pFVar14 = ::FName::FName(&local_f8,"STAT_VulkanMemoryXReserved");
            pwVar31 = L"MemoryPool (remaining) Reserved";
            this_01 = &StatPtr_STAT_VulkanMemoryXReserved;
            goto LAB_145b0b2f2;
          }
          goto LAB_145b0b32f;
        }
      }
      goto LAB_145b0c12d;
    }
  }
  if ((param_2 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x34a,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar19 = (FDeviceMemoryAllocation *)(*pcVar3)();
    return pFVar19;
  }
  if (((this->MemoryProperties).memoryTypeCount <= param_3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MemoryTypeIndex < MemoryProperties.memoryTypeCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x34b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar19 = (FDeviceMemoryAllocation *)(*pcVar3)();
    return pFVar19;
  }
  local_1d0.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
  local_1d0._28_4_ = 0;
  local_1d0._4_4_ = 0;
  local_1d0.allocationSize._0_4_ = (uint)param_2;
  uVar7 = (uint)local_1d0.allocationSize;
  if ((*(byte *)&(this->Device->OptionalDeviceExtensions).field0_0x0 & 2) == 0) {
    pFVar28 = (FVulkanTrackInfo *)0x0;
  }
  else {
    local_158._4_8_ = 0;
    pFVar28 = (FVulkanTrackInfo *)local_158;
    local_158._12_8_ = (ulonglong)(uint)param_5 << 0x20;
    local_158._0_4_ = 0x3b9e6bb1;
    local_144 = 0;
  }
  local_1d0.memoryTypeIndex = param_3;
  local_1d0.allocationSize = param_2;
  if (local_1f0 != (void *)0x0) {
    *(FVulkanTrackInfo **)((longlong)local_1f0 + 8) = pFVar28;
    local_1d0.pNext._0_4_ = SUB84(local_1f0,0);
    local_1d0.pNext._4_4_ = (undefined4)((ulonglong)local_1f0 >> 0x20);
    if (param_2 != 0) {
      FVar20 = StatPtr_STAT_VulkanDedicatedMemory;
      if (StatPtr_STAT_VulkanDedicatedMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanDedicatedMemory>)0x0) {
        pFVar14 = ::FName::FName(&local_e8,"STAT_VulkanDedicatedMemory");
        FVar20 = (FThreadSafeStaticStat<FStat_STAT_VulkanDedicatedMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDedicatedMemory,
                            *pFVar14,L"Dedicated Memory","STATGROUP_VulkanMemoryRaw",
                            "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                            MCR_Physical);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar20,Add,param_2,false);
    }
    IncMetaStats(EVulkanAllocationMetaImageRenderTarget,uVar7);
    pFVar28 = (FVulkanTrackInfo *)CONCAT44(local_1d0.pNext._4_4_,local_1d0.pNext._0_4_);
  }
  pFVar19 = (FDeviceMemoryAllocation *)0x0;
  local_1a0 = 0;
  uStack_19c = 0;
  local_198.MemoryTypeIndex = 0;
  local_198._33_3_ = 0;
  local_198._36_4_ = 0;
  local_1b0.Data._0_4_ = 0;
  local_1b0.Data._4_4_ = 0;
  local_1b0.SizeOrLine = 0;
  local_1b0._12_4_ = 0;
  local_198.Size._0_4_ = 0;
  local_198.Size._4_4_ = 0;
  local_198.DeviceHandle._0_4_ = 0;
  local_198.DeviceHandle._4_4_ = 0;
  local_198.Handle._0_4_ = 0;
  local_198.Handle._4_4_ = 0;
  local_198.MappedPointer._0_4_ = 0;
  local_198.MappedPointer._4_4_ = 0;
  if (param_6) {
    local_198.MappedPointer._4_4_ = 0;
    local_198.MappedPointer._0_4_ = 0x10000000;
    local_198.Size._4_4_ = 0;
    local_198.DeviceHandle._0_4_ = SUB84(pFVar28,0);
    local_198.DeviceHandle._4_4_ = (undefined4)((ulonglong)pFVar28 >> 0x20);
    local_198.Handle._0_4_ = 0;
    local_198.Handle._4_4_ = 0;
    local_198.MemoryTypeIndex = 0;
    local_198._33_3_ = 0;
    local_198._36_4_ = 0;
    local_1b0.Data._0_4_ = 0x3b9be342;
    local_1b0.Data._4_4_ = 0;
    local_1b0.SizeOrLine = 0;
    local_1b0._12_4_ = 0;
    local_1a0 = 0;
    uStack_19c = 0;
    local_198.Size._0_4_ = 0x3b9be729;
    local_1d0.pNext = pFVar28;
    bVar6 = IsWindows8OrGreater();
    pFVar22 = &local_198;
    if (!bVar6) {
      pFVar22 = pFVar19;
    }
    local_1b0.SizeOrLine = (int)pFVar22;
    local_1b0._12_4_ = SUB84((ulonglong)pFVar22 >> 0x20,0);
    bVar6 = IsWindows8OrGreater();
    pFVar28 = &local_1b0;
    local_1a0 = (bVar6 ^ 1) * 2 + 2;
  }
  local_1d0.pNext = pFVar28;
  if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x1000000000) != 0) {
    local_198.Track.Data._0_4_ = 0x3b9bb460;
    local_198.Track.Data._4_4_ = 0;
    local_1d0.pNext = &local_198.Track;
    uStack_160 = 2;
    uStack_15c = 0;
    local_198.Track.SizeOrLine = (int)pFVar28;
    local_198.Track._12_4_ = SUB84((ulonglong)pFVar28 >> 0x20,0);
  }
  uVar7 = this->PrimaryHeapIndex;
  uVar8 = 0;
  if ((local_200 == uVar7) && (GVulkanFakeMemoryLimit != 0)) {
    uVar29 = uVar8;
    if ((int)uVar7 < (this->HeapInfos).ArrayNum) {
      uVar29 = ~uVar7 >> 0x1f;
    }
    if (uVar29 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar19 = (FDeviceMemoryAllocation *)(*pcVar3)();
        return pFVar19;
      }
    }
    if (*(ulonglong *)((this->HeapInfos).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20) <=
        (ulonglong)((longlong)GVulkanFakeMemoryLimit << 0x14)) goto LAB_145b0b700;
    local_1d8 = (VkDeviceMemory_T *)0x0;
    local_210 = VK_ERROR_OUT_OF_DEVICE_MEMORY;
LAB_145b0b6ce:
    if (param_1) {
      if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      goto LAB_145b0c12d;
    }
    local_1e8 = (FDeviceMemoryAllocation *)&u__;
    if (local_210 == VK_ERROR_OUT_OF_DEVICE_MEMORY) {
      local_1e8 = (FDeviceMemoryAllocation *)0x1506450d0;
    }
    else if (local_210 == VK_ERROR_OUT_OF_HOST_MEMORY) {
      local_1e8 = (FDeviceMemoryAllocation *)0x15069e388;
    }
    pFVar21 = GetGlobalLogSingleton();
    DumpRenderTargetPoolMemory((FOutputDevice *)pFVar21);
    FMemoryManager::DumpMemory(&this->Device->MemoryManager,true);
    pFVar21 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(pFVar21);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
LAB_145b0b8d4:
    local_1f8 = &this->DeviceHandle;
  }
  else {
LAB_145b0b700:
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"vkAllocateMemory");
    if (CpuChannel->Enabled < 0) {
      local_1f8 = &this->DeviceHandle;
      local_210 = (*VulkanDynamicAPI::vkAllocateMemory)
                            (*local_1f8,&local_1d0,&GAllocationCallbacks,&local_1d8);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId914,"vkAllocateMemory",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                 ,0x392);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId914);
      local_1f8 = &this->DeviceHandle;
      local_210 = (*VulkanDynamicAPI::vkAllocateMemory)
                            (*local_1f8,&local_1d0,&GAllocationCallbacks,&local_1d8);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    if (local_210 + VK_TIMEOUT < 2) goto LAB_145b0b6ce;
    if (local_210 != VK_SUCCESS) {
      VerifyVulkanResult(local_210,"Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x3ab);
      goto LAB_145b0b8d4;
    }
  }
  pFVar22 = ::operator_new(0x38);
  if (pFVar22 != (FDeviceMemoryAllocation *)0x0) {
    pFVar22->MemoryTypeIndex = 0;
    INSERT(*pbVar1,0,8,1);
    pFVar22->MemoryTypeIndex = (byte)uVar5;
    *(int3 *)&pFVar22->field_0x21 = SUB43(uVar5,1);
    INSERT(*pbVar1,0,0xc,1);
    pFVar22->MemoryTypeIndex = (byte)uVar5;
    *(int3 *)&pFVar22->field_0x21 = SUB43(uVar5,1);
    INSERT(*pbVar1,0,0xb,1);
    pFVar22->MemoryTypeIndex = (byte)uVar5;
    *(int3 *)&pFVar22->field_0x21 = SUB43(uVar5,1);
    INSERT(*pbVar1,0,10,1);
    pFVar22->MemoryTypeIndex = (byte)uVar5;
    *(int3 *)&pFVar22->field_0x21 = SUB43(uVar5,1);
    INSERT(*pbVar1,0,9,1);
    pFVar22->MemoryTypeIndex = (byte)uVar5;
    *(int3 *)&pFVar22->field_0x21 = SUB43(uVar5,1);
    pFVar22->Size = 0;
    pFVar22->DeviceHandle = (VkDevice_T *)0x0;
    pFVar22->Handle = (VkDeviceMemory_T *)0x0;
    pFVar22->MappedPointer = (void *)0x0;
    (pFVar22->Track).Data = (void *)0x0;
    (pFVar22->Track).SizeOrLine = 0;
    pFVar19 = pFVar22;
  }
  pFVar19->DeviceHandle = *local_1f8;
  pFVar19->Handle = local_1d8;
  local_1f8 = (VkDevice_T **)(ulonglong)local_200;
  pFVar19->Size = param_2;
  pFVar19->MemoryTypeIndex = (byte)local_200;
  INSERT(pFVar19->MemoryTypeIndex,
         (this->MemoryProperties).memoryTypes[(longlong)local_1f8].propertyFlags >> 1,8,1);
  pFVar19->MemoryTypeIndex = (byte)uVar5;
  *(int3 *)&pFVar19->field_0x21 = SUB43(uVar5,1);
  INSERT(pFVar19->MemoryTypeIndex,(this->MemoryProperties).memoryTypes[local_200].propertyFlags >> 2
         ,9,1);
  pFVar19->MemoryTypeIndex = (byte)uVar5;
  *(int3 *)&pFVar19->field_0x21 = SUB43(uVar5,1);
  bVar6 = local_1f0 != (void *)0x0;
  local_1f0 = (void *)-(longlong)local_1f0;
  INSERT(pFVar19->MemoryTypeIndex,(this->MemoryProperties).memoryTypes[local_200].propertyFlags >> 3
         ,10,1);
  pFVar19->MemoryTypeIndex = (byte)uVar5;
  *(int3 *)&pFVar19->field_0x21 = SUB43(uVar5,1);
  INSERT(pFVar19->MemoryTypeIndex,-(uint)bVar6 >> 0xc,0xc,1);
  pFVar19->MemoryTypeIndex = (byte)uVar5;
  *(int3 *)&pFVar19->field_0x21 = SUB43(uVar5,1);
  local_208 = pFVar19;
  local_1e8 = pFVar19;
  if (0 < GVulkanMemoryBackTrace) {
    param_7 = (pFVar19->Track).Data;
    if (((ulong64 *)param_7 == (ulong64 *)0x0) || (-1 < (pFVar19->Track).SizeOrLine)) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (longlong)GVulkanMemoryBackTrace;
      uVar23 = SUB168(ZEXT816(8) * auVar4,0);
      if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
        uVar23 = 0xffffffffffffffff;
      }
      param_7 = operator_new__(uVar23);
    }
    uVar7 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                      ((ulong64 *)param_7,GVulkanMemoryBackTrace,(void *)0x0);
    param_8 = -uVar7;
  }
  (local_1e8->Track).Data = param_7;
  (local_1e8->Track).SizeOrLine = param_8;
  uVar29 = this->NumAllocations + 1;
  this->NumAllocations = uVar29;
  uVar7 = this->PeakNumAllocations;
  if (this->PeakNumAllocations < uVar29) {
    uVar7 = uVar29;
  }
  this->PeakNumAllocations = uVar7;
  if (((uVar29 == (this->Device->GpuProps).limits.maxMemoryAllocationCount) &&
      (GVulkanSingleAllocationPerResource == 0)) && (2 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  uVar7 = ((VkPhysicalDeviceMemoryProperties *)(&this->MemoryBudget + 1))->memoryTypes
          [(longlong)local_1f8].heapIndex;
  local_1f0 = (void *)CONCAT44(local_1f0._4_4_,uVar7);
  uVar30 = ~uVar7 >> 0x1f;
  uVar29 = uVar8;
  if ((int)uVar7 < (this->HeapInfos).ArrayNum) {
    uVar29 = uVar30;
  }
  if (uVar29 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar19 = (FDeviceMemoryAllocation *)(*pcVar3)();
      return pFVar19;
    }
    uVar7 = (uint)local_1f0;
  }
  local_1e8 = (FDeviceMemoryAllocation *)(longlong)(int)uVar7;
  local_1f8 = (VkDevice_T **)((longlong)local_1e8 * 0x20);
  pFVar33 = (this->HeapInfos).AllocatorInstance.Data + 0x10 + (longlong)local_1f8;
  if ((*(FDeviceMemoryAllocation ***)&pFVar33->field_0x0 <= &local_208) &&
     (&local_208 < *(FDeviceMemoryAllocation ***)&pFVar33->field_0x0 + *(int *)(pFVar33 + 0xc))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar19 = (FDeviceMemoryAllocation *)(*pcVar3)();
      return pFVar19;
    }
  }
  iVar9 = *(int *)&pFVar33[8].field_0x0;
  if (iVar9 == *(int *)(pFVar33 + 0xc)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 0xc));
  }
  *(int *)&pFVar33[8].field_0x0 = iVar9 + 1;
  *(FDeviceMemoryAllocation **)(*(longlong *)&pFVar33->field_0x0 + (longlong)iVar9 * 8) = local_208;
  uVar7 = uVar8;
  if ((int)(uint)local_1f0 < (this->HeapInfos).ArrayNum) {
    uVar7 = uVar30;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar19 = (FDeviceMemoryAllocation *)(*pcVar3)();
      return pFVar19;
    }
  }
  pFVar33 = (this->HeapInfos).AllocatorInstance.Data + (longlong)local_1f8;
  *(ulong64 *)pFVar33 = *(longlong *)pFVar33 + param_2;
  if ((int)(uint)local_1f0 < (this->HeapInfos).ArrayNum) {
    uVar8 = uVar30;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar19 = (FDeviceMemoryAllocation *)(*pcVar3)();
      return pFVar19;
    }
  }
  uVar24 = *(ulonglong *)((longlong)local_1f8 + (longlong)(this->HeapInfos).AllocatorInstance.Data);
  uVar7 = 0;
  if ((int)(uint)local_1f0 < (this->HeapInfos).ArrayNum) {
    uVar7 = uVar30;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar19 = (FDeviceMemoryAllocation *)(*pcVar3)();
      return pFVar19;
    }
  }
  uVar2 = *(ulonglong *)((this->HeapInfos).AllocatorInstance.Data + 8 + (longlong)local_1f8);
  if (uVar24 < uVar2) {
    uVar24 = uVar2;
  }
  uVar7 = 0;
  if ((int)(uint)local_1f0 < (this->HeapInfos).ArrayNum) {
    uVar7 = uVar30;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar19 = (FDeviceMemoryAllocation *)(*pcVar3)();
      return pFVar19;
    }
  }
  *(ulonglong *)((this->HeapInfos).AllocatorInstance.Data + 8 + (longlong)local_1f8) = uVar24;
  FLLMScope::FLLMScope(local_1e0,VideoRecording|EngineMisc,false,None,Platform,true);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc
              (this_00,Platform,local_208->Handle,param_2,GraphicsPlatform,System,true);
  }
  FLLMPauseScope::FLLMPauseScope(local_140,VideoRecording|ProgramSize,false,param_2,Default,None);
  FLLMPauseScope::~FLLMPauseScope(local_140);
  FVar25 = StatPtr_STAT_VulkanNumPhysicalMemAllocations;
  if (StatPtr_STAT_VulkanNumPhysicalMemAllocations ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumPhysicalMemAllocations>)0x0) {
    pFVar14 = ::FName::FName(&local_e0,"STAT_VulkanNumPhysicalMemAllocations");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPhysicalMemAllocations>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPhysicalMemAllocations,
                        *pFVar14,L"Num Physical Mem Allocations","STATGROUP_VulkanRHI",
                        "STATCAT_Advanced",L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid
                       );
  }
  FThreadStats::AddMessage<__int64>(*(FName *)FVar25,Add,1,false);
  switch(local_200) {
  case 0:
    if (param_2 != 0) {
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemory0;
      if (StatPtr_STAT_VulkanMemory0 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0>)0x0) {
        pFVar14 = ::FName::FName(&local_d8,"STAT_VulkanMemory0");
        pwVar31 = L"MemoryPool 0";
        this_02 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory0;
LAB_145b0c02e:
        FVar26 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)this_02,*pFVar14,pwVar31,
                            "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true
                            ,false,ST_int64,false,true,MCR_Physical);
      }
LAB_145b0c06b:
      FThreadStats::AddMessage<__int64>(*(FName *)FVar26,Add,param_2,false);
      FVar27 = StatPtr_STAT_VulkanMemoryTotal;
      if (StatPtr_STAT_VulkanMemoryTotal == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryTotal>)0x0
         ) {
        pFVar14 = ::FName::FName(&local_a0,"STAT_VulkanMemoryTotal");
        FVar27 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryTotal>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryTotal,*pFVar14,
                            L"_Total Allocated","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                            L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar27,Add,param_2,false);
    }
    break;
  case 1:
    if (param_2 != 0) {
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemory1;
      if (StatPtr_STAT_VulkanMemory1 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1>)0x0) {
        pFVar14 = ::FName::FName(&local_d0,"STAT_VulkanMemory1");
        pwVar31 = L"MemoryPool 1";
        this_02 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory1;
        goto LAB_145b0c02e;
      }
      goto LAB_145b0c06b;
    }
    break;
  case 2:
    if (param_2 != 0) {
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemory2;
      if (StatPtr_STAT_VulkanMemory2 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory2>)0x0) {
        pFVar14 = ::FName::FName(&local_c8,"STAT_VulkanMemory2");
        pwVar31 = L"MemoryPool 2";
        this_02 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory2;
        goto LAB_145b0c02e;
      }
      goto LAB_145b0c06b;
    }
    break;
  case 3:
    if (param_2 != 0) {
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemory3;
      if (StatPtr_STAT_VulkanMemory3 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory3>)0x0) {
        pFVar14 = ::FName::FName(&local_c0,"STAT_VulkanMemory3");
        pwVar31 = L"MemoryPool 3";
        this_02 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory3;
        goto LAB_145b0c02e;
      }
      goto LAB_145b0c06b;
    }
    break;
  case 4:
    if (param_2 != 0) {
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemory4;
      if (StatPtr_STAT_VulkanMemory4 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory4>)0x0) {
        pFVar14 = ::FName::FName(&local_90,"STAT_VulkanMemory4");
        pwVar31 = L"MemoryPool 4";
        this_02 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory4;
        goto LAB_145b0c02e;
      }
      goto LAB_145b0c06b;
    }
    break;
  case 5:
    if (param_2 != 0) {
      FVar26 = StatPtr_STAT_VulkanMemory5;
      if (StatPtr_STAT_VulkanMemory5 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)0x0) {
        pFVar14 = ::FName::FName(&local_b0,"STAT_VulkanMemory5");
        pwVar31 = L"MemoryPool 5";
        this_02 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory5;
        goto LAB_145b0c02e;
      }
      goto LAB_145b0c06b;
    }
    break;
  default:
    if (param_2 != 0) {
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemoryX;
      if (StatPtr_STAT_VulkanMemoryX == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX>)0x0) {
        pFVar14 = ::FName::FName(&local_a8,"STAT_VulkanMemoryX");
        pwVar31 = L"MemoryPool (remaining)";
        this_02 = &StatPtr_STAT_VulkanMemoryX;
        goto LAB_145b0c02e;
      }
      goto LAB_145b0c06b;
    }
  }
  pFVar19 = local_208;
  FLLMScope::~FLLMScope(local_1e0);
LAB_145b0c12d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return pFVar19;
}

// Deinit @ 145b13a60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall VulkanRHI::FDeviceMemoryManager::Deinit(FDeviceMemoryManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  TrimMemory(this,true);
  uVar5 = 0;
  if ((this->HeapInfos).ArrayNum < 1) {
    this->NumAllocations = 0;
    return;
  }
  lVar4 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar5 < (this->HeapInfos).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)((this->HeapInfos).AllocatorInstance.Data + lVar4 + 0x18) != 0) {
      if (2 < (byte)LogVulkanRHI._0_1_) {
        uVar3 = 0;
        if ((int)uVar5 < (this->HeapInfos).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      DumpMemory(this);
    }
    uVar5 = uVar5 + 1;
    lVar4 = lVar4 + 0x20;
  } while ((int)uVar5 < (this->HeapInfos).ArrayNum);
  this->NumAllocations = 0;
  return;
}

// DumpMemory @ 145b15070

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall VulkanRHI::FDeviceMemoryManager::DumpMemory(FDeviceMemoryManager *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_5c;
  ulonglong uVar14;
  
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  PrintMemInfo(this);
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  uVar14 = 0;
  uVar19 = 0;
  local_res20 = 0;
  uVar13 = 0;
  uVar17 = uVar14;
  uVar11 = uVar14;
  if (0 < (this->HeapInfos).ArrayNum) {
    do {
      uVar5 = (uint)uVar11;
      uVar10 = uVar19;
      if ((int)uVar5 < (this->HeapInfos).ArrayNum) {
        uVar10 = ~uVar5 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->HeapInfos).AllocatorInstance.Data;
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      if ((0 < *(int *)(pFVar1 + uVar17 + 0x18)) && (3 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar11 = uVar14;
      if (0 < *(int *)(pFVar1 + uVar17 + 0x18)) {
        do {
          uVar4 = (uint)uVar11;
          uVar10 = uVar13;
          if ((int)uVar4 < *(int *)(pFVar1 + uVar17 + 0x18)) {
            uVar10 = ~uVar4 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (3 < (byte)LogVulkanRHI._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          }
          uVar11 = (ulonglong)(uVar4 + 1);
          uVar5 = local_res20;
        } while ((int)(uVar4 + 1) < *(int *)(pFVar1 + uVar17 + 0x18));
      }
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      local_res20 = uVar5 + 1;
      uVar17 = uVar17 + 0x20;
      uVar11 = (ulonglong)local_res20;
    } while ((int)local_res20 < (this->HeapInfos).ArrayNum);
  }
  if ((3 < (byte)LogVulkanRHI._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
     3 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Free_Blocks_in__1510bdbd0,
               (FLogCategoryBase *)&LogVulkanRHI);
  }
  uVar10 = *(uint *)&(this->Allocations).field_0x28;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Allocations).field_0x10;
  uVar4 = 1;
  uVar5 = uVar13;
  if (uVar10 != 0) {
    puVar16 = *(uint **)&(this->Allocations).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_a0.Array;
    }
    uVar5 = *puVar16;
    uVar17 = uVar14;
    uVar13 = 0;
    uVar19 = 0;
    while (uVar5 == 0) {
      iVar8 = (int)uVar17;
      uVar13 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)uVar13;
      uVar19 = iVar8 + 1;
      uVar17 = (ulonglong)uVar19;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_145b15434;
      uVar5 = puVar16[(longlong)iVar8 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar14 = (ulonglong)uVar4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar5 = (uVar13 - 1) + (int)lVar7;
    if ((int)uVar10 < (int)uVar5) {
LAB_145b15434:
      uVar5 = uVar10;
    }
  }
  puVar18 = &(this->Allocations).field_0x10;
  uVar6 = *(uint *)&(this->Allocations).field_0x28;
  TStack_a0._padding_ = CONCAT44(uVar4,uVar19);
  uVar19 = uVar6 & 0xffffffe0;
  TStack_a0.CurrentBitIndex = uVar5;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar6 >> 5;
  TStack_a0._28_4_ = local_5c;
  TStack_a0.BaseBitIndex = uVar13;
  uStack_80 = CONCAT44(uStack_ac,
                       *(int *)&(this->Allocations).field_0x8 -
                       *(int *)&(this->Allocations).field_0x34);
  if ((((int)uVar6 < 0) || ((int)uVar10 < (int)uVar6)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar13 = *(uint *)&(this->Allocations).field_0x28;
  if (uVar6 != uVar13) {
    puVar15 = *(undefined1 **)&(this->Allocations).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar18;
    }
    uVar10 = -1 << ((byte)uVar6 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar8 * 4);
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar8;
      uVar19 = uVar19 + 0x20;
      iVar8 = iVar8 + 1;
      uVar6 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_145b15530;
      uVar10 = *(uint *)(puVar15 + lVar7 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar6 = (int)lVar7 + -1 + uVar19;
    if ((int)uVar13 < (int)uVar6) {
      uVar6 = uVar13;
    }
  }
LAB_145b15530:
  while( true ) {
    if (*(int *)&(this->Allocations).field_0x8 - *(int *)&(this->Allocations).field_0x34 !=
        (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_a0.CurrentBitIndex == uVar6) &&
       (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) break;
    lVar12 = (longlong)TStack_a0.CurrentBitIndex * 0x38 + *(longlong *)&this->Allocations;
    iVar8 = *(int *)(lVar12 + 0x28);
    lVar7 = *(longlong *)(lVar12 + 0x20);
    lVar9 = lVar7 + (longlong)iVar8 * 0x10;
    while( true ) {
      if (*(int *)(lVar12 + 0x28) != iVar8) {
        `TCheckedPointerIterator<VulkanRHI::FDeviceMemoryBlock::FFreeBlock,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (lVar7 == lVar9) break;
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      lVar7 = lVar7 + 0x10;
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  return;
}

// Free @ 145b1a6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
VulkanRHI::FDeviceMemoryManager::Free(FDeviceMemoryManager *this,FDeviceMemoryAllocation **param_1)

{
  TArray<VulkanRHI::FDeviceMemoryBlock::FFreeBlock,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar3;
  FDeviceMemoryAllocation *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanDedicatedMemory> FVar12;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory5> FVar13;
  FDeviceMemoryBlock *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved> FVar15;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved> FVar16;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *this_00;
  uint uVar17;
  ulong64 uVar18;
  uint uVar19;
  wchar_t *pwVar20;
  bool bVar21;
  undefined1 auStackY_148 [32];
  FDeviceMemoryAllocation *local_e0;
  uint uStack_d8;
  undefined4 uStack_d4;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FDeviceMemoryBlockKey local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FDeviceMemoryManager_Free");
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId996,"FDeviceMemoryManager_Free",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0x3e4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId996);
  }
  lpCriticalSection = &this->DeviceMemLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*param_1 == (FDeviceMemoryAllocation *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,999,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((*param_1)->Handle == (VkDeviceMemory_T *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation->Handle != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,1000,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((*param_1)->bFreedBySystem != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Allocation->bFreedBySystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x3e9,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*param_1)->bDedicatedMemory != 0) {
    uVar18 = (*param_1)->Size;
    if (uVar18 != 0) {
      FVar12 = StatPtr_STAT_VulkanDedicatedMemory;
      if (StatPtr_STAT_VulkanDedicatedMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanDedicatedMemory>)0x0) {
        pFVar11 = ::FName::FName(&local_d0,"STAT_VulkanDedicatedMemory");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanDedicatedMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanDedicatedMemory,
                            *pFVar11,L"Dedicated Memory","STATGROUP_VulkanMemoryRaw",
                            "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                            MCR_Physical);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar12,Subtract,uVar18,false);
    }
    DecMetaStats(EVulkanAllocationMetaImageRenderTarget,(uint)(*param_1)->Size);
  }
  pFVar4 = *param_1;
  switch(*(uint *)&pFVar4->MemoryTypeIndex & 0xff) {
  case 0:
    uVar18 = pFVar4->Size;
    if (uVar18 != 0) {
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemory0;
      if (StatPtr_STAT_VulkanMemory0 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0>)0x0) {
        pFVar11 = ::FName::FName(&local_c8,"STAT_VulkanMemory0");
        pwVar20 = L"MemoryPool 0";
        this_00 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory0;
LAB_145b1aac1:
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)this_00,*pFVar11,pwVar20,
                            "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",L"Vulkan Memory Raw",true
                            ,false,ST_int64,false,true,MCR_Physical);
      }
LAB_145b1aafe:
      FThreadStats::AddMessage<__int64>(*(FName *)FVar13,Subtract,uVar18,false);
    }
    break;
  case 1:
    uVar18 = pFVar4->Size;
    if (uVar18 != 0) {
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemory1;
      if (StatPtr_STAT_VulkanMemory1 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1>)0x0) {
        pFVar11 = ::FName::FName(&local_c0,"STAT_VulkanMemory1");
        pwVar20 = L"MemoryPool 1";
        this_00 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory1;
        goto LAB_145b1aac1;
      }
      goto LAB_145b1aafe;
    }
    break;
  case 2:
    uVar18 = pFVar4->Size;
    if (uVar18 != 0) {
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemory2;
      if (StatPtr_STAT_VulkanMemory2 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory2>)0x0) {
        pFVar11 = ::FName::FName(&local_b8,"STAT_VulkanMemory2");
        pwVar20 = L"MemoryPool 2";
        this_00 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory2;
        goto LAB_145b1aac1;
      }
      goto LAB_145b1aafe;
    }
    break;
  case 3:
    uVar18 = pFVar4->Size;
    if (uVar18 != 0) {
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemory3;
      if (StatPtr_STAT_VulkanMemory3 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory3>)0x0) {
        pFVar11 = ::FName::FName(&local_b0,"STAT_VulkanMemory3");
        pwVar20 = L"MemoryPool 3";
        this_00 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory3;
        goto LAB_145b1aac1;
      }
      goto LAB_145b1aafe;
    }
    break;
  case 4:
    uVar18 = pFVar4->Size;
    if (uVar18 != 0) {
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemory4;
      if (StatPtr_STAT_VulkanMemory4 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory4>)0x0) {
        pFVar11 = ::FName::FName(&local_a8,"STAT_VulkanMemory4");
        pwVar20 = L"MemoryPool 4";
        this_00 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory4;
        goto LAB_145b1aac1;
      }
      goto LAB_145b1aafe;
    }
    break;
  case 5:
    uVar18 = pFVar4->Size;
    if (uVar18 != 0) {
      FVar13 = StatPtr_STAT_VulkanMemory5;
      if (StatPtr_STAT_VulkanMemory5 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)0x0) {
        pFVar11 = ::FName::FName(&local_a0,"STAT_VulkanMemory5");
        pwVar20 = L"MemoryPool 5";
        this_00 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX> *)&StatPtr_STAT_VulkanMemory5;
        goto LAB_145b1aac1;
      }
      goto LAB_145b1aafe;
    }
    break;
  default:
    uVar18 = pFVar4->Size;
    if (uVar18 != 0) {
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5>)StatPtr_STAT_VulkanMemoryX;
      if (StatPtr_STAT_VulkanMemoryX == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryX>)0x0) {
        pFVar11 = ::FName::FName(&local_98,"STAT_VulkanMemoryX");
        pwVar20 = L"MemoryPool (remaining)";
        this_00 = &StatPtr_STAT_VulkanMemoryX;
        goto LAB_145b1aac1;
      }
      goto LAB_145b1aafe;
    }
  }
  pFVar4 = *param_1;
  uVar3._0_1_ = pFVar4->MemoryTypeIndex;
  uVar3._1_3_ = *(undefined3 *)&pFVar4->field_0x21;
  if (ZPULL(uVar3,0xc,1) == 0) {
    uVar18 = pFVar4->Size;
    local_50.MemoryTypeIndex = uVar3 & 0xff;
    local_50.BlockSize = uVar18;
    uVar8 = (*FCrc::MemCrc32Func)(&local_50.BlockSize,8,0);
    uVar9 = (*FCrc::MemCrc32Func)(&local_50,4,0);
    uVar19 = uVar9 - uVar8 ^ uVar8 >> 0xd;
    uVar9 = (-0x61c88647 - uVar19) - uVar8 ^ uVar19 << 8;
    uVar17 = (uVar8 - uVar9) - uVar19 ^ uVar9 >> 0xd;
    uVar19 = (uVar19 - uVar17) - uVar9 ^ uVar17 >> 0xc;
    uVar8 = (uVar9 - uVar19) - uVar17 ^ uVar19 << 0x10;
    uVar9 = (uVar17 - uVar8) - uVar19 ^ uVar8 >> 5;
    uVar17 = (uVar19 - uVar9) - uVar8 ^ uVar9 >> 3;
    uVar8 = (uVar8 - uVar17) - uVar9 ^ uVar17 << 10;
    pFVar14 = TMapBase<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,0>_>
              ::FindOrAddImpl<VulkanRHI::FDeviceMemoryBlockKey_const_&>
                        ((TMapBase<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock,0>_>
                          *)this,uVar8 >> 0xf ^ (uVar9 - uVar8) - uVar17,&local_50);
    local_e0 = *param_1;
    pTVar1 = &pFVar14->Allocations;
    uStack_d8 = GFrameNumberRenderThread;
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_e0) &&
        ((FScriptContainerElement *)&local_e0 <
         pFVar5 + (longlong)(pFVar14->Allocations).ArrayMax * 0x10)) &&
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
    iVar10 = (pFVar14->Allocations).ArrayNum;
    piVar2 = &(pFVar14->Allocations).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (pFVar14->Allocations).ArrayNum = iVar10 + 1;
    pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(FDeviceMemoryAllocation **)pFVar5 = local_e0;
    *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_d4,uStack_d8);
    switch(*(uint *)&(*param_1)->MemoryTypeIndex & 0xff) {
    case 0:
      if (uVar18 == 0) goto LAB_145b1b109;
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
               StatPtr_STAT_VulkanMemory0Reserved;
      if (StatPtr_STAT_VulkanMemory0Reserved ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0Reserved>)0x0) {
        pFVar11 = ::FName::FName(&local_90,"STAT_VulkanMemory0Reserved");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory0Reserved,
                            *pFVar11,L"MemoryPool 0 Reserved","STATGROUP_VulkanMemoryRaw",
                            "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                            MCR_Physical);
      }
      break;
    case 1:
      if (uVar18 == 0) goto LAB_145b1b109;
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
               StatPtr_STAT_VulkanMemory1Reserved;
      if (StatPtr_STAT_VulkanMemory1Reserved ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1Reserved>)0x0) {
        pFVar11 = ::FName::FName(&local_88,"STAT_VulkanMemory1Reserved");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory1Reserved,
                            *pFVar11,L"MemoryPool 1 Reserved","STATGROUP_VulkanMemoryRaw",
                            "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                            MCR_Physical);
      }
      break;
    case 2:
      if (uVar18 == 0) goto LAB_145b1b109;
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
               StatPtr_STAT_VulkanMemory2Reserved;
      if (StatPtr_STAT_VulkanMemory2Reserved ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanMemory2Reserved>)0x0) {
        pFVar11 = ::FName::FName(&local_80,"STAT_VulkanMemory2Reserved");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory2Reserved,
                            *pFVar11,L"MemoryPool 2 Reserved","STATGROUP_VulkanMemoryRaw",
                            "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                            MCR_Physical);
      }
      break;
    case 3:
      if (uVar18 == 0) goto LAB_145b1b109;
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
               StatPtr_STAT_VulkanMemory3Reserved;
      if (StatPtr_STAT_VulkanMemory3Reserved ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanMemory3Reserved>)0x0) {
        pFVar11 = ::FName::FName(&local_78,"STAT_VulkanMemory3Reserved");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory3Reserved,
                            *pFVar11,L"MemoryPool 3 Reserved","STATGROUP_VulkanMemoryRaw",
                            "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                            MCR_Physical);
      }
      break;
    case 4:
      if (uVar18 == 0) goto LAB_145b1b109;
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
               StatPtr_STAT_VulkanMemory4Reserved;
      if (StatPtr_STAT_VulkanMemory4Reserved ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanMemory4Reserved>)0x0) {
        pFVar11 = ::FName::FName(&local_70,"STAT_VulkanMemory4Reserved");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory4Reserved,
                            *pFVar11,L"MemoryPool 4 Reserved","STATGROUP_VulkanMemoryRaw",
                            "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                            MCR_Physical);
      }
      break;
    case 5:
      if (uVar18 == 0) goto LAB_145b1b109;
      FVar15 = StatPtr_STAT_VulkanMemory5Reserved;
      if (StatPtr_STAT_VulkanMemory5Reserved ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)0x0) {
        pFVar11 = ::FName::FName(&local_68,"STAT_VulkanMemory5Reserved");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory5Reserved,
                            *pFVar11,L"MemoryPool 5 Reserved","STATGROUP_VulkanMemoryRaw",
                            "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                            MCR_Physical);
      }
      break;
    default:
      if (uVar18 == 0) goto LAB_145b1b109;
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
               StatPtr_STAT_VulkanMemoryXReserved;
      if (StatPtr_STAT_VulkanMemoryXReserved ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved>)0x0) {
        pFVar11 = ::FName::FName(&local_60,"STAT_VulkanMemoryXReserved");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryXReserved,
                            *pFVar11,L"MemoryPool (remaining) Reserved","STATGROUP_VulkanMemoryRaw",
                            "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                            MCR_Physical);
      }
    }
    FThreadStats::AddMessage<__int64>(*(FName *)FVar15,Add,uVar18,false);
    FVar16 = StatPtr_STAT_VulkanMemoryReserved;
    if (StatPtr_STAT_VulkanMemoryReserved ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved>)0x0) {
      pFVar11 = ::FName::FName(&local_58,"STAT_VulkanMemoryReserved");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryReserved,*pFVar11,
                          L"_Reserved","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FThreadStats::AddMessage<__int64>(*(FName *)FVar16,Add,uVar18,false);
  }
  else {
    FreeInternal(this,pFVar4);
  }
LAB_145b1b109:
  *param_1 = (FDeviceMemoryAllocation *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FreeInternal @ 145b1b670

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
VulkanRHI::FDeviceMemoryManager::FreeInternal
          (FDeviceMemoryManager *this,FDeviceMemoryAllocation *param_1)

{
  FScriptContainerElement *pFVar1;
  ulong64 uVar2;
  FName FVar3;
  code *pcVar4;
  undefined4 uVar5;
  FDeviceMemoryAllocation *pFVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryTotal> FVar11;
  FLowLevelMemTracker *this_00;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPhysicalMemAllocations> FVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  undefined8 *puVar13;
  FNameEntryId FVar14;
  uint local_res8;
  uint uStackX_c;
  FDeviceMemoryAllocation *local_res10;
  FMemScope local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FLLMPauseScope local_58;
  undefined8 local_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar2 = param_1->Size;
  local_res10 = param_1;
  if (uVar2 != 0) {
    FVar11 = StatPtr_STAT_VulkanMemoryTotal;
    if (StatPtr_STAT_VulkanMemoryTotal == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryTotal>)0x0)
    {
      pFVar10 = ::FName::FName(&local_68,"STAT_VulkanMemoryTotal");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryTotal>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryTotal,*pFVar10,
                          L"_Total Allocated","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar11;
    local_res8 = (uint)FVar3.ComparisonIndex.Value;
    uStackX_c = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Subtract,uVar2,false);
  }
  (*VulkanDynamicAPI::vkFreeMemory)(this->DeviceHandle,local_res10->Handle,&GAllocationCallbacks);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelFree(this_00,Platform,local_res10->Handle,System,true);
  }
  FLLMPauseScope::FLLMPauseScope
            (&local_58,VideoRecording|ProgramSize,false,-local_res10->Size,Default,None);
  FLLMPauseScope::~FLLMPauseScope(&local_58);
  this->NumAllocations = this->NumAllocations - 1;
  FVar12 = StatPtr_STAT_VulkanNumPhysicalMemAllocations;
  if (StatPtr_STAT_VulkanNumPhysicalMemAllocations ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumPhysicalMemAllocations>)0x0) {
    pFVar10 = ::FName::FName(&local_60,"STAT_VulkanNumPhysicalMemAllocations");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPhysicalMemAllocations>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPhysicalMemAllocations,
                        *pFVar10,L"Num Physical Mem Allocations","STATGROUP_VulkanRHI",
                        "STATCAT_Advanced",L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid
                       );
  }
  FVar3 = *(FName *)FVar12;
  FVar14 = FVar3.ComparisonIndex.Value;
  uVar8 = FVar3.Number;
  local_res8 = FVar14.Value;
  uStackX_c = uVar8;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    uStack_3c = uVar8 & 0xffffbfff | 0xb000;
    local_48 = 1;
    local_res20 = FVar3;
    uStack_40 = FVar14.Value;
    FLLMScope::FLLMScope((FLLMScope *)&local_res8,Stats,false,None,Default,true);
    FMemScope::FMemScope(&local_res18,Stats,true);
    this_01->MemoryMessageScope = this_01->MemoryMessageScope + 1;
    puVar13 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                        (0x10,&(this_01->Packet).StatMessages);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = local_48;
      puVar13[1] = CONCAT44(uStack_3c,uStack_40);
    }
    this_01->MemoryMessageScope = this_01->MemoryMessageScope + -1;
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    FStatsTrace::Add(&local_res20,-1);
    if (this_01->ScopeCount == 0) {
      FThreadStats::Flush(this_01,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_01,false,false);
    }
  }
  uVar2 = local_res10->Size;
  uVar8 = ((VkPhysicalDeviceMemoryProperties *)(&this->MemoryBudget + 1))->memoryTypes
          [local_res10->MemoryTypeIndex].heapIndex;
  uVar9 = 0;
  if ((int)uVar8 < (this->HeapInfos).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (this->HeapInfos).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
  *(ulong64 *)pFVar1 = *(longlong *)pFVar1 - uVar2;
  uVar9 = 0;
  if ((int)uVar8 < (this->HeapInfos).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TArray<VulkanRHI::FDeviceMemoryAllocation_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            ((TArray<VulkanRHI::FDeviceMemoryAllocation_*,TSizedDefaultAllocator<32>_> *)
             ((this->HeapInfos).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20 + 0x10),
             &local_res10,Default);
  pFVar6 = local_res10;
  INSERT(local_res10->MemoryTypeIndex,1,0xb,1);
  local_res10->MemoryTypeIndex = (byte)uVar5;
  *(int3 *)&local_res10->field_0x21 = SUB43(uVar5,1);
  if (local_res10 != (FDeviceMemoryAllocation *)0x0) {
    if (local_res10->bFreedBySystem == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFreedBySystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x522,L"Memory has to released calling FDeviceMemory::Free()!");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    ::operator_delete(pFVar6,0x38);
  }
  return;
}

// GetBaseHeapSize @ 145b1ccd0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

ulong64 __thiscall
VulkanRHI::FDeviceMemoryManager::GetBaseHeapSize(FDeviceMemoryManager *this,uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = (this->MemoryProperties).memoryHeaps[param_1].size;
  if (((GVulkanFakeMemoryLimit != 0) && (this->PrimaryHeapIndex == param_1)) &&
     ((ulonglong)((longlong)GVulkanFakeMemoryLimit << 0x14) < uVar1)) {
    uVar1 = (longlong)GVulkanFakeMemoryLimit << 0x14;
  }
  return uVar1;
}

// GetEvictedMemoryProperties @ 145b1dc00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

uint __thiscall
VulkanRHI::FDeviceMemoryManager::GetEvictedMemoryProperties(FDeviceMemoryManager *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (this->Device->VendorId == Amd) {
    uVar1 = 2;
  }
  return uVar1;
}

// GetHeapIndex @ 145b1df10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

uint __thiscall
VulkanRHI::FDeviceMemoryManager::GetHeapIndex(FDeviceMemoryManager *this,uint param_1)

{
  return ((VkPhysicalDeviceMemoryProperties *)(&this->MemoryBudget + 1))->memoryTypes[param_1].
         heapIndex;
}

// GetMemoryDump @ 145b1dfe0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
VulkanRHI::FDeviceMemoryManager::GetMemoryDump
          (FDeviceMemoryManager *this,
          TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  code *pcVar5;
  TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_> *pTVar6;
  FDeviceMemoryManager *pFVar7;
  bool bVar8;
  int iVar9;
  VkMemoryType *pVVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint *puVar17;
  VkMemoryHeap *pVVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 local_res8 [8];
  TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  ulong64 local_118;
  ulong64 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f8;
  undefined4 uStack_f4;
  VkMemoryHeap *local_e8;
  longlong local_e0;
  int local_d8;
  FDeviceMemoryManager *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  FDeviceMemoryManager *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res10 = param_1;
  TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_>::SetNum(param_1,0,Default);
  uVar23 = 0;
  if (0 < (this->HeapInfos).ArrayNum) {
    pVVar18 = (this->MemoryProperties).memoryHeaps;
    local_e0 = 0;
    do {
      lVar12 = local_e0;
      puVar21 = &(this->Allocations).field_0x10;
      local_138 = 0;
      lStack_130 = 0;
      local_128 = 0;
      lStack_120 = 0;
      local_118 = 0;
      uVar13 = 0;
      if ((int)uVar23 < (this->HeapInfos).ArrayNum) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_e8 = pVVar18;
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->HeapInfos).AllocatorInstance.Data;
      uVar13 = (this->MemoryProperties).memoryTypeCount;
      uVar11 = (ulonglong)uVar13;
      local_118 = pVVar18->size;
      if (uVar13 != 0) {
        pVVar10 = (this->MemoryProperties).memoryTypes;
        do {
          if (pVVar10->heapIndex == uVar23) {
            local_f8 = local_f8 | pVVar10->propertyFlags;
          }
          pVVar10 = pVVar10 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar13 = 0;
      if (0 < *(int *)(pFVar3 + lVar12 + 0x18)) {
        lVar19 = 0;
        do {
          uVar16 = 0;
          if ((int)uVar13 < *(int *)(pFVar3 + lVar12 + 0x18)) {
            uVar16 = ~uVar13 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar13 = uVar13 + 1;
          puVar15 = (undefined8 *)(lVar19 + *(longlong *)(pFVar3 + lVar12 + 0x10));
          lVar19 = lVar19 + 8;
          local_138 = local_138 + 1;
          lStack_120 = lStack_120 + *(longlong *)*puVar15;
          uStack_110 = uStack_110 + 1;
        } while ((int)uVar13 < *(int *)(pFVar3 + lVar12 + 0x18));
      }
      iVar9 = *(int *)&(this->Allocations).field_0x28;
      iStack_c8 = 0;
      local_b0 = 0;
      uStack_c4 = 1;
      iStack_b4 = 0;
      if (iVar9 != 0) {
        puVar17 = *(uint **)&(this->Allocations).field_0x20;
        puVar22 = (uint *)puVar21;
        if (puVar17 != (uint *)0x0) {
          puVar22 = puVar17;
        }
        uVar13 = *puVar22;
        while (uVar13 == 0) {
          lVar12 = (longlong)iStack_c8;
          local_b0 = local_b0 + 0x20;
          iStack_c8 = iStack_c8 + 1;
          iStack_b4 = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_145b1e220;
          uVar13 = puVar22[lVar12 + 1];
        }
        uStack_c4 = -uVar13 & uVar13;
        uVar11 = (ulonglong)uStack_c4 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res20 = (int)lVar12;
        iStack_b4 = local_res20 + -1 + local_b0;
        if (iVar9 < iStack_b4) {
          iStack_b4 = iVar9;
        }
      }
LAB_145b1e220:
      uVar13 = *(uint *)&(this->Allocations).field_0x28;
      uStack_ac = local_54;
      uVar16 = uVar13 & 0xffffffe0;
      iStack_a8 = *(int *)&(this->Allocations).field_0x8 - *(int *)&(this->Allocations).field_0x34;
      TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
      uStack_b8 = 0xffffffff;
      TStack_98.CurrentBitIndex = iStack_b4;
      TStack_98.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_98._28_4_ = local_54;
      TStack_98.BaseBitIndex = local_b0;
      uStack_78 = CONCAT44(uStack_a4,iStack_a8);
      local_d0 = this;
      local_c0 = puVar21;
      local_a0 = this;
      TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar21;
      if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar2 = *(uint *)&(this->Allocations).field_0x28;
      if (uVar13 != uVar2) {
        puVar4 = *(undefined1 **)&(this->Allocations).field_0x20;
        if (puVar4 != (undefined1 *)0x0) {
          puVar21 = puVar4;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          uVar16 = uVar16 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_145b1e320;
          uVar13 = *(uint *)(puVar21 + lVar12 * 4 + 4);
        }
        uVar11 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_d8 = (int)lVar12;
        uVar13 = local_d8 + -1 + uVar16;
        if ((int)uVar2 < (int)uVar13) {
          uVar13 = uVar2;
        }
      }
LAB_145b1e320:
      while( true ) {
        pFVar7 = local_a0;
        if (*(int *)&(local_a0->Allocations).field_0x8 - *(int *)&(local_a0->Allocations).field_0x34
            != (int)uStack_78) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        pTVar6 = local_res10;
        if (((TStack_98.CurrentBitIndex == uVar13) &&
            (TStack_98.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->Allocations).field_0x10)) &&
           (pFVar7 == this)) break;
        puVar17 = (uint *)((longlong)TStack_98.CurrentBitIndex * 0x38 +
                          *(longlong *)&pFVar7->Allocations);
        if (((VkPhysicalDeviceMemoryProperties *)(&this->MemoryBudget + 1))->memoryTypes[*puVar17].
            heapIndex == uVar23) {
          uVar16 = puVar17[10];
          puVar15 = *(undefined8 **)(puVar17 + 8);
          puVar20 = puVar15 + (longlong)(int)uVar16 * 2;
          while( true ) {
            if (puVar17[10] != uVar16) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<VulkanRHI::FDeviceMemoryBlock::FFreeBlock,int,0>::operator!='
              ::__l2::<lambda_1>::operator()(local_res18);
            }
            if (puVar15 == puVar20) break;
            lStack_130 = lStack_130 + 1;
            local_128 = local_128 + *(longlong *)*puVar15;
            uStack_110 = uStack_110 + 1;
            puVar15 = puVar15 + 2;
          }
        }
        TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
      }
      pFVar3 = (local_res10->AllocatorInstance).Data;
      piVar1 = &local_res10->ArrayMax;
      if (((pFVar3 <= (FScriptContainerElement *)&local_138) &&
          ((FScriptContainerElement *)&local_138 < pFVar3 + (longlong)*piVar1 * 0x48)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = pTVar6->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&pTVar6->AllocatorInstance,piVar1);
      }
      uVar23 = uVar23 + 1;
      pTVar6->ArrayNum = iVar9 + 1;
      pVVar18 = local_e8 + 1;
      lVar12 = (longlong)iVar9;
      pFVar3 = (pTVar6->AllocatorInstance).Data;
      local_e0 = local_e0 + 0x20;
      *(longlong *)(pFVar3 + lVar12 * 0x48) = local_138;
      *(longlong *)(pFVar3 + lVar12 * 0x48 + 8) = lStack_130;
      *(longlong *)(pFVar3 + lVar12 * 0x48 + 0x10) = local_128;
      *(longlong *)(pFVar3 + lVar12 * 0x48 + 0x10 + 8) = lStack_120;
      *(ulong64 *)(pFVar3 + lVar12 * 0x48 + 0x20) = local_118;
      *(ulong64 *)(pFVar3 + lVar12 * 0x48 + 0x20 + 8) = uStack_110;
      *(undefined8 *)(pFVar3 + lVar12 * 0x48 + 0x30) = local_108;
      *(undefined8 *)(pFVar3 + lVar12 * 0x48 + 0x30 + 8) = uStack_100;
      *(ulonglong *)(pFVar3 + lVar12 * 0x48 + 0x40) = CONCAT44(uStack_f4,local_f8);
    } while ((int)uVar23 < (this->HeapInfos).ArrayNum);
  }
  return;
}

// GetMemoryProperties @ 145b1e890

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

VkPhysicalDeviceMemoryProperties * __thiscall
VulkanRHI::FDeviceMemoryManager::GetMemoryProperties(FDeviceMemoryManager *this)

{
  return &this->MemoryProperties;
}

// GetMemoryTypeFromProperties @ 145b1e8a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

VkResult __thiscall
VulkanRHI::FDeviceMemoryManager::GetMemoryTypeFromProperties
          (FDeviceMemoryManager *this,uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = (this->MemoryProperties).memoryTypeCount;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (param_1 == 0) {
        return VK_ERROR_FEATURE_NOT_PRESENT;
      }
      if (((param_1 & 1) != 0) &&
         (((this->MemoryProperties).memoryTypes[uVar3].propertyFlags & param_2) == param_2)) {
        *param_3 = (uint)uVar3;
        return VK_SUCCESS;
      }
      param_1 = param_1 >> 1;
      uVar2 = (uint)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar1);
  }
  return VK_ERROR_FEATURE_NOT_PRESENT;
}

// GetMemoryTypeFromPropertiesExcluding @ 145b1e900

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

VkResult __thiscall
VulkanRHI::FDeviceMemoryManager::GetMemoryTypeFromPropertiesExcluding
          (FDeviceMemoryManager *this,uint param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = (this->MemoryProperties).memoryTypeCount;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (param_1 == 0) {
        return VK_ERROR_FEATURE_NOT_PRESENT;
      }
      uVar2 = (uint)uVar3;
      if ((((param_1 & 1) != 0) &&
          (((this->MemoryProperties).memoryTypes[uVar3].propertyFlags & param_2) == param_2)) &&
         (param_3 != uVar2)) {
        *param_4 = uVar2;
        return VK_SUCCESS;
      }
      param_1 = param_1 >> 1;
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < uVar1);
  }
  return VK_ERROR_FEATURE_NOT_PRESENT;
}

// GetPrimaryHeapStatus @ 145b1ef70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FDeviceMemoryManager::GetPrimaryHeapStatus
          (FDeviceMemoryManager *this,ulong64 *param_1,ulong64 *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar1 = this->PrimaryHeapIndex;
  if ((int)uVar1 < 0) {
    *param_1 = 0;
    *param_2 = 1;
    return;
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->HeapInfos).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *param_1 = *(ulong64 *)((this->HeapInfos).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20);
  if ((*(byte *)&(this->Device->OptionalDeviceExtensions).field0_0x0 & 4) != 0) {
    QueryPerformanceCounter(&local_res8);
    if (__real_3ff0000000000000 <=
        ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->MemoryUpdateTime) {
      QueryPerformanceCounter(&local_res20);
      this->MemoryUpdateTime =
           (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      UpdateMemoryProperties(this);
    }
  }
  uVar5 = (this->MemoryProperties).memoryHeaps[(uint)this->PrimaryHeapIndex].size;
  if ((GVulkanFakeMemoryLimit != 0) &&
     ((ulonglong)((longlong)GVulkanFakeMemoryLimit << 0x14) < uVar5)) {
    uVar5 = (longlong)GVulkanFakeMemoryLimit << 0x14;
  }
  *param_2 = uVar5;
  return;
}

// GetTotalMemory @ 145b1f6c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

ulong64 __thiscall
VulkanRHI::FDeviceMemoryManager::GetTotalMemory(FDeviceMemoryManager *this,bool param_1)

{
  uint uVar1;
  ulong64 uVar2;
  VkMemoryHeap *pVVar3;
  ulonglong uVar4;
  
  uVar1 = (this->MemoryProperties).memoryHeapCount;
  uVar2 = 0;
  if (uVar1 != 0) {
    pVVar3 = (this->MemoryProperties).memoryHeaps;
    uVar4 = (ulonglong)uVar1;
    do {
      if ((bool)((byte)pVVar3->flags & 1) == param_1) {
        uVar2 = uVar2 + pVVar3->size;
      }
      pVVar3 = pVVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar2;
}

// Init @ 145b246c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FDeviceMemoryManager::Init(FDeviceMemoryManager *this,FVulkanDevice *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  VkMemoryHeap *pVVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  ulonglong uVar7;
  
  if (this->Device != (FVulkanDevice *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Device == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x25a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar10 = 0;
  this->Device = param_1;
  this->NumAllocations = 0;
  this->PeakNumAllocations = 0;
  this->bHasUnifiedMemory = false;
  this->DeviceHandle = param_1->Device;
  UpdateMemoryProperties(this);
  uVar1 = (this->MemoryProperties).memoryHeapCount;
  this->PrimaryHeapIndex = -1;
  if (uVar1 != 0) {
    pVVar5 = (this->MemoryProperties).memoryHeaps;
    uVar7 = uVar10;
    uVar8 = uVar10;
    uVar11 = uVar10;
    do {
      if ((pVVar5->flags & 1) == 0) {
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      else if (uVar11 < pVVar5->size) {
        this->PrimaryHeapIndex = (int)uVar7;
        uVar11 = pVVar5->size;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      pVVar5 = pVVar5 + 1;
    } while (uVar6 < uVar1);
    if ((int)uVar8 != 0) goto LAB_145b24780;
  }
  this->PrimaryHeapIndex = -1;
LAB_145b24780:
  uVar6 = (this->MemoryProperties).memoryTypeCount;
  this->bSupportsMemoryless = false;
  if (uVar6 != 0) {
    bVar3 = false;
    do {
      if (bVar3 != false) break;
      uVar9 = (int)uVar10 + 1;
      bVar3 = (bool)((byte)((this->MemoryProperties).memoryTypes[uVar10].propertyFlags >> 4) & 1);
      this->bSupportsMemoryless = bVar3;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < uVar6);
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,uVar1,&(this->HeapInfos).AllocatorInstance,&(this->HeapInfos).ArrayNum,
                     &(this->HeapInfos).ArrayMax);
  DefaultConstructItems<VulkanRHI::FDeviceMemoryManager::FHeapInfo,int>
            ((this->HeapInfos).AllocatorInstance.Data + (longlong)iVar4 * 0x20,uVar1);
  PrintMemInfo(this);
  return;
}

// PrintMemInfo @ 145b2dc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall VulkanRHI::FDeviceMemoryManager::PrintMemInfo(FDeviceMemoryManager *this)

{
  char *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  undefined8 uVar6;
  FStaticBasicLogRecord *pFVar7;
  ulong64 uVar8;
  uint uVar9;
  ulong64 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1b8;
  uint local_1b4;
  uint local_1a8;
  _Bxty local_198;
  ulonglong local_188;
  ulonglong local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar11 = 0;
  if ((3 < (byte)LogVulkanRHI._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
     3 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  uVar9 = uVar11;
  if ((this->MemoryProperties).memoryHeapCount != 0) {
    do {
      uVar4 = (this->HeapInfos).ArrayNum;
      if (uVar9 < uVar4) {
        uVar3 = 0;
        if ((int)uVar9 < (int)uVar4) {
          uVar3 = ~uVar9 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (this->MemoryProperties).memoryHeapCount);
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  local_1b4 = 0;
  if ((this->MemoryProperties).memoryHeapCount != 0) {
    do {
      uVar12 = 0;
      local_1a8 = 0;
      if ((this->MemoryProperties).memoryTypeCount != 0) {
        do {
          uVar9 = (uint)uVar12;
          if ((local_1b4 ==
               ((VkPhysicalDeviceMemoryProperties *)(&this->MemoryBudget + 1))->memoryTypes[uVar12].
               heapIndex) &&
             (uVar4 = (this->MemoryProperties).memoryTypes[uVar12].propertyFlags,
             3 < (byte)LogVulkanRHI._0_1_)) {
            if (uVar4 != 0) {
              local_188 = 0;
              uVar12 = 0xf;
              local_198._8_8_ = 0;
              local_180 = 0xf;
              uVar11 = 1;
              local_198._Ptr = (char *)0x0;
              do {
                if ((uVar4 & 1) != 0) {
                  if (local_188 != 0) {
                    if (uVar12 == local_188) {
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_198,1,local_1b8,"|",1);
                      uVar12 = local_180;
                    }
                    else {
                      uVar6 = &local_198;
                      if (0xf < uVar12) {
                        uVar6 = local_198._Ptr;
                      }
                      pcVar13 = (char *)(uVar6 + local_188);
                      local_188 = local_188 + 1;
                      pcVar13[0] = '|';
                      pcVar13[1] = '\0';
                      uVar12 = local_180;
                    }
                  }
                  if ((int)uVar11 < 0x11) {
                    if (uVar11 == 0x10) {
                      pcVar13 = "VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT";
                    }
                    else if (uVar11 == 1) {
                      pcVar13 = "VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT";
                    }
                    else if (uVar11 == 2) {
                      pcVar13 = "VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT";
                    }
                    else if (uVar11 == 4) {
                      pcVar13 = "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT";
                    }
                    else {
                      if (uVar11 != 8) goto LAB_145b2e059;
                      pcVar13 = "VK_MEMORY_PROPERTY_HOST_CACHED_BIT";
                    }
                  }
                  else if (uVar11 == 0x20) {
                    pcVar13 = "VK_MEMORY_PROPERTY_PROTECTED_BIT";
                  }
                  else if (uVar11 == 0x40) {
                    pcVar13 = "VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD";
                  }
                  else if (uVar11 == 0x80) {
                    pcVar13 = "VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD";
                  }
                  else if (uVar11 == 0x100) {
                    pcVar13 = "VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV";
                  }
                  else {
LAB_145b2e059:
                    pcVar13 = "Unhandled VkMemoryPropertyFlagBits";
                  }
                  sVar5 = strlen(pcVar13);
                  if (uVar12 - local_188 < sVar5) {
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                    _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_198,sVar5,local_1b8,pcVar13,sVar5);
                    uVar12 = local_180;
                  }
                  else {
                    uVar6 = &local_198;
                    if (0xf < uVar12) {
                      uVar6 = local_198._Ptr;
                    }
                    _Dst = (char *)(uVar6 + local_188);
                    local_188 = local_188 + sVar5;
                    memmove(_Dst,pcVar13,sVar5);
                    _Dst[sVar5] = '\0';
                    uVar12 = local_180;
                  }
                }
                uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
                uVar4 = uVar4 >> 1;
              } while (uVar4 != 0);
              if (local_188 == 0) {
                if (uVar12 < 0x18) {
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_198,0x18,local_1b8,"VkMemoryPropertyFlags(0)",0x18);
                }
                else {
                  local_188 = 0x18;
                  uVar6 = &local_198;
                  if (0xf < local_180) {
                    uVar6 = local_198._Ptr;
                  }
                  memmove((void *)uVar6,"VkMemoryPropertyFlags(0)",0x18);
                  *(char *)(uVar6 + 0x18) = '\0';
                }
              }
              uVar6 = &local_198;
              if (0xf < local_180) {
                uVar6 = local_198._Ptr;
              }
              local_178._padding_ = 0;
              uVar9 = local_1a8;
              if ((_Bxty *)uVar6 == (_Bxty *)0x0) {
                uVar11 = 3;
                local_178.Ptr = (wchar_t *)0x0;
                local_178.StringLength = 0;
              }
              else {
                sVar5 = strlen((char *)uVar6);
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_178,(char *)uVar6,(int)sVar5,Yes);
                uVar11 = 3;
              }
            }
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            if (((uVar11 & 2) != 0) &&
               (uVar11 = uVar11 & 0xfffffffd, (void *)local_178._padding_ != (void *)0x0)) {
              FMemory::Free((void *)local_178._padding_);
            }
            if (((uVar11 & 1) != 0) && (uVar11 = uVar11 & 0xfffffffe, 0xf < local_180)) {
              uVar8 = local_180 + 1;
              uVar6 = local_198._Ptr;
              if (0xfff < uVar8) {
                uVar6 = *(undefined8 *)(local_198._Ptr + -8);
                uVar8 = local_180 + 0x28;
                if ((char *)0x1f < local_198._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete((void *)uVar6,uVar8);
            }
          }
          local_1a8 = uVar9 + 1;
          uVar12 = (ulonglong)local_1a8;
        } while (local_1a8 < (this->MemoryProperties).memoryTypeCount);
      }
      local_1b4 = local_1b4 + 1;
    } while (local_1b4 < (this->MemoryProperties).memoryHeapCount);
  }
  uVar11 = 0;
  if ((*(byte *)&(this->Device->OptionalDeviceExtensions).field0_0x0 & 4) == 0) {
    if ((byte)LogVulkanRHI._0_1_ < 4) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  else {
    if (((3 < (byte)LogVulkanRHI._0_1_) &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
        3 < (byte)LogVulkanRHI._0_1_)) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
       3 < (byte)LogVulkanRHI._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_________________1510bd2c8,
                 (FLogCategoryBase *)&LogVulkanRHI);
    }
    puVar10 = (this->MemoryBudget).heapUsage;
    do {
      if (((puVar10[-0x10] != 0) || (*puVar10 != 0)) && (3 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar11 = uVar11 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar11 < 0x10);
    if ((byte)LogVulkanRHI._0_1_ < 4) {
      return;
    }
    pFVar7 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar7,(FLogCategoryBase *)&LogVulkanRHI);
  return;
}

// SupportsMemoryType @ 145b35270

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

bool __thiscall
VulkanRHI::FDeviceMemoryManager::SupportsMemoryType(FDeviceMemoryManager *this,uint param_1)

{
  uint uVar1;
  VkMemoryType *pVVar2;
  uint uVar3;
  
  uVar1 = (this->MemoryProperties).memoryTypeCount;
  uVar3 = 0;
  if (uVar1 != 0) {
    pVVar2 = (this->MemoryProperties).memoryTypes;
    do {
      if (pVVar2->propertyFlags == param_1) {
        return true;
      }
      uVar3 = uVar3 + 1;
      pVVar2 = pVVar2 + 1;
    } while (uVar3 < uVar1);
  }
  return false;
}

// TrimMemory @ 145b35340

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall VulkanRHI::FDeviceMemoryManager::TrimMemory(FDeviceMemoryManager *this,bool param_1)

{
  undefined1 *puVar1;
  ForAnyElementType *pFVar2;
  ulonglong uVar3;
  longlong lVar4;
  FName FVar5;
  code *pcVar6;
  uint uVar7;
  FDeviceMemoryManager *pFVar8;
  bool bVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory2Reserved> FVar10;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory3Reserved> FVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved> FVar12;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory0Reserved> FVar13;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory1Reserved> FVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemory4Reserved> FVar15;
  TStatId TVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  longlong *plVar21;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved> FVar22;
  byte bVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  undefined1 *puVar28;
  uint uVar29;
  uint *puVar30;
  FScriptContainerElement *pFVar31;
  int iVar32;
  uint uVar33;
  FNameEntryId FVar34;
  longlong lVar35;
  undefined1 local_res18 [8];
  FLLMScope local_res20 [2];
  uint local_2f4;
  longlong local_2f0;
  FLLMScope local_2d0;
  FLLMScope local_2cc;
  FLLMScope local_2c8;
  uint local_2c4;
  int local_2c0;
  uint uStack_2bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b8;
  uint local_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  uint local_2a0;
  uint uStack_29c;
  uint local_298;
  uint uStack_294;
  uint local_290;
  uint uStack_28c;
  uint local_288;
  uint uStack_284;
  uint local_280;
  uint uStack_27c;
  uint local_270;
  uint uStack_26c;
  uint local_268;
  uint uStack_264;
  uint local_260;
  uint uStack_25c;
  uint local_258;
  uint uStack_254;
  uint local_250;
  uint uStack_24c;
  uint local_248;
  uint uStack_244;
  uint local_240;
  uint uStack_23c;
  uint local_238;
  uint uStack_234;
  uint local_230;
  uint uStack_22c;
  uint local_228;
  uint uStack_224;
  uint local_220;
  uint uStack_21c;
  FDeviceMemoryManager *local_218;
  int iStack_210;
  uint uStack_20c;
  undefined1 *local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FMemScope local_1e8;
  FName local_1e0;
  FMemScope local_1d8;
  FName local_1d0;
  FMemScope local_1c8;
  FName local_1c0;
  FMemScope local_1b8;
  FName local_1b0;
  LPCRITICAL_SECTION local_1a8;
  longlong local_1a0;
  uint uStack_198;
  uint uStack_194;
  longlong local_190;
  uint uStack_188;
  uint uStack_184;
  longlong local_180;
  uint uStack_178;
  uint uStack_174;
  longlong local_170;
  uint uStack_168;
  uint uStack_164;
  int local_160;
  int local_15c;
  FDeviceMemoryManager *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  FDeviceMemoryManager *local_128;
  undefined8 uStack_120;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int local_100;
  undefined4 uStack_fc;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0 [3];
  FName local_c8 [2];
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FDeviceMemoryManager *local_78;
  undefined8 uStack_70;
  TBitArray<FDefaultBitArrayAllocator> *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_1a8 = (LPCRITICAL_SECTION)&this->DeviceMemLock;
  if (local_1a8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_1a8);
  uVar7 = GFrameNumberRenderThread;
  iVar26 = *(int *)&(this->Allocations).field_0x28;
  puVar1 = &(this->Allocations).field_0x10;
  iStack_210 = 0;
  local_1f8 = 0;
  uStack_20c = 1;
  iStack_1fc = 0;
  if (iVar26 != 0) {
    puVar30 = *(uint **)&(this->Allocations).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar1;
    }
    uVar29 = *puVar30;
    while (uVar29 == 0) {
      lVar24 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      iStack_1fc = iVar26;
      if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_210) goto LAB_145b35420;
      uVar29 = puVar30[lVar24 + 1];
    }
    uStack_20c = -uVar29 & uVar29;
    uVar3 = (ulonglong)uStack_20c * 2 + 1;
    lVar24 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_15c = (int)lVar24;
    iStack_1fc = local_1f8 + -1 + local_15c;
    if (iVar26 < iStack_1fc) {
      iStack_1fc = iVar26;
    }
  }
LAB_145b35420:
  uVar29 = *(uint *)&(this->Allocations).field_0x28;
  bVar23 = (byte)uVar29 & 0x1f;
  iStack_1f0 = *(int *)&(this->Allocations).field_0x8 - *(int *)&(this->Allocations).field_0x34;
  uVar27 = uVar29 & 0xffffffe0;
  iVar32 = (int)uVar29 >> 5;
  uStack_2bc = 1 << bVar23;
  uVar33 = -1 << bVar23;
  uStack_200 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_20c,iStack_210);
  TStack_150.CurrentBitIndex = iStack_1fc;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  TStack_150._28_4_ = iStack_1fc;
  TStack_150.BaseBitIndex = local_1f8;
  uStack_130 = CONCAT44(uStack_1ec,iStack_1f0);
  local_2c0 = iVar32;
  pTStack_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_2b0 = uVar33;
  uStack_2ac = uVar29;
  uStack_2a8 = uVar27;
  local_218 = this;
  local_208 = puVar1;
  iStack_1f4 = iStack_1fc;
  local_158 = this;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar29 < 0) || (iVar26 < (int)uVar29)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar25 = *(uint *)&(this->Allocations).field_0x28;
  if (uVar29 != uVar25) {
    puVar28 = *(undefined1 **)&(this->Allocations).field_0x20;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = puVar1;
    }
    uVar33 = uVar33 & *(uint *)(puVar28 + (longlong)iVar32 * 4);
    while (uVar33 == 0) {
      uStack_2a8 = uVar27 + 0x20;
      local_2c0 = iVar32 + 1;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < local_2c0)
      goto LAB_145b3555e;
      uVar33 = *(uint *)(puVar28 + (longlong)iVar32 * 4 + 4);
      local_2b0 = 0xffffffff;
      uVar27 = uStack_2a8;
      iVar32 = local_2c0;
    }
    uStack_2bc = -uVar33 & uVar33;
    uVar3 = (ulonglong)uStack_2bc * 2 + 1;
    lVar24 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_160 = (int)lVar24;
    uStack_2ac = local_160 + -1 + uVar27;
    if ((int)uVar25 < (int)uStack_2ac) {
LAB_145b3555e:
      uStack_2ac = uVar25;
    }
  }
  uStack_120 = CONCAT44(uStack_2bc,local_2c0);
  uStack_110 = CONCAT44(uStack_2ac,local_2b0);
  uStack_108 = CONCAT44(uStack_2a4,uStack_2a8);
  local_100 = *(int *)&(this->Allocations).field_0x8 - *(int *)&(this->Allocations).field_0x34;
  pTStack_118 = pTStack_2b8;
  uStack_50 = CONCAT44(uStack_fc,local_100);
  local_68 = pTStack_2b8;
  local_128 = this;
  local_78 = this;
  uStack_70 = uStack_120;
  uStack_60 = uStack_110;
  local_58 = uStack_108;
  do {
    pFVar8 = local_158;
    if (*(int *)&(local_158->Allocations).field_0x8 - *(int *)&(local_158->Allocations).field_0x34
        != (int)uStack_130) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<VulkanRHI::FDeviceMemoryBlockKey,VulkanRHI::FDeviceMemoryBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_150.CurrentBitIndex == uStack_60._4_4_) && (TStack_150.Array == local_68)) &&
       (pFVar8 == local_78)) {
                    /* WARNING: Could not recover jumptable at 0x000145b3674b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(local_1a8);
      return;
    }
    lVar24 = (longlong)TStack_150.CurrentBitIndex * 0x38 + *(longlong *)&pFVar8->Allocations;
    uVar29 = 5;
    if (*(ulonglong *)(lVar24 + 0x18) < 0x800001) {
      uVar29 = 10;
    }
    uVar33 = 0;
    local_2f4 = 0;
    if (0 < *(int *)(lVar24 + 0x28)) {
      pFVar2 = (ForAnyElementType *)(lVar24 + 0x20);
      lVar35 = 0;
      local_2f0 = 0;
      do {
        local_2c4 = ~uVar33 >> 0x1f;
        uVar27 = 0;
        if ((int)uVar33 < *(int *)(lVar24 + 0x28)) {
          uVar27 = local_2c4;
        }
        if ((uVar27 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar31 = pFVar2->Data + lVar35;
        if ((*(int *)(pFVar31 + 8) + 100U < uVar7) || (param_1)) {
          lVar4 = **(longlong **)pFVar31;
          switch(*(uint *)(*(longlong **)pFVar31 + 4) & 0xff) {
          case 0:
            if (lVar4 != 0) {
              FVar13 = StatPtr_STAT_VulkanMemory0Reserved;
              if (StatPtr_STAT_VulkanMemory0Reserved ==
                  (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0Reserved>)0x0) {
                pFVar17 = ::FName::FName(&local_e8,"STAT_VulkanMemory0Reserved");
                FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0Reserved>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory0Reserved
                                    ,*pFVar17,L"MemoryPool 0 Reserved","STATGROUP_VulkanMemoryRaw",
                                    "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,
                                    false,true,MCR_Physical);
              }
              FVar5 = *(FName *)FVar13;
              local_290 = (uint)FVar5.ComparisonIndex.Value;
              uStack_28c = FVar5.Number;
              FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
LAB_145b35cdb:
              FVar22 = StatPtr_STAT_VulkanMemoryReserved;
              if (StatPtr_STAT_VulkanMemoryReserved ==
                  (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved>)0x0) {
                pFVar17 = ::FName::FName(&local_f0,"STAT_VulkanMemoryReserved");
                FVar22 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryReserved,
                                    *pFVar17,L"_Reserved","STATGROUP_VulkanMemoryRaw",
                                    "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,
                                    false,true,MCR_Physical);
              }
              FVar5 = *(FName *)FVar22;
              FVar34 = FVar5.ComparisonIndex.Value;
              uVar27 = FVar5.Number;
              lVar35 = local_2f0;
              local_258 = FVar34.Value;
              uStack_254 = uVar27;
              if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar19 == (FThreadStats *)0x0) {
                  pFVar20 = FThreadStatsPool::Get();
                  pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
                }
                uStack_184 = uVar27 & 0xffffbfff | 0xb000;
                local_1d0 = FVar5;
                local_190 = lVar4;
                uStack_188 = FVar34.Value;
                FLLMScope::FLLMScope(&local_2d0,Stats,false,None,Default,true);
                FMemScope::FMemScope(&local_1d8,Stats,true);
                pFVar19->MemoryMessageScope = pFVar19->MemoryMessageScope + 1;
                plVar21 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                                    (0x10,&(pFVar19->Packet).StatMessages);
                if (plVar21 != (longlong *)0x0) {
                  *plVar21 = local_190;
                  plVar21[1] = CONCAT44(uStack_184,uStack_188);
                }
                pFVar19->MemoryMessageScope = pFVar19->MemoryMessageScope + -1;
                FMemScope::~FMemScope(&local_1d8);
                FLLMScope::~FLLMScope(&local_2d0);
                FStatsTrace::Add(&local_1d0,-lVar4);
                if (pFVar19->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar19,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar19,false,false);
                }
              }
            }
            break;
          case 1:
            if (lVar4 != 0) {
              FVar14 = StatPtr_STAT_VulkanMemory1Reserved;
              if (StatPtr_STAT_VulkanMemory1Reserved ==
                  (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1Reserved>)0x0) {
                pFVar17 = ::FName::FName(&local_a0,"STAT_VulkanMemory1Reserved");
                FVar14 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1Reserved>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory1Reserved
                                    ,*pFVar17,L"MemoryPool 1 Reserved","STATGROUP_VulkanMemoryRaw",
                                    "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,
                                    false,true,MCR_Physical);
              }
              FVar5 = *(FName *)FVar14;
              local_288 = (uint)FVar5.ComparisonIndex.Value;
              uStack_284 = FVar5.Number;
              FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
              goto LAB_145b35cdb;
            }
            break;
          case 2:
            if (lVar4 != 0) {
              FVar10 = StatPtr_STAT_VulkanMemory2Reserved;
              if (StatPtr_STAT_VulkanMemory2Reserved ==
                  (FThreadSafeStaticStat<FStat_STAT_VulkanMemory2Reserved>)0x0) {
                pFVar17 = ::FName::FName(&local_98,"STAT_VulkanMemory2Reserved");
                FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory2Reserved>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory2Reserved
                                    ,*pFVar17,L"MemoryPool 2 Reserved","STATGROUP_VulkanMemoryRaw",
                                    "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,
                                    false,true,MCR_Physical);
              }
              FVar5 = *(FName *)FVar10;
              local_280 = (uint)FVar5.ComparisonIndex.Value;
              uStack_27c = FVar5.Number;
              FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
              goto LAB_145b35cdb;
            }
            break;
          case 3:
            if (lVar4 != 0) {
              FVar11 = StatPtr_STAT_VulkanMemory3Reserved;
              if (StatPtr_STAT_VulkanMemory3Reserved ==
                  (FThreadSafeStaticStat<FStat_STAT_VulkanMemory3Reserved>)0x0) {
                pFVar17 = ::FName::FName(&local_90,"STAT_VulkanMemory3Reserved");
                FVar11 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory3Reserved>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory3Reserved
                                    ,*pFVar17,L"MemoryPool 3 Reserved","STATGROUP_VulkanMemoryRaw",
                                    "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,
                                    false,true,MCR_Physical);
              }
              FVar5 = *(FName *)FVar11;
              local_2a0 = (uint)FVar5.ComparisonIndex.Value;
              uStack_29c = FVar5.Number;
              FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
              goto LAB_145b35cdb;
            }
            break;
          case 4:
            if (lVar4 != 0) {
              FVar15 = StatPtr_STAT_VulkanMemory4Reserved;
              if (StatPtr_STAT_VulkanMemory4Reserved ==
                  (FThreadSafeStaticStat<FStat_STAT_VulkanMemory4Reserved>)0x0) {
                pFVar17 = ::FName::FName(&local_88,"STAT_VulkanMemory4Reserved");
                FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory4Reserved>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory4Reserved
                                    ,*pFVar17,L"MemoryPool 4 Reserved","STATGROUP_VulkanMemoryRaw",
                                    "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,
                                    false,true,MCR_Physical);
              }
              FVar5 = *(FName *)FVar15;
              local_270 = (uint)FVar5.ComparisonIndex.Value;
              uStack_26c = FVar5.Number;
              FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
              goto LAB_145b35cdb;
            }
            break;
          case 5:
            if (lVar4 != 0) {
              FVar12 = StatPtr_STAT_VulkanMemory5Reserved;
              if (StatPtr_STAT_VulkanMemory5Reserved ==
                  (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)0x0) {
                pFVar17 = ::FName::FName(&local_80,"STAT_VulkanMemory5Reserved");
                FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory5Reserved>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemory5Reserved
                                    ,*pFVar17,L"MemoryPool 5 Reserved","STATGROUP_VulkanMemoryRaw",
                                    "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,
                                    false,true,MCR_Physical);
              }
              FVar5 = *(FName *)FVar12;
              local_268 = (uint)FVar5.ComparisonIndex.Value;
              uStack_264 = FVar5.Number;
              FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
              goto LAB_145b35cdb;
            }
            break;
          default:
            if (lVar4 != 0) {
              FVar18 = StatPtr_STAT_VulkanMemoryXReserved;
              if (StatPtr_STAT_VulkanMemoryXReserved ==
                  (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved>)0x0) {
                pFVar17 = ::FName::FName(&local_f8,"STAT_VulkanMemoryXReserved");
                FVar18 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryXReserved
                                    ,*pFVar17,L"MemoryPool (remaining) Reserved",
                                    "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                                    L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical
                                   );
              }
              FVar5 = *(FName *)FVar18;
              FVar34 = FVar5.ComparisonIndex.Value;
              uVar27 = FVar5.Number;
              local_260 = FVar34.Value;
              uStack_25c = uVar27;
              if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar19 == (FThreadStats *)0x0) {
                  pFVar20 = FThreadStatsPool::Get();
                  pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
                }
                uStack_194 = uVar27 & 0xffffbfff | 0xb000;
                local_1e0 = FVar5;
                local_1a0 = lVar4;
                uStack_198 = FVar34.Value;
                FLLMScope::FLLMScope(local_res20,Stats,false,None,Default,true);
                FMemScope::FMemScope(&local_1e8,Stats,true);
                pFVar19->MemoryMessageScope = pFVar19->MemoryMessageScope + 1;
                plVar21 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                                    (0x10,&(pFVar19->Packet).StatMessages);
                if (plVar21 != (longlong *)0x0) {
                  *plVar21 = local_1a0;
                  plVar21[1] = CONCAT44(uStack_194,uStack_198);
                }
                pFVar19->MemoryMessageScope = pFVar19->MemoryMessageScope + -1;
                FMemScope::~FMemScope(&local_1e8);
                FLLMScope::~FLLMScope(local_res20);
                FStatsTrace::Add(&local_1e0,-lVar4);
                if (pFVar19->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar19,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar19,false,false);
                }
              }
              goto LAB_145b35cdb;
            }
          }
          FreeInternal(this,*(FDeviceMemoryAllocation **)pFVar31);
          uVar27 = 0;
          if ((int)uVar33 < *(int *)(lVar24 + 0x28)) {
            uVar27 = local_2c4;
          }
          if ((uVar27 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar26 = *(int *)(lVar24 + 0x28) + ~uVar33;
          if (iVar26 != 0) {
            memmove(pFVar2->Data + lVar35,pFVar2->Data + lVar35 + 0x10,(longlong)iVar26 << 4);
          }
          *(int *)(lVar24 + 0x28) = *(int *)(lVar24 + 0x28) + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,pFVar2,*(int *)(lVar24 + 0x28),(int *)(lVar24 + 0x2c));
          uVar27 = local_2f4;
        }
        else {
          lVar35 = lVar35 + 0x10;
          uVar33 = uVar33 + 1;
          uVar27 = local_2f4 + 1;
          local_2f0 = lVar35;
          if (uVar7 <= *(int *)(pFVar31 + 8) + 10U) {
            uVar27 = local_2f4;
          }
        }
        local_2f4 = uVar27;
      } while ((int)uVar33 < *(int *)(lVar24 + 0x28));
      if (uVar29 < local_2f4) {
        uVar29 = local_2f4 - uVar29;
        uVar33 = 0;
        if (0 < *(int *)(lVar24 + 0x28)) {
          lVar35 = 0;
          local_2f0 = 0;
          local_2f4 = uVar29;
          do {
            if (uVar29 == 0) break;
            uVar25 = ~uVar33 >> 0x1f;
            uVar27 = 0;
            if ((int)uVar33 < *(int *)(lVar24 + 0x28)) {
              uVar27 = uVar25;
            }
            if ((uVar27 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               uVar29 = local_2f4, bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar31 = pFVar2->Data + lVar35;
            if (*(int *)(pFVar31 + 8) + 10U < uVar7) {
              lVar4 = **(longlong **)pFVar31;
              switch(*(uint *)(*(longlong **)pFVar31 + 4) & 0xff) {
              case 0:
                if (lVar4 != 0) {
                  FVar13 = StatPtr_STAT_VulkanMemory0Reserved;
                  if (StatPtr_STAT_VulkanMemory0Reserved ==
                      (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0Reserved>)0x0) {
                    pFVar17 = ::FName::FName(&local_a8,"STAT_VulkanMemory0Reserved");
                    FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory0Reserved>)
                             FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_VulkanMemory0Reserved,*pFVar17,
                                        L"MemoryPool 0 Reserved","STATGROUP_VulkanMemoryRaw",
                                        "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,
                                        false,true,MCR_Physical);
                  }
                  FVar5 = *(FName *)FVar13;
                  local_250 = (uint)FVar5.ComparisonIndex.Value;
                  uStack_24c = FVar5.Number;
                  FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
LAB_145b3647e:
                  FVar22 = StatPtr_STAT_VulkanMemoryReserved;
                  if (StatPtr_STAT_VulkanMemoryReserved ==
                      (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved>)0x0) {
                    pFVar17 = ::FName::FName(&local_b0,"STAT_VulkanMemoryReserved");
                    FVar22 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryReserved>)
                             FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_VulkanMemoryReserved,*pFVar17,L"_Reserved",
                                        "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                                        L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                                        MCR_Physical);
                  }
                  FVar5 = *(FName *)FVar22;
                  FVar34 = FVar5.ComparisonIndex.Value;
                  uVar29 = FVar5.Number;
                  lVar35 = local_2f0;
                  local_298 = FVar34.Value;
                  uStack_294 = uVar29;
                  if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                     (FThreadStats::TlsSlot != 0xffffffff)) {
                    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
                    if (pFVar19 == (FThreadStats *)0x0) {
                      pFVar20 = FThreadStatsPool::Get();
                      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
                    }
                    uStack_164 = uVar29 & 0xffffbfff | 0xb000;
                    local_1b0 = FVar5;
                    local_170 = lVar4;
                    uStack_168 = FVar34.Value;
                    FLLMScope::FLLMScope(&local_2c8,Stats,false,None,Default,true);
                    FMemScope::FMemScope(&local_1b8,Stats,true);
                    pFVar19->MemoryMessageScope = pFVar19->MemoryMessageScope + 1;
                    plVar21 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                                        (0x10,&(pFVar19->Packet).StatMessages);
                    if (plVar21 != (longlong *)0x0) {
                      *plVar21 = local_170;
                      plVar21[1] = CONCAT44(uStack_164,uStack_168);
                    }
                    pFVar19->MemoryMessageScope = pFVar19->MemoryMessageScope + -1;
                    FMemScope::~FMemScope(&local_1b8);
                    FLLMScope::~FLLMScope(&local_2c8);
                    FStatsTrace::Add(&local_1b0,-lVar4);
                    if (pFVar19->ScopeCount == 0) {
                      FThreadStats::Flush(pFVar19,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FThreadStats::FlushRawStats(pFVar19,false,false);
                    }
                  }
                }
                break;
              case 1:
                if (lVar4 != 0) {
                  FVar14 = StatPtr_STAT_VulkanMemory1Reserved;
                  if (StatPtr_STAT_VulkanMemory1Reserved ==
                      (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1Reserved>)0x0) {
                    pFVar17 = ::FName::FName(local_e0,"STAT_VulkanMemory1Reserved");
                    FVar14 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory1Reserved>)
                             FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_VulkanMemory1Reserved,*pFVar17,
                                        L"MemoryPool 1 Reserved","STATGROUP_VulkanMemoryRaw",
                                        "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,
                                        false,true,MCR_Physical);
                  }
                  FVar5 = *(FName *)FVar14;
                  local_248 = (uint)FVar5.ComparisonIndex.Value;
                  uStack_244 = FVar5.Number;
                  FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
                  goto LAB_145b3647e;
                }
                break;
              case 2:
                if (lVar4 != 0) {
                  TVar16 = FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory2Reserved,1>::GetStatId
                                     ((FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory2Reserved,1>
                                       *)&StatPtr_STAT_VulkanMemory2Reserved);
                  FVar5 = *(FName *)(TVar16.StatIdPtr)->Name;
                  local_240 = (uint)FVar5.ComparisonIndex.Value;
                  uStack_23c = FVar5.Number;
                  FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
                  goto LAB_145b3647e;
                }
                break;
              case 3:
                if (lVar4 != 0) {
                  TVar16 = FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory3Reserved,1>::GetStatId
                                     ((FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory3Reserved,1>
                                       *)&StatPtr_STAT_VulkanMemory3Reserved);
                  FVar5 = *(FName *)(TVar16.StatIdPtr)->Name;
                  local_238 = (uint)FVar5.ComparisonIndex.Value;
                  uStack_234 = FVar5.Number;
                  FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
                  goto LAB_145b3647e;
                }
                break;
              case 4:
                if (lVar4 != 0) {
                  FVar15 = StatPtr_STAT_VulkanMemory4Reserved;
                  if (StatPtr_STAT_VulkanMemory4Reserved ==
                      (FThreadSafeStaticStat<FStat_STAT_VulkanMemory4Reserved>)0x0) {
                    pFVar17 = ::FName::FName(local_c8,"STAT_VulkanMemory4Reserved");
                    FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemory4Reserved>)
                             FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_VulkanMemory4Reserved,*pFVar17,
                                        L"MemoryPool 4 Reserved","STATGROUP_VulkanMemoryRaw",
                                        "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,
                                        false,true,MCR_Physical);
                  }
                  FVar5 = *(FName *)FVar15;
                  local_230 = (uint)FVar5.ComparisonIndex.Value;
                  uStack_22c = FVar5.Number;
                  FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
                  goto LAB_145b3647e;
                }
                break;
              case 5:
                if (lVar4 != 0) {
                  TVar16 = FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory5Reserved,1>::GetStatId
                                     ((FThreadSafeStaticStatInner<FStat_STAT_VulkanMemory5Reserved,1>
                                       *)&StatPtr_STAT_VulkanMemory5Reserved);
                  FVar5 = *(FName *)(TVar16.StatIdPtr)->Name;
                  local_228 = (uint)FVar5.ComparisonIndex.Value;
                  uStack_224 = FVar5.Number;
                  FThreadStats::AddMessage<__int64>(FVar5,Subtract,lVar4,false);
                  goto LAB_145b3647e;
                }
                break;
              default:
                if (lVar4 != 0) {
                  FVar18 = StatPtr_STAT_VulkanMemoryXReserved;
                  if (StatPtr_STAT_VulkanMemoryXReserved ==
                      (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved>)0x0) {
                    pFVar17 = ::FName::FName(&local_b8,"STAT_VulkanMemoryXReserved");
                    FVar18 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryXReserved>)
                             FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_VulkanMemoryXReserved,*pFVar17,
                                        L"MemoryPool (remaining) Reserved",
                                        "STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                                        L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                                        MCR_Physical);
                  }
                  FVar5 = *(FName *)FVar18;
                  FVar34 = FVar5.ComparisonIndex.Value;
                  uVar29 = FVar5.Number;
                  local_220 = FVar34.Value;
                  uStack_21c = uVar29;
                  if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                     (FThreadStats::TlsSlot != 0xffffffff)) {
                    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
                    if (pFVar19 == (FThreadStats *)0x0) {
                      pFVar20 = FThreadStatsPool::Get();
                      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
                    }
                    uStack_174 = uVar29 & 0xffffbfff | 0xb000;
                    local_1c0 = FVar5;
                    local_180 = lVar4;
                    uStack_178 = FVar34.Value;
                    FLLMScope::FLLMScope(&local_2cc,Stats,false,None,Default,true);
                    FMemScope::FMemScope(&local_1c8,Stats,true);
                    pFVar19->MemoryMessageScope = pFVar19->MemoryMessageScope + 1;
                    plVar21 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                                        (0x10,&(pFVar19->Packet).StatMessages);
                    if (plVar21 != (longlong *)0x0) {
                      *plVar21 = local_180;
                      plVar21[1] = CONCAT44(uStack_174,uStack_178);
                    }
                    pFVar19->MemoryMessageScope = pFVar19->MemoryMessageScope + -1;
                    FMemScope::~FMemScope(&local_1c8);
                    FLLMScope::~FLLMScope(&local_2cc);
                    FStatsTrace::Add(&local_1c0,-lVar4);
                    if (pFVar19->ScopeCount == 0) {
                      FThreadStats::Flush(pFVar19,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FThreadStats::FlushRawStats(pFVar19,false,false);
                    }
                  }
                  goto LAB_145b3647e;
                }
              }
              FreeInternal(this,*(FDeviceMemoryAllocation **)pFVar31);
              uVar29 = 0;
              if ((int)uVar33 < *(int *)(lVar24 + 0x28)) {
                uVar29 = uVar25;
              }
              if ((uVar29 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar26 = *(int *)(lVar24 + 0x28) + ~uVar33;
              if (iVar26 != 0) {
                memmove(pFVar2->Data + lVar35,pFVar2->Data + lVar35 + 0x10,(longlong)iVar26 << 4);
              }
              *(int *)(lVar24 + 0x28) = *(int *)(lVar24 + 0x28) + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,pFVar2,*(int *)(lVar24 + 0x28),(int *)(lVar24 + 0x2c));
              uVar29 = local_2f4 + -1;
              local_2f4 = uVar29;
            }
            else {
              uVar33 = uVar33 + 1;
              lVar35 = lVar35 + 0x10;
              local_2f0 = lVar35;
            }
          } while ((int)uVar33 < *(int *)(lVar24 + 0x28));
        }
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// UpdateMemoryProperties @ 145b37d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall VulkanRHI::FDeviceMemoryManager::UpdateMemoryProperties(FDeviceMemoryManager *this)

{
  uint *puVar1;
  uint *puVar2;
  FName FVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint uVar24;
  VkPhysicalDeviceMemoryProperties *pVVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget0> FVar27;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget1> FVar28;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget2> FVar29;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget3> FVar30;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget4> FVar31;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget5> FVar32;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudgetX> FVar33;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage0> FVar34;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage1> FVar35;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage2> FVar36;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage3> FVar37;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage4> FVar38;
  FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage5> FVar39;
  longlong lVar40;
  ulonglong uVar41;
  VkPhysicalDeviceMemoryProperties *pVVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  undefined1 auStackY_2c8 [32];
  FName local_268 [2];
  VkPhysicalDeviceMemoryProperties2 local_258;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((*(byte *)&(this->Device->OptionalDeviceExtensions).field0_0x0 & 4) == 0) {
    (*VulkanDynamicAPI::vkGetPhysicalDeviceMemoryProperties)
              (this->Device->Gpu,&this->MemoryProperties);
  }
  else {
    (this->MemoryBudget).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT;
    memset(&(this->MemoryBudget).field_0x4,0,0x10c);
    local_258.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;
    memset(&local_258.field_0x4,0,0x214);
    local_258.pNext = &this->MemoryBudget;
    (*VulkanDynamicAPI::vkGetPhysicalDeviceMemoryProperties2)(this->Device->Gpu,&local_258);
    lVar40 = 4;
    pVVar25 = &local_258.memoryProperties;
    pVVar42 = &this->MemoryProperties;
    do {
      puVar1 = &pVVar42->memoryTypes[0xf].heapIndex;
      uVar24 = pVVar25->memoryTypes[0].propertyFlags;
      uVar20 = *(undefined8 *)&pVVar25->memoryTypes[0].heapIndex;
      uVar21 = *(undefined8 *)&pVVar25->memoryTypes[1].heapIndex;
      uVar22 = *(undefined8 *)&pVVar25->memoryTypes[2].heapIndex;
      puVar2 = &pVVar25->memoryTypes[0xf].heapIndex;
      pVVar42->memoryTypeCount = pVVar25->memoryTypeCount;
      pVVar42->memoryTypes[0].propertyFlags = uVar24;
      *(undefined8 *)&pVVar42->memoryTypes[0].heapIndex = uVar20;
      uVar20 = *(undefined8 *)&pVVar25->memoryTypes[3].heapIndex;
      uVar23 = *(undefined8 *)&pVVar25->memoryTypes[4].heapIndex;
      *(undefined8 *)&pVVar42->memoryTypes[1].heapIndex = uVar21;
      *(undefined8 *)&pVVar42->memoryTypes[2].heapIndex = uVar22;
      uVar21 = *(undefined8 *)&pVVar25->memoryTypes[5].heapIndex;
      uVar22 = *(undefined8 *)&pVVar25->memoryTypes[6].heapIndex;
      *(undefined8 *)&pVVar42->memoryTypes[3].heapIndex = uVar20;
      *(undefined8 *)&pVVar42->memoryTypes[4].heapIndex = uVar23;
      uVar20 = *(undefined8 *)&pVVar25->memoryTypes[7].heapIndex;
      uVar23 = *(undefined8 *)&pVVar25->memoryTypes[8].heapIndex;
      *(undefined8 *)&pVVar42->memoryTypes[5].heapIndex = uVar21;
      *(undefined8 *)&pVVar42->memoryTypes[6].heapIndex = uVar22;
      uVar21 = *(undefined8 *)&pVVar25->memoryTypes[9].heapIndex;
      uVar22 = *(undefined8 *)&pVVar25->memoryTypes[10].heapIndex;
      *(undefined8 *)&pVVar42->memoryTypes[7].heapIndex = uVar20;
      *(undefined8 *)&pVVar42->memoryTypes[8].heapIndex = uVar23;
      uVar20 = *(undefined8 *)&pVVar25->memoryTypes[0xb].heapIndex;
      uVar23 = *(undefined8 *)&pVVar25->memoryTypes[0xc].heapIndex;
      *(undefined8 *)&pVVar42->memoryTypes[9].heapIndex = uVar21;
      *(undefined8 *)&pVVar42->memoryTypes[10].heapIndex = uVar22;
      uVar21 = *(undefined8 *)&pVVar25->memoryTypes[0xd].heapIndex;
      uVar22 = *(undefined8 *)&pVVar25->memoryTypes[0xe].heapIndex;
      *(undefined8 *)&pVVar42->memoryTypes[0xb].heapIndex = uVar20;
      *(undefined8 *)&pVVar42->memoryTypes[0xc].heapIndex = uVar23;
      *(undefined8 *)&pVVar42->memoryTypes[0xd].heapIndex = uVar21;
      *(undefined8 *)&pVVar42->memoryTypes[0xe].heapIndex = uVar22;
      lVar40 = lVar40 + -1;
      pVVar25 = (VkPhysicalDeviceMemoryProperties *)puVar2;
      pVVar42 = (VkPhysicalDeviceMemoryProperties *)puVar1;
    } while (lVar40 != 0);
    *(undefined8 *)puVar1 = *(undefined8 *)puVar2;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[0];
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar4,8);
    (this->MemoryBudget).heapBudget[0] = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[1];
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar5,8);
    (this->MemoryBudget).heapBudget[1] = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[2];
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar6,8);
    (this->MemoryBudget).heapBudget[2] = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[3];
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar7,8);
    (this->MemoryBudget).heapBudget[3] = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[4];
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar8,8);
    (this->MemoryBudget).heapBudget[4] = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[5];
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar9,8);
    (this->MemoryBudget).heapBudget[5] = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[6];
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar10,8);
    uVar51 = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    (this->MemoryBudget).heapBudget[6] = uVar51;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[7];
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar11,8);
    uVar50 = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    (this->MemoryBudget).heapBudget[7] = uVar50;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[8];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar12,8);
    uVar44 = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    (this->MemoryBudget).heapBudget[8] = uVar44;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[9];
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar13,8);
    uVar45 = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    (this->MemoryBudget).heapBudget[9] = uVar45;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[10];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar14,8);
    uVar43 = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    (this->MemoryBudget).heapBudget[10] = uVar43;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[0xb];
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar15,8);
    uVar49 = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    (this->MemoryBudget).heapBudget[0xb] = uVar49;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[0xc];
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar16,8);
    uVar48 = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    (this->MemoryBudget).heapBudget[0xc] = uVar48;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[0xd];
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar17,8);
    uVar47 = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    (this->MemoryBudget).heapBudget[0xd] = uVar47;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[0xe];
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar18,8);
    uVar46 = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    (this->MemoryBudget).heapBudget[0xe] = uVar46;
    uVar41 = (longlong)GVulkanBudgetPercentageScale * (this->MemoryBudget).heapBudget[0xf];
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar41;
    lVar40 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar19,8);
    uVar41 = (uVar41 - lVar40 >> 1) + lVar40 >> 6;
    (this->MemoryBudget).heapBudget[0xf] = uVar41;
    FVar27 = StatPtr_STAT_VulkanMemoryBudget0;
    if (StatPtr_STAT_VulkanMemoryBudget0 ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget0>)0x0) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryBudget0");
      FVar27 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget0>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget0,*pFVar26,
                          L"Memory Heap 0 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar27;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapBudget[0],false);
    FVar28 = StatPtr_STAT_VulkanMemoryBudget1;
    if (StatPtr_STAT_VulkanMemoryBudget1 ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget1>)0x0) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryBudget1");
      FVar28 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget1>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget1,*pFVar26,
                          L"Memory Heap 1 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar28;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapBudget[1],false);
    FVar29 = StatPtr_STAT_VulkanMemoryBudget2;
    if (StatPtr_STAT_VulkanMemoryBudget2 ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget2>)0x0) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryBudget2");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget2>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget2,*pFVar26,
                          L"Memory Heap 2 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar29;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapBudget[2],false);
    FVar30 = StatPtr_STAT_VulkanMemoryBudget3;
    if (StatPtr_STAT_VulkanMemoryBudget3 ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget3>)0x0) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryBudget3");
      FVar30 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget3>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget3,*pFVar26,
                          L"Memory Heap 3 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar30;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapBudget[3],false);
    FVar31 = StatPtr_STAT_VulkanMemoryBudget4;
    if (StatPtr_STAT_VulkanMemoryBudget4 ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget4>)0x0) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryBudget4");
      FVar31 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget4>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget4,*pFVar26,
                          L"Memory Heap 4 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar31;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapBudget[4],false);
    FVar32 = StatPtr_STAT_VulkanMemoryBudget5;
    if (StatPtr_STAT_VulkanMemoryBudget5 ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget5>)0x0) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryBudget5");
      FVar32 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudget5>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudget5,*pFVar26,
                          L"Memory Heap 5 Budget","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar32;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapBudget[5],false);
    FVar33 = StatPtr_STAT_VulkanMemoryBudgetX;
    if (StatPtr_STAT_VulkanMemoryBudgetX ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudgetX>)0x0) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryBudgetX");
      FVar33 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryBudgetX>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryBudgetX,*pFVar26,
                          L"Memory Heap (remaining) Budget","STATGROUP_VulkanMemoryRaw",
                          "STATCAT_Advanced",L"Vulkan Memory Raw",true,false,ST_int64,false,true,
                          MCR_Physical);
    }
    FVar3 = *(FName *)FVar33;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>
              (FVar3,Set,
               uVar41 + uVar46 + uVar47 + uVar48 + uVar49 + uVar43 + uVar45 + uVar44 + uVar50 +
               uVar51,false);
    FVar34 = StatPtr_STAT_VulkanMemoryUsage0;
    if (StatPtr_STAT_VulkanMemoryUsage0 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage0>)0x0
       ) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryUsage0");
      FVar34 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage0>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage0,*pFVar26,
                          L"Memory Heap 0 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar34;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapUsage[0],false);
    FVar35 = StatPtr_STAT_VulkanMemoryUsage1;
    if (StatPtr_STAT_VulkanMemoryUsage1 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage1>)0x0
       ) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryUsage1");
      FVar35 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage1>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage1,*pFVar26,
                          L"Memory Heap 1 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar35;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapUsage[1],false);
    FVar36 = StatPtr_STAT_VulkanMemoryUsage2;
    if (StatPtr_STAT_VulkanMemoryUsage2 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage2>)0x0
       ) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryUsage2");
      FVar36 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage2>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage2,*pFVar26,
                          L"Memory Heap 2 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar36;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapUsage[2],false);
    FVar37 = StatPtr_STAT_VulkanMemoryUsage3;
    if (StatPtr_STAT_VulkanMemoryUsage3 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage3>)0x0
       ) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryUsage3");
      FVar37 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage3>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage3,*pFVar26,
                          L"Memory Heap 3 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar37;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapUsage[3],false);
    FVar38 = StatPtr_STAT_VulkanMemoryUsage4;
    if (StatPtr_STAT_VulkanMemoryUsage4 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage4>)0x0
       ) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryUsage4");
      FVar38 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage4>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage4,*pFVar26,
                          L"Memory Heap 4 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar38;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapUsage[4],false);
    FVar39 = StatPtr_STAT_VulkanMemoryUsage5;
    if (StatPtr_STAT_VulkanMemoryUsage5 == (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage5>)0x0
       ) {
      pFVar26 = ::FName::FName(local_268,"STAT_VulkanMemoryUsage5");
      FVar39 = (FThreadSafeStaticStat<FStat_STAT_VulkanMemoryUsage5>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanMemoryUsage5,*pFVar26,
                          L"Memory Heap 5 Usage","STATGROUP_VulkanMemoryRaw","STATCAT_Advanced",
                          L"Vulkan Memory Raw",true,false,ST_int64,false,true,MCR_Physical);
    }
    FVar3 = *(FName *)FVar39;
    local_268[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_268[0].Number = FVar3.Number;
    FThreadStats::AddMessage<__int64>(FVar3,Set,(this->MemoryBudget).heapUsage[5],false);
  }
  return;
}

