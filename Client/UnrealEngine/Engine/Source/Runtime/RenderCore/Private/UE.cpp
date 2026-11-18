// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 190

// DereferenceIfNecessary<FRDGResourceDumpContext,FRDGResourceDumpContext_*_&> @ 145d03f60

FRDGResourceDumpContext * __cdecl
UE::Core::Private::DereferenceIfNecessary<FRDGResourceDumpContext,FRDGResourceDumpContext_*_&>
          (FRDGResourceDumpContext **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 145d06750

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<FName> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_> @ 145d067f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_>
          (ushort param_1,ForElementType<FRHIGPUBufferReadback_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 145d068c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_> @ 145d069a0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_>
          (uint param_1,uint param_2,ForElementType<FRHIGPUBufferReadback_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_> @ 145d06a60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHIGPUBufferReadback_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIGPUBufferReadback_*>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator<< @ 145d0c320

FArchive * __cdecl
UE::PipelineCacheUtilities::Private::operator<<
          (FArchive *param_1,FStableKeysSerializedHeader *param_2)

{
  EVersion *pEVar1;
  long64 *plVar2;
  EMagic *pEVar3;
  EVersion *pEVar4;
  long64 *plVar5;
  
  pEVar3 = (EMagic *)**(longlong **)&param_1->field_0x8;
  if ((EMagic *)(*(longlong **)&param_1->field_0x8)[1] < pEVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Magic);
    }
  }
  else {
    param_2->Magic = *pEVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pEVar1 = &param_2->Version;
  pEVar4 = (EVersion *)**(undefined8 **)&param_1->field_0x8;
  if ((EVersion *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,pEVar1);
    }
  }
  else {
    *pEVar1 = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar2 = &param_2->NumEntries;
  plVar5 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar5 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *plVar2 = *plVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar2,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar2);
  return param_1;
}

// IsDumpingFrame @ 145d443d0

bool __cdecl UE::RenderCore::DumpGPU::IsDumpingFrame(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0xab9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        bVar2 = (bool)(*pcVar1)();
        return bVar2;
      }
    }
  }
  bVar2 = IsInGameThread();
  if (bVar2) {
    return GRDGResourceDumpContext_GameThread != (FRDGResourceDumpContext *)0x0;
  }
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    return GRDGResourceDumpContext_RenderThread != (FRDGResourceDumpContext *)0x0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                     ,0xac5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// LoadStableKeysFile @ 145d45d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::PipelineCacheUtilities::LoadStableKeysFile
          (TStringView<wchar_t> *param_1,
          TArray<FStableShaderKeyAndValue,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  uint *puVar2;
  char *pcVar3;
  FStableShaderKeyAndValue *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  IFileManager *pIVar9;
  FString *pFVar10;
  FArchive *pFVar11;
  FArchiveProxy *this;
  longlong lVar12;
  ulong64 uVar13;
  ForElementType<FName> FVar14;
  wchar_t *pwVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStackY_208 [32];
  char local_1b8 [4];
  uint local_1b4;
  ForAnyElementType local_1b0;
  int local_1a8 [2];
  FStableKeysSerializedHeader local_1a0;
  FString local_188;
  TStringView<wchar_t> local_178;
  FString local_168;
  FStableShaderKeyAndValue local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pIVar9 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar9 + 0x18);
  pFVar10 = ::FString::ConstructFromPtrSize(&local_168,param_1->DataPtr,param_1->Size);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar11 = (FArchive *)(*pcVar1)(pIVar9,pwVar15,0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (pFVar11 == (FArchive *)0x0) {
    bVar5 = false;
  }
  else {
    this = ::operator_new(0xf8);
    if (this == (FArchiveProxy *)0x0) {
      this = (FArchiveProxy *)0x0;
    }
    else {
      FArchiveProxy::FArchiveProxy(this,pFVar11);
      this->_padding_ = (longlong)&___7FNameAsStringIndexProxyArchive__6B_;
      this[1]._padding_ = 0;
      this[1]._padding_ = 0;
      this[1]._padding_ = 0;
      *(undefined4 *)&this[1]._padding_ = 0;
      *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
      *(undefined4 *)&this[1]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
      this[1]._padding_ = 0;
      *(undefined4 *)&this[1]._padding_ = 0;
      this[1]._padding_ = 0;
      this[1]._padding_ = 0;
    }
    uVar19 = 0;
    local_1a0.Version = Current;
    local_1a0.Magic = Magic;
    Private::operator<<((FArchive *)this,&local_1a0);
    if ((local_1a0.Magic == Magic) && (local_1a0.Version == Current)) {
      local_1b0.Data = (FScriptContainerElement *)0x0;
      local_1a8[0] = 0;
      local_1a8[1] = 0;
      puVar2 = *(uint **)this->_padding_;
      if ((uint *)((undefined8 *)this->_padding_)[1] < puVar2 + 1) {
        if ((this->_padding_ & 0x10000) == 0) {
          (**(code **)(this->_padding_ + 0x188))(this,&local_1b4,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_1b4);
        }
      }
      else {
        local_1b4 = *puVar2;
        *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + 4;
      }
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,local_1b4,&local_1b0,local_1a8,local_1a8 + 1);
      uVar20 = uVar19;
      if (0 < (int)local_1b4) {
        do {
          uVar16 = (uint)uVar20;
          uVar7 = 0;
          if ((int)uVar16 < local_1a8[0]) {
            uVar7 = ~uVar16 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          (**(code **)(this->_padding_ + 0x188))
                    (this,local_1b0.Data + (longlong)(int)uVar16 * 0x14,0x14);
          uVar20 = (ulonglong)(uVar16 + 1);
        } while ((int)(uVar16 + 1) < (int)local_1b4);
      }
      uVar20 = uVar19;
      if (0 < local_1a0.NumEntries) {
        do {
          local_158.ClassNameAndObjectPath.ObjectClassAndPath.AllocatorInstance.SecondaryData =
               (ForElementType<FName>)0x0;
          local_158.PipelineHash.Hash[0x10] = '\0';
          local_158.PipelineHash.Hash[0x11] = '\0';
          local_158.PipelineHash.Hash[0x12] = '\0';
          local_158.PipelineHash.Hash[0x13] = '\0';
          local_158.KeyHash = 0;
          local_158.OutputHash.Hash[0x10] = '\0';
          local_158.OutputHash.Hash[0x11] = '\0';
          local_158.OutputHash.Hash[0x12] = '\0';
          local_158.OutputHash.Hash[0x13] = '\0';
          local_158.PipelineHash.Hash[0] = '\0';
          local_158.PipelineHash.Hash[1] = '\0';
          local_158.PipelineHash.Hash[2] = '\0';
          local_158.PipelineHash.Hash[3] = '\0';
          local_158.PipelineHash.Hash[4] = '\0';
          local_158.PipelineHash.Hash[5] = '\0';
          local_158.PipelineHash.Hash[6] = '\0';
          local_158.PipelineHash.Hash[7] = '\0';
          local_158.PipelineHash.Hash[8] = '\0';
          local_158.PipelineHash.Hash[9] = '\0';
          local_158.PipelineHash.Hash[10] = '\0';
          local_158.PipelineHash.Hash[0xb] = '\0';
          local_158.PipelineHash.Hash[0xc] = '\0';
          local_158.PipelineHash.Hash[0xd] = '\0';
          local_158.PipelineHash.Hash[0xe] = '\0';
          local_158.PipelineHash.Hash[0xf] = '\0';
          local_158.ClassNameAndObjectPath.ObjectClassAndPath.ArrayNum = 0;
          local_158.OutputHash.Hash[0] = '\0';
          local_158.OutputHash.Hash[1] = '\0';
          local_158.OutputHash.Hash[2] = '\0';
          local_158.OutputHash.Hash[3] = '\0';
          local_158.OutputHash.Hash[4] = '\0';
          local_158.OutputHash.Hash[5] = '\0';
          local_158.OutputHash.Hash[6] = '\0';
          local_158.OutputHash.Hash[7] = '\0';
          local_158.OutputHash.Hash[8] = '\0';
          local_158.OutputHash.Hash[9] = '\0';
          local_158.OutputHash.Hash[10] = '\0';
          local_158.OutputHash.Hash[0xb] = '\0';
          local_158.OutputHash.Hash[0xc] = '\0';
          local_158.OutputHash.Hash[0xd] = '\0';
          local_158.OutputHash.Hash[0xe] = '\0';
          local_158.OutputHash.Hash[0xf] = '\0';
          local_158.ClassNameAndObjectPath.ObjectClassAndPath.ArrayMax = 0x10;
          local_158.ShaderType.ComparisonIndex.Value = 0;
          local_158.ShaderType.Number = 0;
          local_158.ShaderClass.ComparisonIndex.Value = 0;
          local_158.ShaderClass.Number = 0;
          local_158.MaterialDomain.ComparisonIndex.Value = 0;
          local_158.MaterialDomain.Number = 0;
          local_158.FeatureLevel.ComparisonIndex.Value = 0;
          local_158.FeatureLevel.Number = 0;
          local_158.QualityLevel.ComparisonIndex.Value = 0;
          local_158.QualityLevel.Number = 0;
          local_158.TargetFrequency.ComparisonIndex.Value = 0;
          local_158.TargetFrequency.Number = 0;
          local_158.TargetPlatform.ComparisonIndex.Value = 0;
          local_158.TargetPlatform.Number = 0;
          local_158.VFType.ComparisonIndex.Value = 0;
          local_158.VFType.Number = 0;
          local_158.PermutationId.ComparisonIndex.Value = 0;
          local_158.PermutationId.Number = 0;
          local_1b8[0] = -1;
          pcVar3 = *(char **)this->_padding_;
          if ((char *)((undefined8 *)this->_padding_)[1] < pcVar3 + 1) {
            (**(code **)(this->_padding_ + 0x188))(this,local_1b8,1);
          }
          else {
            local_1b8[0] = *pcVar3;
            *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + 1;
          }
          lVar12 = (longlong)local_1b8[0];
          uVar7 = 0;
          if ('\0' < local_1b8[0]) {
            iVar8 = Core::Private::
                    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                              (8,4,(int)local_1b8[0],(ForElementType<FName> *)&local_158,
                               &local_158.ClassNameAndObjectPath.ObjectClassAndPath.ArrayNum,
                               &local_158.ClassNameAndObjectPath.ObjectClassAndPath.ArrayMax);
            FVar14 = (ForElementType<FName>)&local_158;
            if (local_158.ClassNameAndObjectPath.ObjectClassAndPath.AllocatorInstance.SecondaryData
                != (ForElementType<FName>)0x0) {
              FVar14 = local_158.ClassNameAndObjectPath.ObjectClassAndPath.AllocatorInstance.
                       SecondaryData;
            }
            memset((void *)((longlong)FVar14 + (longlong)iVar8 * 8),0,lVar12 << 3);
            uVar18 = uVar19;
            if ('\0' < local_1b8[0]) {
              do {
                uVar17 = (uint)uVar18;
                pcVar1 = *(code **)(this->_padding_ + 0x178);
                uVar16 = uVar7;
                if ((int)uVar17 < local_158.ClassNameAndObjectPath.ObjectClassAndPath.ArrayNum) {
                  uVar16 = ~uVar17 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar1 = (code *)swi(3);
                  uVar6 = (*pcVar1)();
                  return (bool)uVar6;
                }
                FVar14 = (ForElementType<FName>)&local_158;
                if (local_158.ClassNameAndObjectPath.ObjectClassAndPath.AllocatorInstance.
                    SecondaryData != (ForElementType<FName>)0x0) {
                  FVar14 = local_158.ClassNameAndObjectPath.ObjectClassAndPath.AllocatorInstance.
                           SecondaryData;
                }
                (*pcVar1)(this,(longlong)FVar14 + (longlong)(int)uVar17 * 8);
                uVar18 = (ulonglong)(uVar17 + 1);
              } while ((int)(uVar17 + 1) < (int)local_1b8[0]);
            }
          }
          (**(code **)(this->_padding_ + 0x178))(this,&local_158.ShaderType);
          (**(code **)(this->_padding_ + 0x178))(this,&local_158.ShaderClass);
          (**(code **)(this->_padding_ + 0x178))(this,&local_158.MaterialDomain);
          (**(code **)(this->_padding_ + 0x178))(this,&local_158.FeatureLevel);
          (**(code **)(this->_padding_ + 0x178))(this,&local_158.QualityLevel);
          (**(code **)(this->_padding_ + 0x178))(this,&local_158.TargetFrequency);
          (**(code **)(this->_padding_ + 0x178))(this,&local_158.TargetPlatform);
          (**(code **)(this->_padding_ + 0x178))(this,&local_158.VFType);
          (**(code **)(this->_padding_ + 0x178))(this,&local_158.PermutationId);
          uVar13 = ReadVarUIntFromArchive((FArchive *)this);
          uVar17 = (uint)uVar13;
          uVar16 = uVar7;
          if ((int)uVar17 < local_1a8[0]) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          local_158.PipelineHash.Hash._0_8_ =
               *(undefined8 *)(local_1b0.Data + (longlong)(int)uVar17 * 0x14);
          local_158.PipelineHash.Hash._8_8_ =
               *(undefined8 *)(local_1b0.Data + (longlong)(int)uVar17 * 0x14 + 8);
          local_158.PipelineHash.Hash._16_4_ =
               *(undefined4 *)(local_1b0.Data + (longlong)(int)uVar17 * 0x14 + 0x10);
          uVar13 = ReadVarUIntFromArchive((FArchive *)this);
          if ((ulonglong)(longlong)local_1a8[0] <= uVar13) {
            if (local_158.ClassNameAndObjectPath.ObjectClassAndPath.AllocatorInstance.SecondaryData
                != (ForElementType<FName>)0x0) {
              FMemory::Free((void *)local_158.ClassNameAndObjectPath.ObjectClassAndPath.
                                    AllocatorInstance.SecondaryData);
            }
            bVar5 = false;
            goto LAB_145d4643f;
          }
          uVar17 = (uint)uVar13;
          uVar16 = uVar7;
          if ((int)uVar17 < local_1a8[0]) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          local_158.OutputHash.Hash._0_8_ =
               *(undefined8 *)(local_1b0.Data + (longlong)(int)uVar17 * 0x14);
          local_158.OutputHash.Hash._8_8_ =
               *(undefined8 *)(local_1b0.Data + (longlong)(int)uVar17 * 0x14 + 8);
          local_158.OutputHash.Hash._16_4_ =
               *(undefined4 *)(local_1b0.Data + (longlong)(int)uVar17 * 0x14 + 0x10);
          FCompactFullName::ToString(&local_158.ClassNameAndObjectPath,&local_188);
          local_178.DataPtr = (wchar_t *)local_188.Data.AllocatorInstance.Data;
          local_178.Size = local_188.Data.ArrayNum - 1;
          if (local_188.Data.ArrayNum == 0) {
            local_178.Size = uVar7;
          }
          FCompactFullName::ParseFromString(&local_158.ClassNameAndObjectPath,&local_178);
          FStableShaderKeyAndValue::ComputeKeyHash(&local_158);
          pFVar4 = (FStableShaderKeyAndValue *)(param_2->AllocatorInstance).Data;
          if (((pFVar4 <= &local_158) && (&local_158 < pFVar4 + param_2->ArrayMax)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
          iVar8 = param_2->ArrayNum;
          if (iVar8 == param_2->ArrayMax) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x108,8,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar8 + 1;
          FStableShaderKeyAndValue::FStableShaderKeyAndValue
                    ((FStableShaderKeyAndValue *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x108),&local_158);
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (local_158.ClassNameAndObjectPath.ObjectClassAndPath.AllocatorInstance.SecondaryData !=
              (ForElementType<FName>)0x0) {
            FMemory::Free((void *)local_158.ClassNameAndObjectPath.ObjectClassAndPath.
                                  AllocatorInstance.SecondaryData);
          }
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar20 < local_1a0.NumEntries);
      }
      bVar5 = true;
LAB_145d4643f:
      if (local_1b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data);
      }
    }
    else {
      bVar5 = false;
    }
    if (this != (FArchiveProxy *)0x0) {
      (**(code **)this->_padding_)(this,1);
    }
    (*(code *)**(undefined8 **)pFVar11)(pFVar11,1);
  }
  return bVar5;
}

// ShouldCameraCut @ 145d4eab0

bool __cdecl UE::RenderCore::DumpGPU::ShouldCameraCut(void)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0xacc,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pTVar2 = GDumpGPUCameraCut.Ref;
  if (GRDGResourceDumpContext_GameThread != (FRDGResourceDumpContext *)0x0) {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
    }
    if (pTVar2->ShadowedValue[0] != 0) {
      return GRDGResourceDumpContext_GameThread->DumpedFrameId == 0;
    }
  }
  return false;
}

