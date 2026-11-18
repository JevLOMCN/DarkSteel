// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// SetDataDelegate @ 141a1f8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FRawStatsWriteFile::SetDataDelegate(FRawStatsWriteFile *this,bool param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  FStatsThreadState *pFVar7;
  FDelegateHandle FVar8;
  undefined1 auStackY_e8 [32];
  undefined1 local_98 [40];
  ForAnyElementType local_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  longlong lStack_40;
  void *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar7 = FStatsThreadState::GetLocalState();
  if (param_1) {
    local_98._0_8_ = WriteRawStatPacket;
    local_98._8_4_ = 0;
    local_98._24_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
    local_98._16_8_ = WriteRawStatPacket;
    FVar8 = TMulticastDelegateRegistration<void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
            ::AddRaw<FRawStatsWriteFile>
                      ((TMulticastDelegateRegistration<void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                        *)&pFVar7->NewRawStatPacket,(FRawStatsWriteFile *)local_98,
                       (pmf_51ee9c39 *)this);
    this->_padding_ = *(longlong *)FVar8.ID;
    if (this->bWrittenOffsetToData == false) {
      plVar2 = &this->_padding_;
      local_98._32_8_ = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_60.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_60.MaxBits = _UNK_150631d94;
      lStack_40 = _UNK_150631d98;
      local_30 = (void *)0x0;
      local_28 = 0;
      if ((((undefined1 *)*plVar2 <= local_98 + 0x20) &&
          (local_98 + 0x20 <
           (undefined1 *)*plVar2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x58)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,(ForAnyElementType *)plVar2,piVar1);
      }
      *(int *)&this->_padding_ = iVar6 + 1;
      FStatsFrameInfo::FStatsFrameInfo
                ((FStatsFrameInfo *)(*plVar2 + (longlong)iVar6 * 0x58),
                 (FStatsFrameInfo *)(local_98 + 0x20));
      local_28 = 0;
      if (local_30 != (void *)0x0) {
        FMemory::Free(local_30);
      }
      uVar4 = local_68 >> 0x20;
      local_68 = local_68 & 0xffffffff00000000;
      if ((int)uVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_70,0,(int *)((longlong)&local_68 + 4));
      }
      iVar6 = local_60.MaxBits;
      lStack_40 = 0xffffffff;
      local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
      if (0x80 < (uint)iVar6) {
        local_60.NumBits = 0;
        local_60.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
      }
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
      }
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
      this->bWrittenOffsetToData = true;
    }
  }
  else if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&pFVar7->NewRawStatPacket,
               (FDelegateHandle)this->_padding_);
  }
  return;
}

// WriteRawStatPacket @ 141a33920

void __thiscall
FRawStatsWriteFile::WriteRawStatPacket(FRawStatsWriteFile *this,FStatPacket *param_1)

{
  FArchiveState local_b8;
  longlong local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_18 = 0;
  local_20 = &this->_padding_;
  FArchiveState::SetIsSaving(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  local_28 = (longlong)(int)this->_padding_;
  local_b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  WriteStatPacket(this,(FArchive *)&local_b8,param_1);
  IStatsWriteFile::SendTask((IStatsWriteFile *)this);
  FArchive::~FArchive((FArchive *)&local_b8);
  return;
}

// WriteStatPacket @ 141a33ab0

void __thiscall
FRawStatsWriteFile::WriteStatPacket(FRawStatsWriteFile *this,FArchive *param_1,FStatPacket *param_2)

{
  uint *puVar1;
  long64 *plVar2;
  uint *puVar3;
  longlong *plVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  Type local_res10 [2];
  uint local_res18 [2];
  ulong64 local_res20;
  
  plVar2 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    param_2->Frame = *plVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_2->ThreadId;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = param_2->ThreadType;
  if ((Type *)plVar4[1] < (Type *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(Type *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  ::operator<<(param_1,&param_2->bBrokenCallstacks);
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res18[0] = (param_2->StatMessages).NumElements;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  uVar7 = (param_2->StatMessages).NumElements;
  uVar10 = 0;
  if (uVar7 != 0) {
    uVar9 = (ulonglong)uVar7;
    pFVar8 = (param_2->StatMessages).Chunks.Array.AllocatorInstance.Data;
    do {
      lVar5 = *(longlong *)pFVar8;
      FStatsWriteStream::WriteFName
                ((FStatsWriteStream *)&this->_padding_,param_1,
                 *(FStatNameAndInfo *)(lVar5 + 8 + uVar10 * 0x10));
      uVar7 = *(int *)(lVar5 + 0xc + uVar10 * 0x10) >> 9 & 7;
      if (uVar7 == 2) {
LAB_141a33c6d:
        plVar4 = *(longlong **)&param_1->field_0x8;
        local_res20 = *(ulong64 *)(lVar5 + uVar10 * 0x10);
        if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) {
LAB_141a33d23:
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res20,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_res20);
          }
        }
        else {
          local_res20 = *(ulong64 *)*plVar4;
          *plVar4 = *plVar4 + 8;
        }
      }
      else if (uVar7 == 3) {
        plVar4 = *(longlong **)&param_1->field_0x8;
        local_res20 = *(ulong64 *)(lVar5 + uVar10 * 0x10);
        if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) goto LAB_141a33d23;
        local_res20 = *(ulong64 *)*plVar4;
        *plVar4 = *plVar4 + 8;
      }
      else if (uVar7 == 4) {
        FStatsWriteStream::WriteFName
                  ((FStatsWriteStream *)&this->_padding_,param_1,
                   (FStatNameAndInfo)(*(ulonglong *)(lVar5 + uVar10 * 0x10) | 0x1000000000000));
      }
      else if (uVar7 == 5) goto LAB_141a33c6d;
      uVar7 = (int)uVar10 + 1;
      uVar10 = 0;
      pFVar6 = pFVar8 + 8;
      if (uVar7 < 0x1000) {
        uVar10 = (ulonglong)uVar7;
        pFVar6 = pFVar8;
      }
      uVar9 = uVar9 - 1;
      pFVar8 = pFVar6;
    } while (uVar9 != 0);
  }
  return;
}

