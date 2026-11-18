// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// FDiagnosticsAnalyzer @ 14d3cc1a0

FDiagnosticsAnalyzer * __thiscall
TraceServices::FDiagnosticsAnalyzer::FDiagnosticsAnalyzer
          (FDiagnosticsAnalyzer *this,IAnalysisSession *param_1,FDiagnosticsProvider *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDiagnosticsAnalyzer *pFVar3;
  
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FDiagnosticsAnalyzer_TraceServices__6B_;
  this->Provider = param_2;
  if (param_2 == (FDiagnosticsProvider *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Provider != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\DiagnosticsAnalysis.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDiagnosticsAnalyzer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FDiagnosticsAnalyzer @ 14d3d0540

void __thiscall
TraceServices::FDiagnosticsAnalyzer::~FDiagnosticsAnalyzer(FDiagnosticsAnalyzer *this)

{
  this->_padding_ = (longlong)&___7FDiagnosticsAnalyzer_TraceServices__6B_;
  return;
}

// OnAnalysisBegin @ 14d3e8970

void __thiscall
TraceServices::FDiagnosticsAnalyzer::OnAnalysisBegin
          (FDiagnosticsAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"Diagnostics","Session",0);
  (**(code **)*pFVar1)(pFVar1,1,"Diagnostics","Session2",0);
  return;
}

// OnEvent @ 14d3f1170

bool __thiscall
TraceServices::FDiagnosticsAnalyzer::OnEvent
          (FDiagnosticsAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  uint uVar1;
  FEventData *this_00;
  IAnalysisSession *pIVar2;
  IAnalysisSession *pIVar3;
  code *pcVar4;
  byte bVar5;
  EBuildConfiguration EVar6;
  EBuildTargetType EVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uchar *puVar12;
  FSessionInfo *pFVar13;
  FString *pFVar14;
  FName *pFVar15;
  FArrayReader *this_01;
  undefined8 *puVar16;
  ForAnyElementType FVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte local_res10 [16];
  FLLMScope local_res20 [2];
  FString local_1d8;
  ForAnyElementType local_1c8;
  int local_1c0;
  int local_1bc;
  ForAnyElementType local_1b8;
  int local_1b0;
  int local_1ac;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  FSessionInfo local_198;
  FSessionInfo local_108;
  FMemScope local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FString local_58;
  FString local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name33,L"Insights/FDiagnosticsAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name33,false,None,Default,true);
  FMemScope::FMemScope(&local_78,&LLMScope_Name33,true);
  this_00 = param_3->EventData;
  if (param_1 == 0) {
    puVar12 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
    if (puVar12 != (uchar *)0x0) {
      local_198.Platform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Platform.Data.ArrayNum = 0;
      local_198.Platform.Data.ArrayMax = 0;
      local_198.AppName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.AppName.Data.ArrayNum = 0;
      local_198.AppName.Data.ArrayMax = 0;
      local_198.ProjectName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ProjectName.Data.ArrayNum = 0;
      local_198.ProjectName.Data.ArrayMax = 0;
      local_198.CommandLine.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.CommandLine.Data.ArrayNum = 0;
      local_198.CommandLine.Data.ArrayMax = 0;
      local_198.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Branch.Data.ArrayNum = 0;
      local_198.Branch.Data.ArrayMax = 0;
      local_198.BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.BuildVersion.Data.ArrayNum = 0;
      local_198.BuildVersion.Data.ArrayMax = 0;
      local_198.VFSPaths.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.VFSPaths.Data.ArrayNum = 0;
      local_198.VFSPaths.Data.ArrayMax = 0;
      local_198.Changelist = 0;
      local_198.ConfigurationType = Unknown;
      local_198.TargetType = Unknown;
      local_198.InstanceId.A = 0;
      local_198.InstanceId.B = 0;
      local_198.InstanceId.C = 0;
      local_198.InstanceId.D = 0;
      bVar5 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                        (this_00,"AppNameOffset",'\0');
      local_res10[0] =
           UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                     (this_00,"CommandLineOffset",'\0');
      pFVar13 = (FSessionInfo *)
                ::FString::ConstructFromPtrSize(&local_1d8,(char *)puVar12,(uint)bVar5);
      if (&local_198 != pFVar13) {
        if (local_198.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Platform.Data.AllocatorInstance.Data);
        }
        local_198.Platform.Data.AllocatorInstance.Data =
             (pFVar13->Platform).Data.AllocatorInstance.Data;
        (pFVar13->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Platform.Data.ArrayNum = (pFVar13->Platform).Data.ArrayNum;
        local_198.Platform.Data.ArrayMax = (pFVar13->Platform).Data.ArrayMax;
        (pFVar13->Platform).Data.ArrayNum = 0;
        (pFVar13->Platform).Data.ArrayMax = 0;
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      uVar20 = (ulonglong)local_res10[0];
      uVar11 = (uint)local_res10[0];
      pFVar14 = ::FString::ConstructFromPtrSize
                          (&local_58,(char *)(puVar12 + bVar5),(uint)local_res10[0] - (uint)bVar5);
      if (&local_198.AppName != pFVar14) {
        if (local_198.AppName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.AppName.Data.AllocatorInstance.Data);
        }
        local_198.AppName.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.AppName.Data.ArrayNum = (pFVar14->Data).ArrayNum;
        local_198.AppName.Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar10 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(this_00);
      pFVar14 = ::FString::ConstructFromPtrSize
                          (&local_48,(char *)(puVar12 + bVar5 + (uVar20 - (uint)bVar5)),
                           uVar10 - uVar11);
      if (&local_198.CommandLine != pFVar14) {
        if (local_198.CommandLine.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.CommandLine.Data.AllocatorInstance.Data);
        }
        local_198.CommandLine.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.CommandLine.Data.ArrayNum = (pFVar14->Data).ArrayNum;
        local_198.CommandLine.Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      EVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                        (this_00,"ConfigurationType",'\0');
      local_198.ConfigurationType = EVar6;
      EVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"TargetType",'\0');
      pIVar2 = this->Session;
      local_198.TargetType = EVar7;
      (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
      if (this->Provider != (FDiagnosticsProvider *)0x0) {
        FDiagnosticsProvider::SetSessionInfo(this->Provider,&local_198);
      }
      FVar17.Data = local_198.Platform.Data.AllocatorInstance.Data;
      lVar19 = (longlong)local_198.Platform.Data.ArrayNum;
      pIVar3 = this->Session;
      local_1c8.Data = (FScriptContainerElement *)0x0;
      local_1c0 = local_198.Platform.Data.ArrayNum;
      local_1d8.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)((longlong)*pIVar3 + 0x60);
      if (local_198.Platform.Data.ArrayNum == 0) {
        local_1bc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_198.Platform.Data.ArrayNum,0,&local_1c8,
                   local_198.Platform.Data.ArrayNum,&local_1bc);
        memcpy(local_1c8.Data,FVar17.Data,lVar19 * 2);
      }
      pFVar15 = ::FName::FName(&local_70,"Platform");
      (*(code *)local_1d8.Data.AllocatorInstance.Data)(pIVar3,*pFVar15,&local_1c8);
      FVar17.Data = local_198.AppName.Data.AllocatorInstance.Data;
      lVar19 = (longlong)local_198.AppName.Data.ArrayNum;
      pIVar3 = this->Session;
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0 = local_198.AppName.Data.ArrayNum;
      local_1d8.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)((longlong)*pIVar3 + 0x60);
      if (local_198.AppName.Data.ArrayNum == 0) {
        local_1ac = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_198.AppName.Data.ArrayNum,0,&local_1b8,local_198.AppName.Data.ArrayNum,
                   &local_1ac);
        memcpy(local_1b8.Data,FVar17.Data,lVar19 * 2);
      }
      pFVar15 = ::FName::FName(&local_68,"AppName");
      (*(code *)local_1d8.Data.AllocatorInstance.Data)(pIVar3,*pFVar15,&local_1b8);
      FVar17.Data = local_198.CommandLine.Data.AllocatorInstance.Data;
      lVar19 = (longlong)local_198.CommandLine.Data.ArrayNum;
      pIVar3 = this->Session;
      local_1a8.Data = (FScriptContainerElement *)0x0;
      local_1a0 = local_198.CommandLine.Data.ArrayNum;
      local_1d8.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)((longlong)*pIVar3 + 0x60);
      if (local_198.CommandLine.Data.ArrayNum == 0) {
        local_19c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_198.CommandLine.Data.ArrayNum,0,&local_1a8,
                   local_198.CommandLine.Data.ArrayNum,&local_19c);
        memcpy(local_1a8.Data,FVar17.Data,lVar19 * 2);
      }
      pFVar15 = ::FName::FName(&local_60,"CommandLine");
      (*(code *)local_1d8.Data.AllocatorInstance.Data)(pIVar3,*pFVar15,&local_1a8);
      UpdateSessionMetadata(this,this_00);
      (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
      if (local_198.VFSPaths.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.VFSPaths.Data.AllocatorInstance.Data);
      }
      if (local_198.BuildVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.BuildVersion.Data.AllocatorInstance.Data);
      }
      if (local_198.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Branch.Data.AllocatorInstance.Data);
      }
      if (local_198.CommandLine.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.CommandLine.Data.AllocatorInstance.Data);
      }
      if (local_198.ProjectName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.ProjectName.Data.AllocatorInstance.Data);
      }
      FVar17.Data = local_198.Platform.Data.AllocatorInstance.Data;
      if (local_198.AppName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AppName.Data.AllocatorInstance.Data);
        FVar17.Data = local_198.Platform.Data.AllocatorInstance.Data;
      }
      goto LAB_14d3f196c;
    }
  }
  else {
    if (param_1 != 1) {
      bVar8 = true;
      goto LAB_14d3f197c;
    }
    local_108.Platform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Platform.Data.ArrayNum = 0;
    local_108.Platform.Data.ArrayMax = 0;
    local_108.AppName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.AppName.Data.ArrayNum = 0;
    local_108.AppName.Data.ArrayMax = 0;
    local_108.ProjectName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ProjectName.Data.ArrayNum = 0;
    local_108.ProjectName.Data.ArrayMax = 0;
    local_108.CommandLine.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.CommandLine.Data.ArrayNum = 0;
    local_108.CommandLine.Data.ArrayMax = 0;
    local_108.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Branch.Data.ArrayNum = 0;
    local_108.Branch.Data.ArrayMax = 0;
    local_108.BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.BuildVersion.Data.ArrayNum = 0;
    local_108.BuildVersion.Data.ArrayMax = 0;
    local_108.VFSPaths.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.VFSPaths.Data.ArrayNum = 0;
    local_108.VFSPaths.Data.ArrayMax = 0;
    local_108.Changelist = 0;
    local_108.ConfigurationType = Unknown;
    local_108.TargetType = Unknown;
    local_108.InstanceId.A = 0;
    local_108.InstanceId.B = 0;
    local_108.InstanceId.C = 0;
    local_108.InstanceId.D = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Platform",&local_108.Platform);
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"AppName",&local_108.AppName);
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"ProjectName",&local_108.ProjectName);
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"CommandLine",&local_108.CommandLine);
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Branch",&local_108.Branch);
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"BuildVersion",&local_108.BuildVersion);
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"VFSPaths",&local_108.VFSPaths);
    local_108.Changelist =
         UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Changelist",0);
    EVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                      (this_00,"ConfigurationType",'\0');
    local_108.ConfigurationType = EVar6;
    EVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"TargetType",'\0');
    local_108.TargetType = EVar7;
    this_01 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(this_00,"InstanceId");
    uVar11 = UE::Trace::IAnalyzer::FArrayReader::Num(this_01);
    puVar16 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_01,0,(schar *)local_res10);
    if (puVar16 == (undefined8 *)0x0) {
LAB_14d3f17a9:
      puVar16 = (undefined8 *)0x0;
    }
    else {
      iVar18 = -(int)(char)local_res10[0];
      if (iVar18 < 0) {
        iVar18 = (int)(char)local_res10[0];
      }
      if (iVar18 != 4) goto LAB_14d3f17a9;
    }
    if ((int)uVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
    }
    else if (0 < (int)uVar11) {
      if (uVar11 != 4) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data.Num() == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\DiagnosticsAnalysis.cpp"
                           ,0x61,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if (((int)uVar11 < 4) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      uVar10 = *(uint *)((longlong)puVar16 + 0xc);
      if (((int)uVar11 < 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      uVar1 = *(uint *)(puVar16 + 1);
      if (((int)uVar11 < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      local_108.InstanceId._0_8_ = *puVar16;
      local_108.InstanceId.D = uVar10;
      local_108.InstanceId.C = uVar1;
    }
    pIVar2 = this->Session;
    (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
    FDiagnosticsProvider::SetSessionInfo(this->Provider,&local_108);
    UpdateSessionMetadata(this,this_00);
    (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
    if (local_108.VFSPaths.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.VFSPaths.Data.AllocatorInstance.Data);
    }
    if (local_108.BuildVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.BuildVersion.Data.AllocatorInstance.Data);
    }
    if (local_108.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Branch.Data.AllocatorInstance.Data);
    }
    if (local_108.CommandLine.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.CommandLine.Data.AllocatorInstance.Data);
    }
    if (local_108.ProjectName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.ProjectName.Data.AllocatorInstance.Data);
    }
    FVar17.Data = local_108.Platform.Data.AllocatorInstance.Data;
    if (local_108.AppName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AppName.Data.AllocatorInstance.Data);
      FVar17.Data = local_108.Platform.Data.AllocatorInstance.Data;
    }
LAB_14d3f196c:
    if (FVar17.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar17.Data);
    }
  }
  bVar8 = false;