// TickEndFrame @ 145d5f680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl UE::RenderCore::DumpGPU::TickEndFrame(void)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar6;
  FThreadHeartBeat *this_01;
  FRDGResourceDumpContext *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined **local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58 [3];
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0xa75,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (GRDGResourceDumpContext_GameThread == (FRDGResourceDumpContext *)0x0) {
    if (GNextRDGResourceDumpContext != (FRDGResourceDumpContext *)0x0) {
      if (GNextDumpingRemainingTime <= 0.0) {
        if (0 < GNextDumpingRemaingFrames) {
          if ((GNextRDGResourceDumpContext == (FRDGResourceDumpContext *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("GNextRDGResourceDumpContext",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                                 ,0xaa8,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (0 < GNextDumpingRemaingFrames + -1) {
            GNextDumpingRemaingFrames = GNextDumpingRemaingFrames + -1;
            return;
          }
          GNextDumpingRemaingFrames = -1;
        }
      }
      else {
        if ((GNextRDGResourceDumpContext == (FRDGResourceDumpContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("GNextRDGResourceDumpContext",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                               ,0xa9e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (0.0 < (float)((double)GNextDumpingRemainingTime - (double)FApp::DeltaTime)) {
          GNextDumpingRemainingTime =
               (float)((double)GNextDumpingRemainingTime - (double)FApp::DeltaTime);
          return;
        }
        GNextDumpingRemainingTime = -1.0;
      }
      FRDGResourceDumpContext::Start(GNextRDGResourceDumpContext);
    }
  }
  else {
    if ((GNextRDGResourceDumpContext != (FRDGResourceDumpContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GNextRDGResourceDumpContext == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0xa79,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = GRDGResourceDumpContext_GameThread;
    GRDGResourceDumpContext_GameThread->DumpedFrameId =
         GRDGResourceDumpContext_GameThread->DumpedFrameId + 1;
    if ((pFVar7->FrameCount < pFVar7->DumpedFrameId) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GRDGResourceDumpContext_GameThread->DumpedFrameId <= GRDGResourceDumpContext_GameThread->FrameCount"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                           ,0xa7c,L""), pFVar7 = GRDGResourceDumpContext_GameThread, bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar7->DumpedFrameId < pFVar7->FrameCount) {
      iStack_80 = pFVar7->FrameCount - pFVar7->DumpedFrameId;
      local_70 = (undefined ***)0x0;
      local_98[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::RenderCore::DumpGPU::TickEndFrame'::__l29::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_88 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::RenderCore::DumpGPU::TickEndFrame'::`29'::<lambda_1>,1,0>
                  ::_vftable_;
      this = FRenderCommandList::GetInstanceTLS();
      if (this == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UE::RenderCore::DumpGPU::TickEndFrame_::__l29::TSTR_FDumpGPULogRemaingFrames2689>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        this_00 = FRenderCommandList::GetRenderThread(this);
        local_58[1]._4_4_ = uStack_7c;
        local_58[1]._0_4_ = iStack_80;
        local_68._0_8_ = local_98[0];
        local_40 = local_70;
        local_58[0] = local_88;
        local_58[2] = (undefined **)local_78;
        local_98[0] = (code *)0x0;
        local_38 = 2;
        pFVar6 = (FRenderCommandTag *)
                 TRenderCommandTag<`UE::RenderCore::DumpGPU::TickEndFrame'::__l29::TSTR_FDumpGPULogRemaingFrames2689>
                 ::Get();
        RenderCommandPipe::FCommandList::Enqueue
                  (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_68,pFVar6);
        uVar9 = (ulonglong)local_38;
        if ((2 < uVar9) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9] ==
            Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            pppuVar8 = (undefined ***)(local_68 + 0x10);
            if (local_40 != (undefined ***)0x0) {
              pppuVar8 = local_40;
            }
            (*(code *)(*pppuVar8)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])(local_68);
        }
      }
      if (local_98[0] != (code *)0x0) {
        pppuVar8 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar8 = local_70;
        }
        (*(code *)(*pppuVar8)[2])();
      }
    }
    else {
      FRDGResourceDumpContext::Finish(pFVar7);
      pFVar7 = GRDGResourceDumpContext_GameThread;
      if (GRDGResourceDumpContext_GameThread != (FRDGResourceDumpContext *)0x0) {
        DestructItems<TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>,int>
                  ((TUniquePtr<FRDGResourceDumpContext::FStagingBufferPoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingBufferPoolEntry>_>
                    *)(GRDGResourceDumpContext_GameThread->StagingBufferPool).AllocatorInstance.Data
                   ,(GRDGResourceDumpContext_GameThread->StagingBufferPool).ArrayNum);
        pFVar1 = (pFVar7->StagingBufferPool).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        DestructItems<TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>,int>
                  ((TUniquePtr<FRDGResourceDumpContext::FStagingTexturePoolEntry,TDefaultDelete<FRDGResourceDumpContext::FStagingTexturePoolEntry>_>
                    *)(pFVar7->StagingTexturePool).AllocatorInstance.Data,
                   (pFVar7->StagingTexturePool).ArrayNum);
        pFVar1 = (pFVar7->StagingTexturePool).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar7->IsDumpedToDisk).HashSize = 0;
        FVar2 = (pFVar7->IsDumpedToDisk).Hash.SecondaryData;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FVar2);
        }
        TSparseArray<TSparseSetElement<void_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<void_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&(pFVar7->IsDumpedToDisk).Elements);
        *(undefined4 *)&(pFVar7->LastResourceVersion).field_0x48 = 0;
        pvVar3 = *(void **)&(pFVar7->LastResourceVersion).field_0x40;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        TSparseArray<TSparseSetElement<TTuple<FRDGResource_const_*,FRDGPass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FRDGResource_const_*,FRDGPass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FRDGResource_const_*,FRDGPass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar7->LastResourceVersion);
        pFVar1 = (pFVar7->DumpingDirectoryPath).Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        ::operator_delete(pFVar7,0x240);
      }
      GRDGResourceDumpContext_GameThread = (FRDGResourceDumpContext *)0x0;
      GRDGResourceDumpContext_RenderThread = (FRDGResourceDumpContext *)0x0;
      this_01 = FThreadHeartBeat::Get();
      FThreadHeartBeat::ResumeHeartBeat(this_01,true);
      ResumeRenderThreadTimeout();
    }
  }
  return;
}

// GetTraceIds<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_> @ 145d85050

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __cdecl
UE::Tasks::Private::GetTraceIds<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *param_1)

{
  int *piVar1;
  FTaskHandle *pFVar2;
  uint uVar3;
  int iVar4;
  FTaskBase *pFVar5;
  atomic<unsigned___int64> *paVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar10;
  FTaskHandle *pFVar11;
  undefined1 local_res8 [8];
  atomic<unsigned___int64> local_28 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar2 = pFVar11 + iVar4;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar2) break;
    pFVar5 = (pFVar11->Pimpl).Reference;
    if (pFVar5 != (FTaskBase *)0x0) {
      local_28[0] = pFVar5->TraceId;
      paVar6 = (atomic<unsigned___int64> *)(__return_storage_ptr__->AllocatorInstance).Data;
      if ((paVar6 <= local_28) && (local_28 < paVar6 + *piVar1)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pTVar10 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar10;
        }
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(atomic<unsigned___int64> *)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_28[0];
    }
    pFVar11 = pFVar11 + 1;
  }
  return __return_storage_ptr__;
}

// Prerequisites<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_> @ 145d86080

TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> * __cdecl
UE::Tasks::Prerequisites<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_>
          (TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *param_1)

{
  return param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>_> @ 145d86090

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<bool>::FItem>_> @ 145d86130

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<bool>::FItem>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<DynamicRenderScaling::TMap<bool>::FItem> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<0,TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>_> @ 145d861d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocForCopy<0,TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FRDGSubresourceState_*> *param_5,int param_6,int *param_7)

