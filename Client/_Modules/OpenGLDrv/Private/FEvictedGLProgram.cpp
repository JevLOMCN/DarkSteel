// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// RestoreGLProgramFromBinary @ 145c2b8f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGLProgramCacheLRU::FEvictedGLProgram::RestoreGLProgramFromBinary
          (FEvictedGLProgram *this,FOpenGLProgramKey *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FOpenGLLinkedProgram *this_00;
  FOpenGLProgramBinary *pFVar7;
  FOpenGLBinaryCacheStats *lpCriticalSection;
  TDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *this_01;
  FName *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  LARGE_INTEGER local_res8;
  FName local_res18;
  TArrayView<unsigned_char_const_,int> local_98;
  FString local_88;
  FString local_78;
  uchar *local_68;
  undefined8 uStack_60;
  FReadAccessScope local_58 [2];
  
  this_00 = this->LinkedProgram;
  uVar9 = 0;
  if (this_00 == (FOpenGLLinkedProgram *)0x0) {
    this_00 = ::operator_new(0x2a8);
    if (this_00 == (FOpenGLLinkedProgram *)0x0) {
      this_00 = (FOpenGLLinkedProgram *)0x0;
    }
    else {
      FOpenGLLinkedProgramBase::FOpenGLLinkedProgramBase
                ((FOpenGLLinkedProgramBase *)this_00,param_1,0);
      (this_00->Config).TypeIndex = '\0';
      (this_00->LRUInfo).LRUNode.Index = -1;
      pFVar7 = ::operator_new(0x20);
      if (pFVar7 == (FOpenGLProgramBinary *)0x0) {
        (this_00->LRUInfo).CachedProgramBinary.Obj.Ptr = (FOpenGLProgramBinary *)0x0;
        (this_00->LRUInfo).LastTouchedFrame = 0;
      }
      else {
        (pFVar7->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar7->OwnedData).ArrayNum = 0;
        (pFVar7->OwnedData).ArrayMax = 0;
        (pFVar7->DataView).DataPtr = (uchar *)0x0;
        (pFVar7->DataView).ArrayNum = 0;
        (this_00->LRUInfo).CachedProgramBinary.Obj.Ptr = pFVar7;
        (this_00->LRUInfo).LastTouchedFrame = 0;
      }
    }
    this->LinkedProgram = this_00;
  }
  if ((*(uint *)&this_00->_padding_ != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LinkedProgram->Program == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x5ed,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = (this->LinkedProgram->LRUInfo).CachedProgramBinary.Obj.Ptr;
  local_68 = (pFVar7->DataView).DataPtr;
  uStack_60 = *(undefined8 *)&(pFVar7->DataView).ArrayNum;
  if (((pFVar7->DataView).ArrayNum != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LinkedProgram->LRUInfo.CachedProgramBinary->GetDataView().Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x5ee,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = (this->CachedProgramBinary).Obj.Ptr;
  local_98.DataPtr = (pFVar7->DataView).DataPtr;
  local_98.ArrayNum = (pFVar7->DataView).ArrayNum;
  local_98._12_4_ = *(undefined4 *)&(pFVar7->DataView).field_0xc;
  bVar4 = UE::OpenGL::CreateGLProgramFromBinary((uint *)&this->LinkedProgram->_padding_,&local_98);
  if (bVar4) {
    bVar4 = FOpenGLBinaryCacheStats::IsEnabled();
    if (bVar4) {
      lpCriticalSection = FOpenGLBinaryCacheStats::Get();
      if (lpCriticalSection == (FOpenGLBinaryCacheStats *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar5 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
      iVar6 = TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FOpenGLProgramKey>
                        ((TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
                          *)&lpCriticalSection->KeyToTimes,uVar5,param_1);
      uVar10 = uVar9;
      if (((iVar6 == -1) ||
          (uVar10 = (longlong)iVar6 * 0x98 + *(longlong *)&lpCriticalSection->KeyToTimes,
          uVar10 == 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(double *)(uVar10 + 0x88) == 0.0) {
        if (((*(double *)(uVar10 + 0x78) == 0.0) || (*(double *)(uVar10 + 0x80) == 0.0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ProgramTime.StartTime && ProgramTime.CompileTime",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                               ,0xe7,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        QueryPerformanceCounter(&local_res8);
        *(double *)(uVar10 + 0x88) =
             (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
        lpCriticalSection->TotalHits = lpCriticalSection->TotalHits + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    pTVar3 = CVarLRUKeepProgramBinaryResident.Ref;
    bVar4 = IsInParallelGameThread();
    if ((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) {
      uVar9 = 4;
    }
    if ((*(int *)((longlong)pTVar3->ShadowedValue + uVar9) != 0) ||
       ((((this->CachedProgramBinary).Obj.Ptr)->OwnedData).ArrayNum < 1)) {
      pFVar7 = (this->LinkedProgram->LRUInfo).CachedProgramBinary.Obj.Ptr;
      (this->LinkedProgram->LRUInfo).CachedProgramBinary.Obj.Ptr =
           (this->CachedProgramBinary).Obj.Ptr;
      (this->CachedProgramBinary).Obj.Ptr = pFVar7;
    }
  }
  else {
    pFVar7 = (this->CachedProgramBinary).Obj.Ptr;
    (*FCrc::MemCrc32Func)
              ((pFVar7->DataView).DataPtr,(int)*(undefined8 *)&(pFVar7->DataView).ArrayNum,0);
    if (4 < (byte)LogRHI._0_1_) {
      FOpenGLProgramKey::ToString(param_1,&local_88);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FGLProgramCacheLRU::FEvictedGLProgram::RestoreGLProgramFromBinary(FOpenGLProgramKey_const&___ptr64)___ptr64'
                  ::__l31::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    if (0x1f < (int)*(undefined8 *)&(((this->CachedProgramBinary).Obj.Ptr)->DataView).ArrayNum) {
      do {
        if (4 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&`public:_void___cdecl_FGLProgramCacheLRU::FEvictedGLProgram::RestoreGLProgramFromBinary(FOpenGLProgramKey_const&___ptr64)___ptr64'
                      ::__l54::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        uVar5 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar5;
      } while ((int)uVar5 < 8);
    }
    this_01 = RHIGetPanicDelegate();
    pFVar8 = ::FName::FName(&local_res18,"FailedBinaryProgramCreate");
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,local_58);
    if ((*(int *)&this_01->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&this_01->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,pFVar8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_58);
    FOpenGLProgramKey::ToString(param_1,&local_78);
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FGLProgramCacheLRU::FEvictedGLProgram::RestoreGLProgramFromBinary(FOpenGLProgramKey_const&___ptr64)___ptr64'
                ::__l72::LOG_Static,(FLogCategoryBase *)&LogRHI);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