LAB_14d3f197c:
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res20);
  return bVar8;
}

// UpdateSessionMetadata @ 14d4062e0

void __thiscall
TraceServices::FDiagnosticsAnalyzer::UpdateSessionMetadata
          (FDiagnosticsAnalyzer *this,FEventData *param_1)

{
  IAnalysisSession *pIVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  uint uVar3;
  EType EVar4;
  FEventTypeInfo *this_00;
  FEventFieldInfo *this_01;
  char *pcVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  schar local_res18 [8];
  FName local_res20;
  FName local_78;
  FName local_70;
  FEventTypeInfo *local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  FString local_50;
  
  this_00 = UE::Trace::IAnalyzer::FEventData::GetTypeInfo(param_1);
  local_68 = this_00;
  uVar3 = UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldCount(this_00);
  uVar8 = 0;
  if (uVar3 != 0) {
    do {
      this_01 = UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldInfo(this_00,uVar8);
      if (this_01 != (FEventFieldInfo *)0x0) {
        EVar4 = UE::Trace::IAnalyzer::FEventFieldInfo::GetType(this_01);
        if (EVar4 == Integer) {
          pcVar5 = UE::Trace::IAnalyzer::FEventFieldInfo::GetName(this_01);
          ::FName::FName(&local_70,pcVar5);
          pcVar5 = UE::Trace::IAnalyzer::FEventFieldInfo::GetName(this_01);
          UE::Trace::IAnalyzer::FEventData::GetValue<__int64>(param_1,pcVar5,0);
          (**(code **)((longlong)*this->Session + 0x70))(this->Session,local_70);
        }
        else if (EVar4 == Float) {
          pcVar5 = UE::Trace::IAnalyzer::FEventFieldInfo::GetName(this_01);
          ::FName::FName(&local_78,pcVar5);
          pcVar5 = UE::Trace::IAnalyzer::FEventFieldInfo::GetName(this_01);
          pfVar6 = UE::Trace::IAnalyzer::FEventData::GetValueImpl(param_1,pcVar5,local_res18);
          if (pfVar6 == (float *)0x0) {
switchD_14d4064dc_caseD_f9:
            (**(code **)((longlong)*this->Session + 0x68))(this->Session,local_78);
          }
          else {
            switch(local_res18[0]) {
            case '\x01':
              (**(code **)((longlong)*this->Session + 0x68))
                        (this->Session,local_78,(double)(int)*(char *)pfVar6);
              break;
            case '\x02':
              (**(code **)((longlong)*this->Session + 0x68))
                        (this->Session,local_78,(double)(int)*(short *)pfVar6);
              break;
            case '\x04':
              (**(code **)((longlong)*this->Session + 0x68))
                        (this->Session,local_78,(double)(int)*pfVar6);
              break;
            case '\b':
              (**(code **)((longlong)*this->Session + 0x68))
                        (this->Session,local_78,(double)*(longlong *)pfVar6);
              break;
            case -8:
              (**(code **)((longlong)*this->Session + 0x68))
                        (this->Session,local_78,*(undefined8 *)pfVar6);
              break;
            default:
              goto switchD_14d4064dc_caseD_f9;
            case -4:
              (**(code **)((longlong)*this->Session + 0x68))(this->Session,local_78,(double)*pfVar6)
              ;
            }
          }
        }
        else if ((EVar4 == AnsiString) || (EVar4 == WideString)) {
          pcVar5 = UE::Trace::IAnalyzer::FEventFieldInfo::GetName(this_01);
          ::FName::FName(&local_res20,pcVar5);
          local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_50.Data.ArrayNum = 0;
          local_50.Data.ArrayMax = 0;
          pcVar5 = UE::Trace::IAnalyzer::FEventFieldInfo::GetName(this_01);
          UE::Trace::IAnalyzer::FEventData::GetString(param_1,pcVar5,&local_50);
          _Src.Data = local_50.Data.AllocatorInstance.Data;
          lVar7 = (longlong)local_50.Data.ArrayNum;
          pIVar1 = this->Session;
          local_60.Data = (FScriptContainerElement *)0x0;
          local_58 = local_50.Data.ArrayNum;
          pcVar2 = *(code **)((longlong)*pIVar1 + 0x60);
          if (local_50.Data.ArrayNum == 0) {
            local_54 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_50.Data.ArrayNum,0,&local_60,local_50.Data.ArrayNum,&local_54);
            memcpy(local_60.Data,_Src.Data,lVar7 * 2);
          }
          (*pcVar2)(pIVar1,local_res20);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar8 = uVar8 + 1;
      this_00 = local_68;
    } while (uVar8 < uVar3);
  }
  return;
}