{
  FRDGAllocator *this;
  FRDGSubresourceState **ppFVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_4 < param_3) {
    param_4 = 0;
    if (param_3 != 0) {
      if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
        uVar2 = 8;
        if (0xf < (int)(param_1 * param_3)) {
          uVar2 = 0x10;
        }
        this = FRDGAllocator::GetTLS();
        uVar3 = 8;
        if (8 < uVar2) {
          uVar3 = uVar2;
        }
        ppFVar1 = FMemStackBase::Alloc
                            (&this->MemStack,(longlong)(int)(param_1 * param_3),(ulonglong)uVar3);
        param_5->Data = ppFVar1;
        *param_7 = param_3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      RenderCore::Private::OnInvalidRDGAllocatorNum(param_3,(ulonglong)param_1);
    }
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_>_> @ 145d86280

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_> *param_5,int param_6,
          int *param_7)

{
  FRDGAllocator *this;
  TRDGHandle<FRDGUniformBuffer,unsigned_int> *pTVar1;
  ulong64 uVar2;
  
  if (param_4 < param_3) {
    param_4 = 0;
    if (param_3 != 0) {
      if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
        this = FRDGAllocator::GetTLS();
        uVar2 = 8;
        if (0xf < (int)(param_1 * param_3)) {
          uVar2 = 0x10;
        }
        pTVar1 = FMemStackBase::Alloc(&this->MemStack,(longlong)(int)(param_1 * param_3),uVar2);
        param_5->Data = pTVar1;
        *param_7 = param_3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      RenderCore::Private::OnInvalidRDGAllocatorNum(param_3,(ulonglong)param_1);
    }
  }
  *param_7 = param_4;
  return;
}

// ReallocForCopy<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGView,unsigned_int>_>_> @ 145d86310

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGView,unsigned_int>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TRDGHandle<FRDGView,unsigned_int>_> *param_5,int param_6,int *param_7)

