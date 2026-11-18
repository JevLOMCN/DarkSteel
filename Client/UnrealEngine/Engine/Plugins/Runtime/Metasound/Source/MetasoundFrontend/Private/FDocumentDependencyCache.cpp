// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// FDocumentDependencyCache @ 14ae1aba0

/* WARNING: Enum "Type": Some values do not have unique names */

FDocumentDependencyCache * __thiscall
Metasound::Frontend::FDocumentCache::FDocumentDependencyCache::FDocumentDependencyCache
          (FDocumentDependencyCache *this,FMetasoundFrontendDocument *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  FDocumentDependencyCache *pFVar8;
  int *piVar9;
  TTuple<FGuid,int> *pTVar10;
  bool bVar11;
  uint local_res8 [2];
  FString local_68;
  FNodeClassRegistryKey local_58;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->IDToIndex).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IDToIndex).Pairs.ArrayNum = 0;
  (this->IDToIndex).Pairs.ArrayMax = 0;
  (this->KeyToIndex).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyToIndex).Pairs.ArrayNum = 0;
  (this->KeyToIndex).Pairs.ArrayMax = 0;
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,
               "Metasound::Frontend::FDocumentDependencyCache::FDocumentDependencyCache");
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1129,
               "Metasound::Frontend::FDocumentDependencyCache::FDocumentDependencyCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
               ,0x469);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1129);
  }
  local_res8[0] = 0;
  if (0 < (param_1->Dependencies).ArrayNum) {
    do {
      uVar5 = local_res8[0];
      uVar7 = 0;
      if ((int)local_res8[0] < (param_1->Dependencies).ArrayNum) {
        uVar7 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FDocumentDependencyCache *)(*pcVar3)();
        return pFVar8;
      }
      pFVar1 = (param_1->Dependencies).AllocatorInstance.Data;
      FNodeClassRegistryKey::FNodeClassRegistryKey
                (&local_58,
                 (FMetasoundFrontendClassMetadata *)(pFVar1 + (longlong)(int)uVar5 * 0x90 + 0x18));
      TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
      ::Emplace<Metasound::Frontend::FNodeClassRegistryKey,int_const_&>
                (&this->KeyToIndex,&local_58,(int *)local_res8);
      piVar9 = TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::Find
                         (&this->IDToIndex,(FGuid *)(pFVar1 + (longlong)(int)uVar5 * 0x90 + 8));
      if ((piVar9 != (int *)0x0) && (3 < (byte)LogMetaSound._0_1_)) {
        FMetasoundFrontendClassName::ToString
                  ((FMetasoundFrontendClassName *)&(param_1->RootGraph)._padding_,&local_68);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      pTVar10 = TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::
                AllocateMemoryForEmplace<FGuid_const_&>
                          (&this->IDToIndex,(FGuid *)(pFVar1 + (longlong)(int)uVar5 * 0x90 + 8));
      uVar4 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar5 * 0x90 + 0x10);
      *(undefined8 *)pTVar10 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar5 * 0x90 + 8);
      *(undefined8 *)&pTVar10->field_0x8 = uVar4;
      *(uint *)&pTVar10->field_0x10 = local_res8[0];
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (param_1->Dependencies).ArrayNum);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return this;
}