{
  FRDGAllocator *this;
  TRDGHandle<FRDGView,unsigned_int> *pTVar1;
  ulong64 uVar2;
  
  if (param_4 < param_3) {
    param_4 = 0;
    if (param_3 != 0) {
      if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
        this = FRDGAllocator::GetTLS();
        uVar2 = 8;
        if (0xf < (int)(param_1 * param_3)) {
          uVar2 = 0x10;
        }
        pTVar1 = FMemStackBase::Alloc(&this->MemStack,(longlong)(int)(param_1 * param_3),uVar2);
        param_5->Data = pTVar1;
        *param_7 = param_3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      RenderCore::Private::OnInvalidRDGAllocatorNum(param_3,(ulonglong)param_1);
    }
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_> @ 145d863a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
    ForElementType<unsigned_int>::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_> @ 145d86450

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGBarrierBatchBegin_*>_> @ 145d86500

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGBarrierBatchBegin_*>_>
          (ushort param_1,ForElementType<FRDGBarrierBatchBegin_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGBarrierBatchBegin_*>::
    ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>_> @ 145d865a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>_>
          (ushort param_1,ForElementType<FRDGPass_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>_> @ 145d86650

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>_>
          (ushort param_1,ForElementType<FRDGPass_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x41) {
      uVar3 = 0x40;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>::
    ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>_> @ 145d86700

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>_>
          (ushort param_1,ForElementType<FRHITransition_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>_> @ 145d867d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>_>
          (ushort param_1,
          ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
    ::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>_> @ 145d86880

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>_>
          (ushort param_1,
          ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
    ::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TRDGArrayAllocator<0>_>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>_> @ 145d86930

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TRDGArrayAllocator<0>_>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>_>
          (ushort param_1,ForElementType<TRDGHandle<FRDGPass,unsigned_int>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x21) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TRDGArrayAllocator<0>_>::
    ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_> @ 145d869e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
          (ushort param_1,ForElementType<Experimental::FHashType> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
    ForElementType<Experimental::FHashType>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_> @ 145d86a90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
          (ushort param_1,ForElementType<Experimental::FHashType> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>::
    ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>_> @ 145d86b40

/* WARNING: Removing unreachable block (ram,0x000145d86b87) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>_>
          (ushort param_1,ForElementType<FRDGBarrierBatchBegin_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>_> @ 145d86bd0

/* WARNING: Removing unreachable block (ram,0x000145d86c17) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>_>
          (ushort param_1,ForElementType<FRDGViewableResource_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TTuple<FRDGViewableResource_*,FRHITransientResource_*>_>_> @ 145d86c60

/* WARNING: Removing unreachable block (ram,0x000145d86ca7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TTuple<FRDGViewableResource_*,FRHITransientResource_*>_>_>
          (ushort param_1,
          ForElementType<TTuple<FRDGViewableResource_*,FRHITransientResource_*>_> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TTuple<FRDGViewableResource_*,FRHITransientResource_*>_>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FBufferState>_> @ 145d86cf0

/* WARNING: Removing unreachable block (ram,0x000145d86d37) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FBufferState>_>
          (ushort param_1,ForElementType<FRDGPass::FBufferState> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGPass::FBufferState>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FCollectResourceOp>_> @ 145d86d80

/* WARNING: Removing unreachable block (ram,0x000145d86dc7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FCollectResourceOp>_>
          (ushort param_1,ForElementType<FRDGBuilder::FCollectResourceOp> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FCollectResourceOp>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FExternalAccessOp>_> @ 145d86e10

/* WARNING: Removing unreachable block (ram,0x000145d86e57) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FExternalAccessOp>_>
          (ushort param_1,ForElementType<FRDGPass::FExternalAccessOp> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGPass::FExternalAccessOp>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FParallelPassSet>_> @ 145d86ea0

/* WARNING: Removing unreachable block (ram,0x000145d86ee7) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FParallelPassSet>_>
          (ushort param_1,ForElementType<FParallelPassSet> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FParallelPassSet>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_> @ 145d86f30

/* WARNING: Removing unreachable block (ram,0x000145d86f77) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
          (ushort param_1,ForElementType<FRHICommandListImmediate::FQueuedCommandList> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTransitionInfo>_> @ 145d86fc0

/* WARNING: Removing unreachable block (ram,0x000145d87007) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTransitionInfo>_>
          (ushort param_1,ForElementType<FRDGTransitionInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGTransitionInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITrackedAccessInfo>_> @ 145d87050

/* WARNING: Removing unreachable block (ram,0x000145d87097) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITrackedAccessInfo>_>
          (ushort param_1,ForElementType<FRHITrackedAccessInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHITrackedAccessInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRHITrackedAccessInfo>_> @ 145d870e0

/* WARNING: Removing unreachable block (ram,0x000145d87127) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRHITrackedAccessInfo>_>
          (ushort param_1,ForElementType<FRHITrackedAccessInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRHITrackedAccessInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRHITransientAliasingInfo>_> @ 145d87170

/* WARNING: Removing unreachable block (ram,0x000145d871b7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRHITransientAliasingInfo>_>
          (ushort param_1,ForElementType<FRHITransientAliasingInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRHITransientAliasingInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_> @ 145d87200

/* WARNING: Removing unreachable block (ram,0x000145d87247) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
          (ushort param_1,ForElementType<FRHITransitionInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_> @ 145d87290

/* WARNING: Removing unreachable block (ram,0x000145d872d7) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
          (ushort param_1,ForElementType<FRHITransitionInfo> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHITransitionInfo>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FTextureState>_> @ 145d87320

/* WARNING: Removing unreachable block (ram,0x000145d87367) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FTextureState>_>
          (ushort param_1,ForElementType<FRDGPass::FTextureState> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGPass::FTextureState>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FTransferResourceParams>_> @ 145d873b0

/* WARNING: Removing unreachable block (ram,0x000145d873f7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FTransferResourceParams>_>
          (ushort param_1,ForElementType<FTransferResourceParams> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FTransferResourceParams>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>_> @ 145d87440

/* WARNING: Removing unreachable block (ram,0x000145d87487) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>_>
          (ushort param_1,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>_> @ 145d874d0

/* WARNING: Removing unreachable block (ram,0x000145d87517) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>_>
          (ushort param_1,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>_> @ 145d87560

/* WARNING: Removing unreachable block (ram,0x000145d875a7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>_>
          (ushort param_1,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>_> @ 145d875f0

/* WARNING: Removing unreachable block (ram,0x000145d87637) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>_>
          (ushort param_1,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>_> @ 145d87680

/* WARNING: Removing unreachable block (ram,0x000145d876c7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>_>
          (ushort param_1,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>_> @ 145d87710

/* WARNING: Removing unreachable block (ram,0x000145d87757) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>_>
          (ushort param_1,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGBuffer,unsigned_int>_>_> @ 145d877a0

/* WARNING: Removing unreachable block (ram,0x000145d877e7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGBuffer,unsigned_int>_>_>
          (ushort param_1,ForElementType<TRDGHandle<FRDGBuffer,unsigned_int>_> *param_2,int *param_3
          )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGBuffer,unsigned_int>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>_> @ 145d87830

/* WARNING: Removing unreachable block (ram,0x000145d87877) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>_>
          (ushort param_1,ForElementType<TRDGHandle<FRDGPass,unsigned_int>_> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGTexture,unsigned_int>_>_> @ 145d878c0

/* WARNING: Removing unreachable block (ram,0x000145d87907) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGTexture,unsigned_int>_>_>
          (ushort param_1,ForElementType<TRDGHandle<FRDGTexture,unsigned_int>_> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGTexture,unsigned_int>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_>_> @ 145d87950

/* WARNING: Removing unreachable block (ram,0x000145d87997) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_>_>
          (ushort param_1,ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_> *param_2,
          int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGView,unsigned_int>_>_> @ 145d879e0

/* WARNING: Removing unreachable block (ram,0x000145d87a27) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGView,unsigned_int>_>_>
          (ushort param_1,ForElementType<TRDGHandle<FRDGView,unsigned_int>_> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGView,unsigned_int>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_> @ 145d87a70

/* WARNING: Removing unreachable block (ram,0x000145d87ab7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_>
          (ushort param_1,ForElementType<TRefCountPtr<IPooledRenderTarget>_> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<FRDGPooledBuffer>_>_> @ 145d87b00

/* WARNING: Removing unreachable block (ram,0x000145d87b47) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<FRDGPooledBuffer>_>_>
          (ushort param_1,ForElementType<TRefCountPtr<FRDGPooledBuffer>_> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<FRDGPooledBuffer>_>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>_> @ 145d87b90

/* WARNING: Removing unreachable block (ram,0x000145d87bd7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>_>
          (ushort param_1,ForElementType<Experimental::FHashType> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_> @ 145d87c20

/* WARNING: Removing unreachable block (ram,0x000145d87c67) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_>
          (ushort param_1,ForElementType<Experimental::FHashType> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<unsigned___int64>_> @ 145d87cb0

/* WARNING: Removing unreachable block (ram,0x000145d87cf7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<unsigned___int64>_>
          (ushort param_1,ForElementType<unsigned___int64> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<unsigned___int64>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_> @ 145d87d40

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      if (uVar3 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
    ForElementType<unsigned_int>::ResizeAllocation(param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_> @ 145d87df0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      if (uVar3 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>_> @ 145d87ea0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<bool>::FItem>_> @ 145d87f80

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<bool>::FItem>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<DynamicRenderScaling::TMap<bool>::FItem> *param_4,int *param_5,int *param_6
          )

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<DynamicRenderScaling::TMap<bool>::FItem>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_> @ 145d88110

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Experimental::FHashType> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      if (uVar3 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
    ForElementType<Experimental::FHashType>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_> @ 145d881c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Experimental::FHashType> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    else {
      if (uVar3 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>::
    ResizeAllocation(param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>_> @ 145d88270

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGSubresourceState_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_> @ 145d88310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __cdecl
UE::Core::Private::ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGPass_*> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 145d883b0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 145d88450

int __cdecl
UE::Core::Private::
ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
    ::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_> @ 145d884f0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>
    ::ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_> @ 145d88590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRHICommandListImmediate::FQueuedCommandList> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>::
    ResizeAllocation(param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<TRHIPipelineArray<FRDGProducerState>_>_> @ 145d88760

int __cdecl
UE::Core::Private::
ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<TRHIPipelineArray<FRDGProducerState>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRHIPipelineArray<FRDGProducerState>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TRDGArrayAllocator<0>::ForElementType<TRHIPipelineArray<FRDGProducerState>_>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>_> @ 145d88800

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>_>
          (uint param_1,uint param_2,
          ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<bool>::FItem>_> @ 145d888c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<bool>::FItem>_>
          (uint param_1,uint param_2,
          ForElementType<DynamicRenderScaling::TMap<bool>::FItem> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<DynamicRenderScaling::TMap<bool>::FItem>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>_> @ 145d88980

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>_>
          (uint param_1,uint param_2,
          ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
    ::ResizeAllocation(param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>_> @ 145d88a10

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>_>
          (uint param_1,uint param_2,
          ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
    ::ResizeAllocation(param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>_> @ 145d88aa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>_>
          (uint param_1,uint param_2,ForElementType<FRDGSubresourceState_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_> @ 145d88b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
          (uint param_1,uint param_2,ForElementType<FRDGPass_*> *param_3,int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>_> @ 145d88b80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>_>
          (uint param_1,uint param_2,ForElementType<FRDGViewableResource_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<TRHIPipelineArray<FRDGProducerState>_>_> @ 145d88bf0

void __cdecl
UE::Core::Private::
ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<TRHIPipelineArray<FRDGProducerState>_>_>
          (uint param_1,uint param_2,ForElementType<TRHIPipelineArray<FRDGProducerState>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TRDGArrayAllocator<0>::ForElementType<TRHIPipelineArray<FRDGProducerState>_>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_> @ 145d88c60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 1, 1 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
  ForElementType<unsigned_int>::ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_> @ 145d88ca0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 1, 1 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>_> @ 145d88ce0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGPass_*> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 1, 1 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>_> @ 145d88d20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGPass_*> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x40, 0x40 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<64,32,TRDGArrayAllocator<0>_>::ForElementType<FRDGPass_*>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>_> @ 145d88d60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHITransition_const_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransition_const_*>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>_> @ 145d88de0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 1, 1 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::FSpan>
  ::ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>_> @ 145d88e20

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 1, 1 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::
  ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>::FSpan>
  ::ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TRDGArrayAllocator<0>_>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>_> @ 145d88ea0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TRDGArrayAllocator<0>_>::ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRDGHandle<FRDGPass,unsigned_int>_> *param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x20, 0x20 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<32,32,TRDGArrayAllocator<0>_>::
  ForElementType<TRDGHandle<FRDGPass,unsigned_int>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_> @ 145d88ee0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<Experimental::FHashType>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Experimental::FHashType> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 1, 1 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
  ForElementType<Experimental::FHashType>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_> @ 145d88f20

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Experimental::FHashType> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 1, 1 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>::ForElementType<Experimental::FHashType>::
  ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>_> @ 145d88f60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGSubresourceState_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGSubresourceState_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>_> @ 145d88f90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGBarrierBatchBegin_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGBarrierBatchBegin_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_> @ 145d88fc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGBuffer_*> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGDispatchPass_*>_> @ 145d88ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGDispatchPass_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGDispatchPass_*> *param_4,
          int param_5,int *param_6)

{
  FRDGDispatchPass **_Src;
  FRDGAllocator *this;
  FRDGDispatchPass **_Dst;
  uint uVar1;
  uint uVar2;
  
  if (param_3 != *param_6) {
    *param_6 = param_3;
    _Src = param_4->Data;
    if (param_3 != 0) {
      if ((param_3 < 0) || (0x7ffffffe < param_1 - 1)) {
                    /* WARNING: Subroutine does not return */
        RenderCore::Private::OnInvalidRDGAllocatorNum(param_3,(ulonglong)param_1);
      }
      uVar1 = 8;
      if (0xf < (int)(param_1 * param_3)) {
        uVar1 = 0x10;
      }
      this = FRDGAllocator::GetTLS();
      uVar2 = 8;
      if (8 < uVar1) {
        uVar2 = uVar1;
      }
      _Dst = FMemStackBase::Alloc
                       (&this->MemStack,(longlong)(int)(param_1 * param_3),(ulonglong)uVar2);
      param_4->Data = _Dst;
      if ((_Src != (FRDGDispatchPass **)0x0) && (param_5 != 0)) {
        if (param_3 < param_5) {
          param_5 = param_3;
        }
        memcpy(_Dst,_Src,(longlong)param_5 * (ulonglong)param_1);
      }
    }
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_> @ 145d890d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGPass_*> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_> @ 145d89100

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGTexture_*> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_> @ 145d89130

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGUniformBuffer_*> *param_4,
          int param_5,int *param_6)

{
  FRDGUniformBuffer **_Src;
  FRDGAllocator *this;
  FRDGUniformBuffer **_Dst;
  uint uVar1;
  uint uVar2;
  
  if (param_3 != *param_6) {
    *param_6 = param_3;
    _Src = param_4->Data;
    if (param_3 != 0) {
      if ((param_3 < 0) || (0x7ffffffe < param_1 - 1)) {
                    /* WARNING: Subroutine does not return */
        RenderCore::Private::OnInvalidRDGAllocatorNum(param_3,(ulonglong)param_1);
      }
      uVar1 = 8;
      if (0xf < (int)(param_1 * param_3)) {
        uVar1 = 0x10;
      }
      this = FRDGAllocator::GetTLS();
      uVar2 = 8;
      if (8 < uVar1) {
        uVar2 = uVar1;
      }
      _Dst = FMemStackBase::Alloc
                       (&this->MemStack,(longlong)(int)(param_1 * param_3),(ulonglong)uVar2);
      param_4->Data = _Dst;
      if ((_Src != (FRDGUniformBuffer **)0x0) && (param_5 != 0)) {
        if (param_3 < param_5) {
          param_5 = param_3;
        }
        memcpy(_Dst,_Src,(longlong)param_5 * (ulonglong)param_1);
      }
    }
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_> @ 145d89210

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGView_*> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGView_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>_> @ 145d89240

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGViewableResource_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGViewableResource_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 145d89270

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 145d892a0

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_> @ 145d892d0

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TTuple<FRDGViewableResource_*,FRHITransientResource_*>_>_> @ 145d89300

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TTuple<FRDGViewableResource_*,FRHITransientResource_*>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<FRDGViewableResource_*,FRHITransientResource_*>_> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<TTuple<FRDGViewableResource_*,FRHITransientResource_*>_>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FBufferState>_> @ 145d89330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FBufferState>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGPass::FBufferState> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGPass::FBufferState>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FCollectResourceOp>_> @ 145d89360

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FCollectResourceOp>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRDGBuilder::FCollectResourceOp> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FCollectResourceOp>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FExternalAccessOp>_> @ 145d89390

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FExternalAccessOp>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRDGPass::FExternalAccessOp> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGPass::FExternalAccessOp>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FParallelPassSet>_> @ 145d893c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FParallelPassSet>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FParallelPassSet> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FParallelPassSet>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_> @ 145d893f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRHICommandListImmediate::FQueuedCommandList> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGTransitionInfo>_> @ 145d89420

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGTransitionInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGTransitionInfo> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGTransitionInfo>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITrackedAccessInfo>_> @ 145d89450

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITrackedAccessInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHITrackedAccessInfo> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHITrackedAccessInfo>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRHITrackedAccessInfo>_> @ 145d89480

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRHITrackedAccessInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHITrackedAccessInfo> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRHITrackedAccessInfo>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransientAliasingInfo>_> @ 145d894b0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransientAliasingInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHITransientAliasingInfo> *param_4,
          int param_5,int *param_6)

{
  FRHITransientAliasingInfo *_Src;
  FRHITransientAliasingInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 != *param_6) {
    *param_6 = param_3;
    if ((param_3 < 0) || (0x7ffffffe < param_1 - 1)) {
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
    }
    _Src = param_4->Data;
    _Dst = (FRHITransientAliasingInfo *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRHITransientAliasingInfo *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x1c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRHITransientAliasingInfo>_> @ 145d89560

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRHITransientAliasingInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHITransientAliasingInfo> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRHITransientAliasingInfo>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_> @ 145d89590

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHITransitionInfo> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_> @ 145d895c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHITransitionInfo> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
    ForElementType<FRHITransitionInfo>::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1)
    ;
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_> @ 145d895f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRDGExternalAccessQueue::FResource> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FTextureState>_> @ 145d89620

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass::FTextureState>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRDGPass::FTextureState> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGPass::FTextureState>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FTransferResourceParams>_> @ 145d89650

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FTransferResourceParams>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FTransferResourceParams> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FTransferResourceParams>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_> @ 145d89680

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FRDGBuilder::FUploadedBuffer> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>_> @ 145d896b0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledBuffer_*,FRDGBuffer_*>_>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>_> @ 145d896e0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRDGPooledTexture_*,FRDGTexture_*>_>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>_> @ 145d89710

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRDGBuffer_*>_>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>_> @ 145d89740

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHIBuffer_*,FRHIGPUMask>_>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>_> @ 145d89770

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRDGTexture_*>_>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>_> @ 145d897a0

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::
    ForElementType<Experimental::RobinHoodHashTable_Private::TKeyValue<FRHITexture_*,FRHIGPUMask>_>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_>_> @ 145d897d0

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGUniformBuffer,unsigned_int>_>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGView,unsigned_int>_>_> @ 145d89800

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGView,unsigned_int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRDGHandle<FRDGView,unsigned_int>_> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<TRDGHandle<FRDGView,unsigned_int>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_> @ 145d89830

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRefCountPtr<IPooledRenderTarget>_> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<FRDGPooledBuffer>_>_> @ 145d89860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<FRDGPooledBuffer>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TRefCountPtr<FRDGPooledBuffer>_> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<TRefCountPtr<FRDGPooledBuffer>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_> @ 145d89890

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TUniqueFunction<void___cdecl(void)>_> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>_> @ 145d898c0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Experimental::FHashType> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<Experimental::FHashType>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_> @ 145d898f0

void __cdecl
UE::Core::Private::ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>_>
          (uint param_1,uint param_2,int param_3,ForElementType<Experimental::FHashType> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<Experimental::FHashType>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_> @ 145d89920

void __cdecl
UE::Core::Private::
ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Tasks::Private::FTaskHandle> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TRDGArrayAllocator<0>::ForElementType<UE::Tasks::Private::FTaskHandle>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// Rehash<TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::ForElementType<FSetElementId>_> @ 145d89950

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  uchar *puVar2;
  ForElementType<FSetElementId> *pFVar3;
  ForElementType<FSetElementId> *pFVar4;
  ForElementType<FSetElementId> *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pFVar1 = &param_1->SecondaryData;
  uVar6 = (ulonglong)(uint)param_2;
  pFVar3 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).SecondaryData.Data;
  pFVar4 = pFVar3;
  if (pFVar3 == (ForElementType<FSetElementId> *)0x0) {
    pFVar4 = pFVar1;
  }
  if ((pFVar4 != (ForElementType<FSetElementId> *)0x0) &&
     (pFVar3 != (ForElementType<FSetElementId> *)0x0)) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar3);
    (param_1->SecondaryData).SecondaryData.Data = (FSetElementId *)0x0;
  }
  if (param_2 != 0) {
    TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
    ::ForElementType<FSetElementId>::ResizeAllocation(param_1,0,param_2,4);
    if (0 < param_2) {
      uVar7 = 0;
      do {
        pFVar5 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).SecondaryData.Data;
        if ((pFVar5 == (ForElementType<FSetElementId> *)0x0) &&
           (pFVar5 = (ForElementType<FSetElementId> *)pFVar1,
           pFVar1 == (ForElementType<FSetElementId> *)0x0)) {
          pFVar5 = param_1;
        }
        puVar2 = pFVar5->InlineData + (uVar7 & (longlong)param_2 - 1U) * 4;
        puVar2[0] = 0xff;
        puVar2[1] = 0xff;
        puVar2[2] = 0xff;
        puVar2[3] = 0xff;
        uVar6 = uVar6 - 1;
        uVar7 = uVar7 + 1;
      } while (uVar6 != 0);
    }
  }
  return;
}

// Rehash<TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>::ForElementType<FSetElementId>_> @ 145d89a00

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  uchar *puVar1;
  ForElementType<FSetElementId> *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((param_2 != 0) &&
     (TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>::
      ForElementType<FSetElementId>::ResizeAllocation(param_1,0,param_2,4), 0 < param_2)) {
    uVar4 = (ulonglong)(uint)param_2;
    uVar3 = 0;
    do {
      pFVar2 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).SecondaryData.Data;
      if ((pFVar2 == (ForElementType<FSetElementId> *)0x0) &&
         (pFVar2 = (ForElementType<FSetElementId> *)&param_1->SecondaryData,
         &param_1->SecondaryData == (ForElementType<FSetElementId> *)0x0)) {
        pFVar2 = param_1;
      }
      puVar1 = pFVar2->InlineData + (uVar3 & (longlong)param_2 - 1U) * 4;
      puVar1[0] = 0xff;
      puVar1[1] = 0xff;
      puVar1[2] = 0xff;
      puVar1[3] = 0xff;
      uVar4 = uVar4 - 1;
      uVar3 = uVar3 + 1;
    } while (uVar4 != 0);
  }
  return;
}

// Wait<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_> @ 145d8a270

bool __cdecl
UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_>
          (TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_> *param_1,FTimespan param_2
          )

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> aVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  FTaskBase *pFVar11;
  FTask *pFVar12;
  longlong lVar13;
  FTaskBase *pFVar14;
  FTaskHandle *pFVar15;
  bool bVar16;
  FTaskBase *pFVar17;
  double dVar18;
  undefined1 local_res18 [8];
  FWaitingScope local_res20 [8];
  atomic<unsigned___int64> local_68;
  LARGE_INTEGER local_60;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_58;
  LARGE_INTEGER local_48;
  FTaskBase *local_40;
  
  uVar4 = param_1->ArrayNum;
  pFVar17 = (FTaskBase *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
  }
  pFVar15 = (param_1->AllocatorInstance).Data;
  iVar5 = param_1->ArrayNum;
  pFVar2 = pFVar15 + iVar5;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar2) break;
    pFVar11 = (pFVar15->Pimpl).Reference;
    if (pFVar11 != (FTaskBase *)0x0) {
      local_68 = pFVar11->TraceId;
      if (((local_58.AllocatorInstance.Data <= &local_68) &&
          (&local_68 <
           (atomic<unsigned___int64> *)
           (local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 8))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar10 = local_58.ArrayNum;
      if (local_58.ArrayNum == local_58.ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_58.AllocatorInstance,&local_58.ArrayMax);
      }
      local_58.ArrayNum = iVar10 + 1;
      *(atomic<unsigned___int64> *)(local_58.AllocatorInstance.Data + (longlong)iVar10 * 8) =
           local_68;
    }
    pFVar15 = pFVar15 + 1;
  }
  TaskTrace::FWaitingScope::FWaitingScope(local_res20,&local_58);
  if ((atomic<unsigned___int64> *)local_58.AllocatorInstance.Data != (atomic<unsigned___int64> *)0x0
     ) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`bool___cdecl_UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_>(TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_const&___ptr64,FTimespan)'
                ::__l2::__CpuProfilerEventSpecId384,"Tasks::Wait",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h",
               0x180);
    FCpuProfilerTrace::OutputBeginEvent
              (`bool___cdecl_UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_>(TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>_const&___ptr64,FTimespan)'
               ::__l2::__CpuProfilerEventSpecId384);
  }
  pFVar11 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Private::SmallTaskAllocator);
  if (pFVar11 == (FTaskBase *)0x0) {
    Private::FTaskBase::
    AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>,0>
              ((FTaskBase *)0x0,param_1,true);
    Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
LAB_145d8a5df:
    bVar16 = true;
    bVar9 = true;
    if (pFVar17 == (FTaskBase *)0x0) goto LAB_145d8a606;
  }
  else {
    Private::FTaskBase::FTaskBase(pFVar11,2,true);
    pFVar11->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____Wait_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TRDGArrayAllocator__0A______Tasks_UE__YA_NAEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TRDGArrayAllocator__0A_____UFTimespan___Z_XX_Private_Tasks_UE__6B_
    ;
    if (((*(ulonglong *)&(pFVar11->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    (**(code **)(*(longlong *)&(pFVar11->LowLevelTask).field_0x28 + 0x18))
              (&(pFVar11->LowLevelTask).field_0x28,&pFVar11->LowLevelTask);
    *(FTaskBase **)&pFVar11->LowLevelTask = pFVar11;
    *(undefined ***)&(pFVar11->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(pFVar11->LowLevelTask).field_0x8 = pFVar11;
    pFVar12 = LowLevelTasks::FTask::GetActiveTask();
    pFVar14 = pFVar17;
    if (pFVar12 != (FTask *)0x0) {
      pFVar14 = *(FTaskBase **)&pFVar12->field_0x30;
    }
    *(FTaskBase **)&(pFVar11->LowLevelTask).field_0x30 = pFVar14;
    *(undefined8 *)&(pFVar11->LowLevelTask).field_0x38 = 0xc80000541abc4c00;
    pFVar11->ExtendedPriority = Inline;
    FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar11->_padding_);
    pFVar11->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____Wait_V__TArray_VFTaskHandle_Private_Tasks_UE__V__TRDGArrayAllocator__0A______Tasks_UE__YA_NAEBV__TArray_VFTaskHandle_Private_Tasks_UE__V__TRDGArrayAllocator__0A_____UFTimespan___Z__Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::
    AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TRDGArrayAllocator<0>_>,0>
              (pFVar11,param_1,true);
    Private::FTaskBase::TryLaunch(pFVar11,0x100);
    QueryPerformanceCounter(&local_60);
    if (param_2.Ticks == 0x7fffffffffffffff) {
      pFVar17 = (FTaskBase *)0xffffffffffffffff;
    }
    else if (0.0 < (double)param_2.Ticks * __real_3e7ad7f29abcaf48) {
      dVar18 = ((double)param_2.Ticks * __real_3e7ad7f29abcaf48) /
               FGenericPlatformTime::SecondsPerCycle64;
      lVar13 = 0;
      if ((__real_43e0000000000000 <= dVar18) &&
         (dVar18 = dVar18 - __real_43e0000000000000, dVar18 < __real_43e0000000000000)) {
        lVar13 = -0x8000000000000000;
      }
      pFVar17 = (FTaskBase *)((longlong)dVar18 + lVar13);
    }
    local_48 = local_60;
    local_40 = pFVar17;
    bVar9 = Private::FTaskBase::Wait(pFVar11,(FTimeout *)&local_48.s);
    pFVar17 = pFVar11;
    if (bVar9) goto LAB_145d8a5df;
    bVar9 = false;
  }
  bVar16 = bVar9;
  LOCK();
  paVar1 = &pFVar17->RefCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)pFVar17->_padding_)(pFVar17,1);
  }
LAB_145d8a606:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  TaskTrace::FWaitingScope::~FWaitingScope(local_res20);
  return bVar16;
}

// OnInvalidRDGAllocatorNum @ 145dc2a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::RenderCore::Private::OnInvalidRDGAllocatorNum(int param_1,ulong64 param_2)

{
  Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderResource_*>_> @ 145de9c50

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderResource_*>_>
          (ushort param_1,ForElementType<FRenderResource_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderResource_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFrameEndSync::FRenderThreadFence>_> @ 145de9d20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFrameEndSync::FRenderThreadFence>_>
          (ushort param_1,ForElementType<FFrameEndSync::FRenderThreadFence> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FFrameEndSync::FRenderThreadFence>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderCommandFence>_> @ 145de9df0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderCommandFence>_>
          (ushort param_1,ForElementType<FRenderCommandFence> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderCommandFence>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderCommandList_*>_> @ 145de9ec0

/* WARNING: Removing unreachable block (ram,0x000145de9f07) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderCommandList_*>_>
          (ushort param_1,ForElementType<FRenderCommandList_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderCommandList_*>::
    ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UE::RenderCommandPipe::FCommandList>_> @ 145de9f50

/* WARNING: Removing unreachable block (ram,0x000145de9f97) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UE::RenderCommandPipe::FCommandList>_>
          (ushort param_1,ForElementType<UE::RenderCommandPipe::FCommandList> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<UE::RenderCommandPipe::FCommandList>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFrameEndSync::FRenderThreadFence>_> @ 145de9fe0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFrameEndSync::FRenderThreadFence>_>
          (uint param_1,uint param_2,ForElementType<FFrameEndSync::FRenderThreadFence> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 3) {
    iVar2 = 2;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FFrameEndSync::FRenderThreadFence>::ResizeAllocation(param_3,param_4,iVar2,uVar4)
    ;
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderCommandFence>_> @ 145dea0a0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderCommandFence>_>
          (uint param_1,uint param_2,ForElementType<FRenderCommandFence> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 4) {
    iVar2 = 3;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRenderCommandFence>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderCommandList_*>_> @ 145dea160

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderCommandList_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRenderCommandList_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderCommandList_*>::
    ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UE::RenderCommandPipe::FCommandList>_> @ 145dea190

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UE::RenderCommandPipe::FCommandList>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::RenderCommandPipe::FCommandList> *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
    ForElementType<UE::RenderCommandPipe::FCommandList>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// GetExecuteCommandListTag @ 145e0f1b0

/* WARNING: Enum "Type": Some values do not have unique names */

FRenderCommandTag * __cdecl UE::RenderCommandPipe::GetExecuteCommandListTag(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<,FRenderCommandTag_const_&___cdecl_UE::RenderCommandPipe::GetExecuteCommandListTag(void)_::_2_::TSTR_ExecuteCommandList1892>_const_&___cdecl_TRenderCommandTag<,FRenderCommandTag_const_&___cdecl_UE::RenderCommandPipe::GetExecuteCommandListTag(void)_::_2_::TSTR_ExecuteCommandList1892>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Stat = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<,FRenderCommandTag_const_&___cdecl_UE::RenderCommandPipe::GetExecuteCommandListTag(void)_::_2_::TSTR_ExecuteCommandList1892>_const_&___cdecl_TRenderCommandTag<,FRenderCommandTag_const_&___cdecl_UE::RenderCommandPipe::GetExecuteCommandListTag(void)_::_2_::TSTR_ExecuteCommandList1892>::Get(void)_::_2_::FStatData>
              )0x0;
    pFVar1 = ::FName::FName(&local_res8,"ExecuteCommandList");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ExecuteCommandList",
               "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FVar2 = ::Stat;
    if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<,FRenderCommandTag_const_&___cdecl_UE::RenderCommandPipe::GetExecuteCommandListTag(void)_::_2_::TSTR_ExecuteCommandList1892>_const_&___cdecl_TRenderCommandTag<,FRenderCommandTag_const_&___cdecl_UE::RenderCommandPipe::GetExecuteCommandListTag(void)_::_2_::TSTR_ExecuteCommandList1892>::Get(void)_::_2_::FStatData>
                   )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"ExecuteCommandList");
      FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<,FRenderCommandTag_const_&___cdecl_UE::RenderCommandPipe::GetExecuteCommandListTag(void)_::_2_::TSTR_ExecuteCommandList1892>_const_&___cdecl_TRenderCommandTag<,FRenderCommandTag_const_&___cdecl_UE::RenderCommandPipe::GetExecuteCommandListTag(void)_::_2_::TSTR_ExecuteCommandList1892>::Get(void)_::_2_::FStatData>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ExecuteCommandList",
                           "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                           L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
    }
    ::Tag._0_8_ = u_ExecuteCommandL;
    ::Tag._8_8_ = FVar2;
    _Init_thread_footer(&::_TSS1);
  }
  return (FRenderCommandTag *)&::Tag;
}

// GetPipes @ 145e0ff50

TArrayView<FRenderCommandPipe_*_const,int> * __cdecl
UE::RenderCommandPipe::GetPipes(TArrayView<FRenderCommandPipe_*_const,int> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TArrayView<FRenderCommandPipe_*_const,int> *pTVar4;
  
  iVar2 = GRenderCommandPipeRegistry.AllPipes.ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FRenderCommandPipe **)GRenderCommandPipeRegistry.AllPipes.AllocatorInstance.Data;
  if (-1 < iVar2) {
    __return_storage_ptr__->ArrayNum = iVar2;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArrayView<FRenderCommandPipe_*_const,int> *)(*pcVar1)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar2;
  return __return_storage_ptr__;
}

// GetStopRecordingDelegate @ 145e15380

TMulticastDelegate<void___cdecl(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&),FDefaultDelegateUserPolicy>
* __cdecl UE::RenderCommandPipe::GetStopRecordingDelegate(void)

{
  return &StopRecordingDelegate;
}

// Initialize @ 145e18280

void __cdecl UE::RenderCommandPipe::Initialize(void)

{
  code *pcVar1;
  TLinkedList<class_FRenderCommandPipe*___ptr64> *pTVar2;
  undefined1 uVar3;
  bool bVar4;
  longlong lVar5;
  
  GRenderCommandPipeRegistry.AllPipes.ArrayNum = 0;
  pTVar2 = `public:_static_class_TLinkedList<FRenderCommandPipe*___ptr64>*___ptr64&___ptr64___cdecl_FRenderCommandPipeRegistry::GetGlobalList(void)'
           ::__l2::GlobalList;
  if (GRenderCommandPipeRegistry.AllPipes.ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&GRenderCommandPipeRegistry.AllPipes.AllocatorInstance,0,
               &GRenderCommandPipeRegistry.AllPipes.ArrayMax);
    pTVar2 = `public:_static_class_TLinkedList<FRenderCommandPipe*___ptr64>*___ptr64&___ptr64___cdecl_FRenderCommandPipeRegistry::GetGlobalList(void)'
             ::__l2::GlobalList;
  }
  while( true ) {
    if (pTVar2 == (TLinkedList<class_FRenderCommandPipe*___ptr64> *)0x0) {
      return;
    }
    lVar5 = *(longlong *)(pTVar2 + 0x10);
    uVar3 = (**(code **)(**(longlong **)(lVar5 + 0x48) + 0xc0))();
    bVar4 = IsInGameThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x2b5,L""), bVar4)) break;
    *(undefined1 *)(lVar5 + 0x5e) = uVar3;
    *(int *)(lVar5 + 0x58) = GRenderCommandPipeRegistry.AllPipes.ArrayNum;
    if (GRenderCommandPipeRegistry.AllPipes.ArrayNum == GRenderCommandPipeRegistry.AllPipes.ArrayMax
       ) {
      GRenderCommandPipeRegistry.AllPipes.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&GRenderCommandPipeRegistry.AllPipes.AllocatorInstance,
                      &GRenderCommandPipeRegistry.AllPipes.ArrayMax);
    }
    lVar5 = (longlong)GRenderCommandPipeRegistry.AllPipes.ArrayNum;
    GRenderCommandPipeRegistry.AllPipes.ArrayNum = GRenderCommandPipeRegistry.AllPipes.ArrayNum + 1;
    *(undefined8 *)(GRenderCommandPipeRegistry.AllPipes.AllocatorInstance.Data + lVar5 * 8) =
         *(undefined8 *)(pTVar2 + 0x10);
    pTVar2 = *(TLinkedList<class_FRenderCommandPipe*___ptr64> **)pTVar2;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// IsRecording @ 145e1a380

bool __cdecl UE::RenderCommandPipe::IsRecording(void)

{
  bool bVar1;
  undefined1 local_res8 [32];
  
  bVar1 = FTaskTagScope::IsCurrentTag(EParallelRenderingThread);
  if (!bVar1) {
    bVar1 = FTaskTagScope::IsCurrentTag(ERenderingThread);
    if (!bVar1) goto LAB_145e1a3aa;
  }
  `FRenderCommandPipeRegistry::IsRecording'::__l2::<lambda_1>::operator()(local_res8);
LAB_145e1a3aa:
  return GRenderCommandPipeRegistry.NumPipesRecording != 0;
}

// IsReplaying @ 145e1a3f0

bool __cdecl UE::RenderCommandPipe::IsReplaying(FRenderCommandPipe *param_1)

{
  return *(FRenderCommandPipe **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed8)
         == param_1;
}

// IsReplaying @ 145e1a420

bool __cdecl UE::RenderCommandPipe::IsReplaying(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5173014724773672867>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                       ,0x85d,"IsInParallelRenderingThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return GRenderCommandPipeRegistry.NumPipesReplaying != 0;
}

// StartRecording @ 145e2e990

void __cdecl
UE::RenderCommandPipe::StartRecording
          (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
           *param_1)

{
  FRenderCommandPipeRegistry::StartRecording(&GRenderCommandPipeRegistry,param_1);
  return;
}

// StartRecording @ 145e2e9b0

void __cdecl UE::RenderCommandPipe::StartRecording(void)

{
  FRenderCommandPipeRegistry::StartRecording(&GRenderCommandPipeRegistry);
  return;
}

// StopRecording @ 145e32880

TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_> *
__cdecl UE::RenderCommandPipe::StopRecording
                  (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *__return_storage_ptr__,TArrayView<FRenderCommandPipe_*_const,int> *param_1)

{
  TArrayView<FRenderCommandPipe_*_const,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FRenderCommandPipeRegistry::StopRecording
            (&GRenderCommandPipeRegistry,__return_storage_ptr__,&local_18);
  TMulticastDelegate<void___cdecl(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&StopRecordingDelegate,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StopRecording @ 145e328d0

TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_> *
__cdecl UE::RenderCommandPipe::StopRecording
                  (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *__return_storage_ptr__)

{
  FRenderCommandPipeRegistry::StopRecording(&GRenderCommandPipeRegistry,__return_storage_ptr__);
  TMulticastDelegate<void___cdecl(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&StopRecordingDelegate,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CopyFunc<FShaderCompilerDefinitions> @ 145e3ada0

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<FShaderCompilerDefinitions>(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DeleterFunc<FShaderCompilerDefinitions>;
    puVar1[1] = CopyFunc<FShaderCompilerDefinitions>;
    FShaderCompilerDefinitions::FShaderCompilerDefinitions
              ((FShaderCompilerDefinitions *)(puVar1 + 2),param_1);
    return puVar1 + 2;
  }
  return &DAT_00000010;
}

// DeleterFunc<FShaderCompilerDefinitions> @ 145e3af60

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FShaderCompilerDefinitions>(void *param_1)

{
  FShaderCompilerDefinitions::~FShaderCompilerDefinitions
            ((FShaderCompilerDefinitions *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x70);
  return;
}

// DereferenceIfNecessary<FShaderLibrariesCollection,FShaderLibrariesCollection_*_&> @ 145e3af90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderLibrariesCollection * __cdecl
UE::Core::Private::DereferenceIfNecessary<FShaderLibrariesCollection,FShaderLibrariesCollection_*_&>
          (FShaderLibrariesCollection **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_> @ 145e3e480

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
          (ushort param_1,ForElementType<TStringView<wchar_t>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_> @ 145e3e550

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
          (ushort param_1,ForElementType<TStringView<wchar_t>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xd) {
      iVar8 = 0xc;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xd) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// operator== @ 145e479e0

bool __cdecl
UE::ShaderLibrary::Private::operator==(FMountedPakFileInfo *param_1,FMountedPakFileInfo *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (param_1->PakFilename).Data.ArrayNum;
  iVar1 = (param_2->PakFilename).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->PakFilename).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->PakFilename).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_145e47a13;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_145e47a13:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (param_1->MountPoint).Data.ArrayNum;
  iVar1 = (param_2->MountPoint).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_145e47a46;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->MountPoint).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->MountPoint).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_145e47a46:
  if (param_1->ChunkId != param_2->ChunkId) {
    return false;
  }
  return true;
}

// GetBindlessConfiguration @ 145e56680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ERHIBindlessConfiguration __cdecl
UE::ShaderCompiler::GetBindlessConfiguration(EShaderPlatform param_1)

{
  ERHIBindlessConfiguration EVar1;
  FString *pFVar2;
  IConsoleManager *pIVar3;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      BindlessResourcesCVar =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"rhi.Bindless",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (BindlessResourcesCVar != (IConsoleVariable *)0x0) {
    pFVar2 = (FString *)
             (**(code **)(*(longlong *)BindlessResourcesCVar + 0xd8))
                       (BindlessResourcesCVar,local_18);
    if (&local_38 != pFVar2) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  EVar1 = RHIParseBindlessConfiguration(param_1,&local_28,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return EVar1;
}

// GetBindlessResourcesConfiguration @ 145e567d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ERHIBindlessConfiguration __cdecl
UE::ShaderCompiler::GetBindlessResourcesConfiguration(FName param_1)

{
  EShaderPlatform EVar1;
  ERHIBindlessConfiguration EVar2;
  
  EVar1 = ShaderFormatToLegacyShaderPlatform(param_1);
  EVar2 = GetBindlessConfiguration(EVar1);
  return EVar2;
}

// GetBindlessSamplersConfiguration @ 145e567f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ERHIBindlessConfiguration __cdecl
UE::ShaderCompiler::GetBindlessSamplersConfiguration(FName param_1)

{
  EShaderPlatform EVar1;
  ERHIBindlessConfiguration EVar2;
  
  EVar1 = ShaderFormatToLegacyShaderPlatform(param_1);
  EVar2 = GetBindlessConfiguration(EVar1);
  return EVar2;
}

// GetShaderLibraryNameForChunk @ 145e5ae30

FString * __cdecl
UE::ShaderLibrary::Private::GetShaderLibraryNameForChunk
          (FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  if (param_2 == -1) {
    ::FString::FString(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s_Chunk%d");
  return __return_storage_ptr__;
}

// GetTypeHash @ 145e5be30

uint __cdecl UE::ShaderLibrary::Private::GetTypeHash(FMountedPakFileInfo *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = (param_1->MountPoint).Data.ArrayNum;
  pwVar7 = L"";
  uVar6 = param_1->ChunkId;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->MountPoint).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar1 = (param_1->PakFilename).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(param_1->PakFilename).Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
  uVar9 = uVar3 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar9) - uVar2 ^ uVar9 << 8;
  uVar8 = (uVar2 - uVar3) - uVar9 ^ uVar3 >> 0xd;
  uVar9 = (uVar9 - uVar8) - uVar3 ^ uVar8 >> 0xc;
  uVar2 = (uVar3 - uVar9) - uVar8 ^ uVar9 << 0x10;
  uVar3 = (uVar8 - uVar2) - uVar9 ^ uVar2 >> 5;
  uVar8 = (uVar9 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar8) - uVar3 ^ uVar8 << 10;
  uVar2 = ((uVar3 - uVar2) - uVar8 ^ uVar2 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar6 ^ uVar2 << 8;
  uVar6 = (uVar6 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar6 ^ uVar2 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar6 ^ uVar2 << 10;
  return (uVar6 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// IsRunningWithIoStore @ 145e60e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __cdecl UE::ShaderLibrary::Private::IsRunningWithIoStore(void)

{
  bool bVar1;
  FIoDispatcher *this;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  FIoChunkId local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (::_TSS0 <= *piVar2) {
    return bRunningWithIoStore;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) {
    return bRunningWithIoStore;
  }
  bVar1 = FIoDispatcher::IsInitialized();
  if (bVar1) {
    this = FIoDispatcher::Get();
    if ((*piVar2 < `public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'::__l2::
                   _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      local_30 = 0x5000000;
      local_38 = 0;
      local_28.Id[0] = '\0';
      local_28.Id[1] = '\0';
      local_28.Id[2] = '\0';
      local_28.Id[3] = '\0';
      local_28.Id[4] = '\0';
      local_28.Id[5] = '\0';
      local_28.Id[6] = '\0';
      local_28.Id[7] = '\0';
      local_28.Id[8] = '\0';
      local_28.Id[9] = '\0';
      local_28.Id[10] = '\0';
      local_28.Id[0xb] = '\x05';
      `public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'::__l2::
      HasScriptObjectsChunk = FIoDispatcher::DoesChunkExist(this,&local_28);
      _Init_thread_footer(&`public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (`public:_static_bool___cdecl_FIoDispatcherInternal::HasPackageData(void)'::__l2::
        HasScriptObjectsChunk != false) {
      bRunningWithIoStore = true;
      goto LAB_145e60f08;
    }
  }
  bRunningWithIoStore = false;
LAB_145e60f08:
  _Init_thread_footer(&::_TSS0);
  return bRunningWithIoStore;
}

// IsRunningWithPakFile @ 145e60f30

bool __cdecl UE::ShaderLibrary::Private::IsRunningWithPakFile(void)

{
  FPlatformFileManager *this;
  IPlatformFile *pIVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = FPlatformFileManager::Get();
      pIVar1 = FPlatformFileManager::FindPlatformFile(this,L"PakFile");
      bRunningWithPakFile = pIVar1 != (IPlatformFile *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bRunningWithPakFile;
}

// IsRunningWithZenStore @ 145e60fb0

bool __cdecl UE::ShaderLibrary::Private::IsRunningWithZenStore(void)

{
  FPlatformFileManager *this;
  IPlatformFile *pIVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = FPlatformFileManager::Get();
      pIVar1 = FPlatformFileManager::FindPlatformFile(this,L"StorageServer");
      bRunningWithZenStore = pIVar1 != (IPlatformFile *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bRunningWithZenStore;
}

// ShouldCompileWithBindlessEnabled @ 145e6f040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
UE::ShaderCompiler::ShouldCompileWithBindlessEnabled
          (EShaderPlatform param_1,FShaderCompilerInput *param_2)

{
  ulonglong uVar1;
  FSharedShaderCompilerEnvironment *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ERHIBindlessConfiguration EVar6;
  uint uVar7;
  
  uVar7 = (param_2->Target).field0_0x0.Packed >> 4 & 0xffff;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar7].bContainsValidPlatformInfo == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ec,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar7].bSupportsBindless != 0) &&
     (uVar1 = (param_2->Environment).CompilerFlags.Data, (uVar1 >> 0x20 & 1) == 0)) {
    if ((uVar1 >> 0x19 & 1) != 0) {
      uVar7 = (param_2->Target).field0_0x0.Packed >> 4 & 0xffff;
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar7].bContainsValidPlatformInfo == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Platform)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                             ,0x17e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar7].bInlineRayTracingRequiresBindless != 0)
      {
        EVar6 = GetBindlessConfiguration(param_1);
        if (EVar6 != Disabled) {
          return true;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UE::ShaderCompiler::GetBindlessConfiguration(ShaderPlatform) != ERHIBindlessConfiguration::Disabled"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x346,L"");
        if (!bVar4) {
          return true;
        }
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    EVar6 = GetBindlessConfiguration(param_1);
    if (EVar6 == Disabled) {
      return false;
    }
    if (EVar6 != RayTracing) {
      if (EVar6 != Minimal) {
        if (EVar6 == All) {
          return true;
        }
        return false;
      }
      if (((param_2->Environment).CompilerFlags.Data & 0x200000000000) != 0) {
        return true;
      }
      pFVar2 = (param_2->SharedEnvironment).Reference;
      if ((pFVar2 != (FSharedShaderCompilerEnvironment *)0x0) &&
         ((*(ulonglong *)&pFVar2->field_0xb0 & 0x200000000000) != 0)) {
        return true;
      }
    }
    bVar4 = IsRayTracingShaderFrequency
                      (*(EShaderFrequency *)&(param_2->Target).field0_0x0 &
                       (SF_NumFrequencies|SF_Pixel));
    if (bVar4) {
      return true;
    }
  }
  return false;
}

// ShouldLookForLooseCookedChunks @ 145e6f620

bool __cdecl UE::ShaderLibrary::Private::ShouldLookForLooseCookedChunks(void)

{
  bool bVar1;
  FPlatformFileManager *this;
  IPlatformFile *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = FPlatformFileManager::Get();
      pIVar2 = FPlatformFileManager::FindPlatformFile(this,L"StorageServer");
      bRunningWithZenStore = pIVar2 != (IPlatformFile *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (bRunningWithZenStore == false) {
    bVar1 = IsRunningWithIoStore();
    if (bVar1) {
      return false;
    }
  }
  return true;
}

// operator() @ 145e86fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::ShaderPipeline::CompileJob::PreloadShaders'::__l2::<lambda_1>::operator()
          (void *this,FSHAHash *param_1,FShaderPipelineCacheArchive *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FString local_18;
  
  bVar3 = **(byte **)this;
  if ((bVar3 != 0) &&
     (((*(longlong *)param_1->Hash != EmptySHA.Hash._0_8_ ||
       (*(longlong *)(param_1->Hash + 8) != EmptySHA.Hash._8_8_)) ||
      (*(int *)(param_1->Hash + 0x10) != EmptySHA.Hash._16_4_)))) {
    bVar8 = FShaderCodeLibrary::PreloadShader(param_1,(FArchive *)param_2);
    **(byte **)this = bVar8 & bVar3;
    if (**(char **)this != '\0') {
      pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
      if (((pFVar4->Data <= param_1) &&
          (param_1 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0x14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar9 + 1;
      uVar7 = *(undefined8 *)(param_1->Hash + 8);
      pFVar5 = pFVar4->Data;
      pFVar2 = pFVar5 + (longlong)iVar9 * 0x14;
      *(undefined8 *)pFVar2 = *(undefined8 *)param_1->Hash;
      *(undefined8 *)(pFVar2 + 8) = uVar7;
      *(undefined4 *)(pFVar5 + (longlong)iVar9 * 0x14 + 0x10) =
           *(undefined4 *)(param_1->Hash + 0x10);
    }
    if ((5 < (byte)LogRHI._0_1_) && (**(char **)this == '\0')) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      BytesToHex(param_1->Hash,0x14,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetShaderPipelineBaseName @ 145ea0210

FString * __cdecl
UE::ShaderPipeline::GetShaderPipelineBaseName(FString *__return_storage_ptr__,bool param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  bVar1 = false;
  ::FString::FString(__return_storage_ptr__,GInternalProjectName);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar6 = FShaderPipelineCacheConstants::CacheFileNameOverride;
  if (param_1) {
    pwVar6 = FShaderPipelineCacheConstants::UserCacheFileNameOverride;
  }
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (GConfig != (FConfigCacheIni *)0x0) {
    pwVar5 = L"";
    pwVar4 = L"";
    if (GGameUserSettingsIni.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)GGameUserSettingsIni.Data.AllocatorInstance;
    }
    ::FString::FString(&local_28,pwVar4);
    bVar1 = false;
    bVar2 = FConfigCacheIni::GetString
                      (GConfig,FShaderPipelineCacheConstants::SectionHeading,pwVar6,&local_48,
                       &local_28);
    if (!bVar2) {
      if (GGameIni.Data.ArrayNum != 0) {
        pwVar5 = (wchar_t *)GGameIni.Data.AllocatorInstance;
      }
      ::FString::FString(&local_38,pwVar5);
      bVar2 = true;
      bVar1 = true;
      bVar3 = FConfigCacheIni::GetString
                        (GConfig,FShaderPipelineCacheConstants::SectionHeading,pwVar6,&local_48,
                         &local_38);
      if (!bVar3) goto LAB_145ea0314;
    }
    bVar2 = true;
    iVar7 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    if (iVar7 != 0) {
      bVar3 = true;
      goto LAB_145ea0316;
    }
  }
LAB_145ea0314:
  bVar3 = false;
LAB_145ea0316:
  if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    iVar7 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange
              (__return_storage_ptr__,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LibNameToPSOFCName @ 145ea5e20

FString * __cdecl
UE::ShaderPipeline::LibNameToPSOFCName(FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  if (param_2 == -1) {
    ::FString::FString(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s_Chunk%d");
  return __return_storage_ptr__;
}

// LogISRInit @ 145ea5f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::StereoRenderUtils::LogISRInit(FStereoShaderAspects *param_1)

{
  if (((4 < (byte)LogInit._0_1_) &&
      (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
      4 < (byte)LogInit._0_1_)) &&
     (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
     4 < (byte)LogInit._0_1_)) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  if ((param_1->bMobileMultiViewFallback) && (2 < (byte)LogInit._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return;
}

// PreloadShaders @ 145eab4a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::ShaderPipeline::CompileJob::PreloadShaders
          (CompileJob *this,TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *param_1
          ,bool *param_2)

{
  GraphicsDescriptor *pGVar1;
  FScriptContainerElement *pFVar2;
  DescriptorType DVar3;
  bool bVar4;
  FStaticBasicLogRecord *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  ulonglong uVar8;
  bool local_res8 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_68;
  undefined8 local_60;
  bool *local_58;
  ForAnyElementType *local_50;
  FString local_48;
  
  local_58 = local_res8;
  local_50 = &local_68;
  DVar3 = (this->PSO).Type;
  local_68.Data = (FScriptContainerElement *)0x0;
  uVar8 = 0;
  local_res8[0] = true;
  local_60 = 0;
  if (DVar3 == Graphics) {
    if (((*(longlong *)(this->PSO).GraphicsDesc.MeshShader.Hash == EmptySHA.Hash._0_8_) &&
        (*(longlong *)((this->PSO).GraphicsDesc.MeshShader.Hash + 8) == EmptySHA.Hash._8_8_)) &&
       (*(int *)((this->PSO).GraphicsDesc.MeshShader.Hash + 0x10) == EmptySHA.Hash._16_4_)) {
      pGVar1 = &(this->PSO).GraphicsDesc;
      if (((*(longlong *)(this->PSO).GraphicsDesc.VertexShader.Hash == EmptySHA.Hash._0_8_) &&
          (*(longlong *)((this->PSO).GraphicsDesc.VertexShader.Hash + 8) == EmptySHA.Hash._8_8_)) &&
         (*(int *)((this->PSO).GraphicsDesc.VertexShader.Hash + 0x10) == EmptySHA.Hash._16_4_)) {
        if (1 < (byte)LogRHI._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        local_res8[0] = false;
      }
      else {
        TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                  (param_1,(FSHAHash *)local_res20,(bool *)pGVar1);
        bVar4 = local_res8[0];
        local_res8[0] = FShaderCodeLibrary::ContainsShaderCode(&pGVar1->VertexShader);
        local_res8[0] = (bool)(local_res8[0] & bVar4);
        if ((5 < (byte)LogRHI._0_1_) && (local_res8[0] == false)) {
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          BytesToHex((uchar *)pGVar1,0x14,&local_48);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        if (((*(longlong *)(this->PSO).GraphicsDesc.GeometryShader.Hash != EmptySHA.Hash._0_8_) ||
            (*(longlong *)((this->PSO).GraphicsDesc.GeometryShader.Hash + 8) != EmptySHA.Hash._8_8_)
            ) || (*(int *)((this->PSO).GraphicsDesc.GeometryShader.Hash + 0x10) !=
                  EmptySHA.Hash._16_4_)) {
          TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                    (param_1,(FSHAHash *)local_res20,
                     (bool *)&(this->PSO).GraphicsDesc.GeometryShader);
          bVar4 = local_res8[0];
          local_res8[0] =
               FShaderCodeLibrary::ContainsShaderCode(&(this->PSO).GraphicsDesc.GeometryShader);
          local_res8[0] = (bool)(local_res8[0] & bVar4);
          if ((5 < (byte)LogRHI._0_1_) && (local_res8[0] == false)) {
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            BytesToHex((this->PSO).GraphicsDesc.GeometryShader.Hash,0x14,&local_48);
            Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
    else {
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                (param_1,(FSHAHash *)local_res20,(bool *)&(this->PSO).GraphicsDesc.MeshShader);
      bVar4 = local_res8[0];
      local_res8[0] = FShaderCodeLibrary::ContainsShaderCode(&(this->PSO).GraphicsDesc.MeshShader);
      local_res8[0] = (bool)(local_res8[0] & bVar4);
      if ((5 < (byte)LogRHI._0_1_) && (local_res8[0] == false)) {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        BytesToHex((this->PSO).GraphicsDesc.MeshShader.Hash,0x14,&local_48);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      if (((*(longlong *)(this->PSO).GraphicsDesc.AmplificationShader.Hash != EmptySHA.Hash._0_8_)
          || (*(longlong *)((this->PSO).GraphicsDesc.AmplificationShader.Hash + 8) !=
              EmptySHA.Hash._8_8_)) ||
         (*(int *)((this->PSO).GraphicsDesc.AmplificationShader.Hash + 0x10) != EmptySHA.Hash._16_4_
         )) {
        TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                  (param_1,(FSHAHash *)local_res20,
                   (bool *)&(this->PSO).GraphicsDesc.AmplificationShader);
        bVar4 = local_res8[0];
        local_res8[0] =
             FShaderCodeLibrary::ContainsShaderCode(&(this->PSO).GraphicsDesc.AmplificationShader);
        local_res8[0] = (bool)(local_res8[0] & bVar4);
        if ((5 < (byte)LogRHI._0_1_) && (local_res8[0] == false)) {
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          BytesToHex((this->PSO).GraphicsDesc.AmplificationShader.Hash,0x14,&local_48);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    if (((*(longlong *)(this->PSO).GraphicsDesc.FragmentShader.Hash != EmptySHA.Hash._0_8_) ||
        (*(longlong *)((this->PSO).GraphicsDesc.FragmentShader.Hash + 8) != EmptySHA.Hash._8_8_)) ||
       (*(int *)((this->PSO).GraphicsDesc.FragmentShader.Hash + 0x10) != EmptySHA.Hash._16_4_)) {
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                (param_1,(FSHAHash *)local_res20,(bool *)&(this->PSO).GraphicsDesc.FragmentShader);
      bVar4 = local_res8[0];
      local_res8[0] =
           FShaderCodeLibrary::ContainsShaderCode(&(this->PSO).GraphicsDesc.FragmentShader);
      local_res8[0] = (bool)(local_res8[0] & bVar4);
      if ((5 < (byte)LogRHI._0_1_) && (local_res8[0] == false)) {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        BytesToHex((this->PSO).GraphicsDesc.FragmentShader.Hash,0x14,&local_48);
        Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__15116d950,
                   (FLogCategoryBase *)&LogRHI);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    `UE::ShaderPipeline::CompileJob::PreloadShaders'::__l2::<lambda_1>::operator()
              (&local_58,&(this->PSO).GraphicsDesc.VertexShader,this->ReadRequests);
    `UE::ShaderPipeline::CompileJob::PreloadShaders'::__l2::<lambda_1>::operator()
              (&local_58,&(this->PSO).GraphicsDesc.MeshShader,this->ReadRequests);
    `UE::ShaderPipeline::CompileJob::PreloadShaders'::__l2::<lambda_1>::operator()
              (&local_58,&(this->PSO).GraphicsDesc.AmplificationShader,this->ReadRequests);
    `UE::ShaderPipeline::CompileJob::PreloadShaders'::__l2::<lambda_1>::operator()
              (&local_58,&(this->PSO).GraphicsDesc.FragmentShader,this->ReadRequests);
    `UE::ShaderPipeline::CompileJob::PreloadShaders'::__l2::<lambda_1>::operator()
              (&local_58,&(this->PSO).GraphicsDesc.GeometryShader,this->ReadRequests);
    goto LAB_145eab9d5;
  }
  if (DVar3 == Compute) {
    if (((*(longlong *)(this->PSO).ComputeDesc.ComputeShader.Hash != EmptySHA.Hash._0_8_) ||
        (*(longlong *)((this->PSO).ComputeDesc.ComputeShader.Hash + 8) != EmptySHA.Hash._8_8_)) ||
       (*(int *)((this->PSO).ComputeDesc.ComputeShader.Hash + 0x10) != EmptySHA.Hash._16_4_)) {
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                (param_1,(FSHAHash *)local_res20,(bool *)&(this->PSO).ComputeDesc);
      `UE::ShaderPipeline::CompileJob::PreloadShaders'::__l2::<lambda_1>::operator()
                (&local_58,&(this->PSO).ComputeDesc.ComputeShader,this->ReadRequests);
      goto LAB_145eab9d5;
    }
    local_res8[0] = false;
    uVar8 = 0;
    if (1 < (byte)LogRHI._0_1_) {
      pFVar5 = &::LOG_Static;
      goto LAB_145eab9c9;
    }
  }
  else {
    if (DVar3 == RayTracing) {
      bVar4 = IsRayTracingEnabled();
      if (!bVar4) {
        *param_2 = false;
        goto LAB_145eab9d5;
      }
      if (((*(longlong *)(this->PSO).RayTracingDesc.ShaderHash.Hash != EmptySHA.Hash._0_8_) ||
          (*(longlong *)((this->PSO).RayTracingDesc.ShaderHash.Hash + 8) != EmptySHA.Hash._8_8_)) ||
         (*(int *)((this->PSO).RayTracingDesc.ShaderHash.Hash + 0x10) != EmptySHA.Hash._16_4_)) {
        TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                  (param_1,(FSHAHash *)local_res20,(bool *)&(this->PSO).RayTracingDesc);
        `UE::ShaderPipeline::CompileJob::PreloadShaders'::__l2::<lambda_1>::operator()
                  (&local_58,&(this->PSO).RayTracingDesc.ShaderHash,this->ReadRequests);
        goto LAB_145eab9d5;
      }
      local_res8[0] = false;
      if (1 < (byte)LogRHI._0_1_) {
        pFVar5 = &::LOG_Static;
        goto LAB_145eab9c9;
      }
    }
    else {
      local_res8[0] = false;
      if ((byte)LogRHI._0_1_ < 2) goto LAB_145eab9e5;
      pFVar5 = &::LOG_Static;
LAB_145eab9c9:
      local_res8[0] = false;
      Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&LogRHI);
LAB_145eab9d5:
      if (local_res8[0] != false) goto LAB_145eaba46;
    }
    uVar8 = local_60 & 0xffffffff;
  }
LAB_145eab9e5:
  iVar7 = (int)uVar8;
  pFVar2 = local_68.Data + (longlong)iVar7 * 0x14;
  FVar6.Data = local_68.Data;
  while( true ) {
    if ((int)uVar8 != iVar7) {
      `TCheckedPointerIterator<FSHAHash,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar6.Data == pFVar2) break;
    FShaderCodeLibrary::ReleasePreloadedShader((FSHAHash *)FVar6.Data);
    uVar8 = local_60 & 0xffffffff;
    FVar6.Data = FVar6.Data + 0x14;
  }
  uVar8 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar8 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
LAB_145eaba46:
  bVar4 = local_res8[0];
  this->bShadersPreloaded = local_res8[0];
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return bVar4;
}

// ReleasePreloadedShaders @ 145eae680

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall UE::ShaderPipeline::CompileJob::ReleasePreloadedShaders(CompileJob *this)

{
  DescriptorType DVar1;
  bool bVar2;
  FPipelineFileCacheRayTracingDesc *pFVar3;
  
  if (this->bShadersPreloaded == false) {
    return;
  }
  DVar1 = (this->PSO).Type;
  if (DVar1 == Graphics) {
    if (((*(longlong *)(this->PSO).GraphicsDesc.VertexShader.Hash != EmptySHA.Hash._0_8_) ||
        (*(longlong *)((this->PSO).GraphicsDesc.VertexShader.Hash + 8) != EmptySHA.Hash._8_8_)) ||
       (*(int *)((this->PSO).GraphicsDesc.VertexShader.Hash + 0x10) != EmptySHA.Hash._16_4_)) {
      FShaderCodeLibrary::ReleasePreloadedShader(&(this->PSO).GraphicsDesc.VertexShader);
    }
    if (((*(longlong *)(this->PSO).GraphicsDesc.MeshShader.Hash != EmptySHA.Hash._0_8_) ||
        (*(longlong *)((this->PSO).GraphicsDesc.MeshShader.Hash + 8) != EmptySHA.Hash._8_8_)) ||
       (*(int *)((this->PSO).GraphicsDesc.MeshShader.Hash + 0x10) != EmptySHA.Hash._16_4_)) {
      FShaderCodeLibrary::ReleasePreloadedShader(&(this->PSO).GraphicsDesc.MeshShader);
    }
    if (((*(longlong *)(this->PSO).GraphicsDesc.AmplificationShader.Hash != EmptySHA.Hash._0_8_) ||
        (*(longlong *)((this->PSO).GraphicsDesc.AmplificationShader.Hash + 8) != EmptySHA.Hash._8_8_
        )) || (*(int *)((this->PSO).GraphicsDesc.AmplificationShader.Hash + 0x10) !=
               EmptySHA.Hash._16_4_)) {
      FShaderCodeLibrary::ReleasePreloadedShader(&(this->PSO).GraphicsDesc.AmplificationShader);
    }
    if (((*(longlong *)(this->PSO).GraphicsDesc.FragmentShader.Hash != EmptySHA.Hash._0_8_) ||
        (*(longlong *)((this->PSO).GraphicsDesc.FragmentShader.Hash + 8) != EmptySHA.Hash._8_8_)) ||
       (*(int *)((this->PSO).GraphicsDesc.FragmentShader.Hash + 0x10) != EmptySHA.Hash._16_4_)) {
      FShaderCodeLibrary::ReleasePreloadedShader(&(this->PSO).GraphicsDesc.FragmentShader);
    }
    if (((*(longlong *)(this->PSO).GraphicsDesc.GeometryShader.Hash != EmptySHA.Hash._0_8_) ||
        (*(longlong *)((this->PSO).GraphicsDesc.GeometryShader.Hash + 8) != EmptySHA.Hash._8_8_)) ||
       (*(int *)((this->PSO).GraphicsDesc.GeometryShader.Hash + 0x10) != EmptySHA.Hash._16_4_)) {
      FShaderCodeLibrary::ReleasePreloadedShader(&(this->PSO).GraphicsDesc.GeometryShader);
      this->bShadersPreloaded = true;
      return;
    }
  }
  else {
    if (DVar1 == Compute) {
      pFVar3 = (FPipelineFileCacheRayTracingDesc *)&(this->PSO).ComputeDesc;
    }
    else {
      if ((DVar1 != RayTracing) || (bVar2 = IsRayTracingEnabled(), !bVar2)) goto LAB_145eae7e6;
      pFVar3 = &(this->PSO).RayTracingDesc;
    }
    if (((*(longlong *)(pFVar3->ShaderHash).Hash != EmptySHA.Hash._0_8_) ||
        (*(longlong *)((pFVar3->ShaderHash).Hash + 8) != EmptySHA.Hash._8_8_)) ||
       (*(int *)((pFVar3->ShaderHash).Hash + 0x10) != EmptySHA.Hash._16_4_)) {
      FShaderCodeLibrary::ReleasePreloadedShader(&pFVar3->ShaderHash);
    }
  }
LAB_145eae7e6:
  this->bShadersPreloaded = true;
  return;
}

// ShouldLoadUserCache @ 145eb6320

bool __cdecl UE::ShaderPipeline::ShouldLoadUserCache(void)

{
  bool bVar1;
  
  bVar1 = GetShaderPipelineCacheSaveBoundPSOLog();
  if (!bVar1) {
    bVar1 = GetPSOFileCacheSaveUserCache();
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// VerifyISRConfig @ 145ebda60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::StereoRenderUtils::VerifyISRConfig(FStereoShaderAspects *param_1,EShaderPlatform param_2)

{
  bool bVar1;
  FText *this;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FText local_28;
  FText local_18;
  
  if (param_1->bInstancedStereoEnabled == true &&
      (!param_1->bMobileMultiViewEnabled && !param_1->bInstancedMultiViewportEnabled)) {
    if (4 < (byte)LogInit._0_1_) {
      RHISupportsMultiViewport((FStaticShaderPlatform)param_2);
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    FText::AsLocalizable_Advanced_LocText
              (&local_28,L"InstancedStereo",L"UnableToUseInstancedStereoRenderingText",
               L"Cannot render an Instanced Stereo-enabled project due to a missing functionality on the system. Please check log files for more info."
              );
    bVar1 = FApp::IsUnattended();
    if (bVar1) {
      if (1 < (byte)LogInit._0_1_) {
        FText::ToString(&local_28);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
    }
    else {
      this = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"InstancedStereo",L"UnableToUseInstancedStereoRendering",
                        L"Unable to use Instanced Stereo Rendering.");
      pFVar2 = FText::ToString(this);
      pwVar3 = L"";
      if ((pFVar2->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      pFVar2 = FText::ToString(&local_28);
      if ((pFVar2->Data).ArrayNum != 0) {
        pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar3,pwVar4);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
    FWindowsPlatformMisc::RequestExitWithStatus(true,'\x01',(wchar_t *)0x0);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_> @ 145ec3850

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
          (ushort param_1,ForElementType<FVertexInputStream> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 8) {
      iVar8 = 7;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 8) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_> @ 145ec3920

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
          (ushort param_1,ForElementType<FVertexFactory::FVertexStream> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FVertexFactory::FVertexStream>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_> @ 145ec39f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
          (ushort param_1,ForElementType<FVertexFactory::FVertexStream> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FVertexFactory::FVertexStream>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_> @ 145ec3ac0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
          (ushort param_1,ForElementType<FVertexFactory::FVertexStream> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FVertexFactory::FVertexStream>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_> @ 145ec3b90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FVertexFactory::FVertexStream> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FVertexFactory::FVertexStream>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_> @ 145ec3c10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FVertexFactory::FVertexStream> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 4) {
      iVar1 = 3;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FVertexFactory::FVertexStream>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_> @ 145ec3c90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexFactory::FVertexStream>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FVertexFactory::FVertexStream> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FVertexFactory::FVertexStream>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

