// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// operator() @ 14329a2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`BuildPatchServices::FFakeDownloadService::StartService'::__l2::<lambda_1>::operator()(void *this)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> *pTVar10;
  undefined8 *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
  *pTVar17;
  ForAnyElementType FVar18;
  int iVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  undefined1 auStackY_278 [32];
  ForAnyElementType local_228;
  undefined8 local_220;
  uint local_218;
  longlong *local_210;
  int local_208;
  undefined8 local_200;
  longlong local_1f8;
  TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
  *local_1f0;
  undefined8 *local_1e8;
  TReferenceControllerBase<1> *local_1e0;
  FArchiveState local_1d8;
  undefined8 local_148;
  ForAnyElementType *local_140;
  undefined8 local_138;
  FReadAccessScope local_128;
  FReadAccessScope local_110;
  FReadAccessScope local_f8;
  FReadAccessScope local_e0;
  TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_228.Data = (FScriptContainerElement *)0x0;
  local_1f8 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = this;
  do {
    lVar20 = local_1f8;
    uVar16 = local_218;
    EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)this + 8));
    plVar3 = local_210;
    lVar14 = *(longlong *)this;
    if ((int)uVar16 < *(int *)(lVar14 + 0x40)) {
      lVar22 = lVar20 * 0x50;
      do {
        lVar20 = lVar20 + 1;
        uVar7 = 0;
        if ((int)uVar16 < *(int *)(lVar14 + 0x40)) {
          uVar7 = ~uVar16 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar17 = (TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                   *)(*(longlong *)(lVar14 + 0x38) + lVar22);
        if (((local_228.Data <= pTVar17) &&
            (pTVar17 < (TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                        *)(local_228.Data + (longlong)local_220._4_4_ * 0x50))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (int)local_220;
        if ((int)local_220 == local_220._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&local_228,(int *)((longlong)&local_220 + 4));
        }
        FVar18.Data = local_228.Data;
        local_220 = CONCAT44(local_220._4_4_,iVar8 + 1);
        lVar14 = (longlong)iVar8 * 0x50;
        *(undefined8 *)(local_228.Data + lVar14) = *(undefined8 *)pTVar17;
        *(undefined4 *)(local_228.Data + lVar14 + 8) = *(undefined4 *)&pTVar17->field_0x8;
        ::FString::FString((FString *)(local_228.Data + lVar14 + 0x10),
                           (FString *)&pTVar17->field_0x10);
        TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
        ::
        TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                    *)(FVar18.Data + lVar14 + 0x20),
                   (TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                    *)&pTVar17->field_0x20);
        TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> *)
                   (FVar18.Data + lVar14 + 0x38),
                   (TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> *)
                   &pTVar17->field_0x38);
        lVar14 = *plVar3;
        if (*(int *)(lVar14 + 0x128) < 1) {
          local_c8._0_8_ = 0;
          local_c8._8_1_ = 1;
          local_c8._12_4_ = 200;
          local_c8._16_8_ = *(undefined8 *)(lVar14 + 0xd8);
          local_c8._24_8_ = *(undefined8 *)(lVar14 + 0xe0);
          local_c8._32_8_ = *(undefined8 *)(lVar14 + 0xe8);
          local_c8._40_8_ = *(undefined8 *)(lVar14 + 0xf0);
          local_c8._48_8_ = *(undefined8 *)(lVar14 + 0xf8);
          local_c8._56_8_ = *(undefined8 *)(lVar14 + 0x100);
          uVar7 = 0;
          if ((int)((int)local_220 - 1U) < (int)local_220) {
            uVar7 = ~((int)local_220 - 1U) >> 0x1f;
          }
          local_c8._64_8_ = *(undefined8 *)(lVar14 + 0x108);
          local_c8._72_8_ = *(undefined8 *)(lVar14 + 0x110);
          local_c8._80_8_ = *(undefined8 *)(lVar14 + 0x118);
          if (uVar7 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          TMapBase<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,0>_>
          ::
          Emplace<int_const_&,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_>
                    ((void *)(lVar14 + 0x130),
                     (int *)(local_228.Data + (longlong)((int)local_220 + -1) * 0x50 + 8),&local_c8)
          ;
        }
        else {
          if ((*(int *)(lVar14 + 0x128) < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar10 = *(TTuple<double,bool,EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>
                      **)(lVar14 + 0x120);
          uVar7 = 0;
          if ((int)((int)local_220 - 1U) < (int)local_220) {
            uVar7 = ~((int)local_220 - 1U) >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          TMapBase<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,0>_>
          ::
          Emplace<int_const_&,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>_const_&>
                    ((void *)(lVar14 + 0x130),
                     (int *)(local_228.Data + (longlong)((int)local_220 + -1) * 0x50 + 8),pTVar10);
          lVar14 = *plVar3;
          if ((*(int *)(lVar14 + 0x128) < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar21 = ((ForAnyElementType *)(lVar14 + 0x120))->Data;
          iVar8 = *(int *)(lVar14 + 0x128) + -1;
          if (iVar8 != 0) {
            memmove(pFVar21,pFVar21 + 0x58,(longlong)iVar8 * 0x58);
          }
          *(int *)(lVar14 + 0x128) = *(int *)(lVar14 + 0x128) + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,(ForAnyElementType *)(lVar14 + 0x120),*(int *)(lVar14 + 0x128),
                     (int *)(lVar14 + 300));
        }
        lVar14 = *plVar3;
        uVar16 = uVar16 + 1;
        lVar22 = lVar22 + 0x50;
        this = plVar3;
        local_218 = uVar16;
        local_1f8 = lVar20;
      } while ((int)uVar16 < *(int *)(lVar14 + 0x40));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar14 + 8));
    FVar18.Data = local_228.Data;
    iVar19 = 0;
    iVar8 = (int)local_220;
    local_1f0 = (TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                 *)local_228.Data;
    local_220 = 0;
    local_228.Data = (FScriptContainerElement *)0x0;
    local_208 = iVar8;
    dVar5 = BuildPatchServices::FStatsCollector::GetSeconds();
    if (0 < iVar8) {
      pFVar21 = FVar18.Data + 0x40;
      do {
        if ((iVar19 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar10 = TMapBase<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<double,bool,enum_EHttpResponseCodes::Type,BuildPatchServices::FChunkHeader>,0>_>
                  ::FindChecked((void *)(*(longlong *)this + 0x130),*(int *)(pFVar21 + -0x38));
        pTVar17 = (TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                   *)(pFVar21 + -0x40);
        if (dVar5 - *(double *)pTVar17 < *(double *)pTVar10) {
          if (((local_228.Data <= pTVar17) &&
              (pTVar17 < (TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                          *)(local_228.Data + (longlong)local_220._4_4_ * 0x50))) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (int)local_220;
          if ((int)local_220 == local_220._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&local_228,(int *)((longlong)&local_220 + 4));
          }
          local_220 = CONCAT44(local_220._4_4_,iVar9 + 1);
          TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
          ::
          TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                    ((TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                      *)(local_228.Data + (longlong)iVar9 * 0x50),pTVar17);
        }
        else {
          puVar11 = ::operator_new(0x20);
          puVar15 = (undefined8 *)0x0;
          if (puVar11 != (undefined8 *)0x0) {
            puVar11[1] = 0;
            *puVar11 = &___7FMockDownload_BuildPatchServices__6B_;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar15 = puVar11;
          }
          cVar1 = pTVar10->field_0x8;
          *(char *)(puVar15 + 1) = cVar1;
          if (cVar1 == '\0') {
            *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
          }
          else {
            *(undefined4 *)((longlong)puVar15 + 0xc) = *(undefined4 *)&pTVar10->field_0xc;
            local_1d8._padding_ = 0;
            local_1d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
            local_200 = 0;
            local_1d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
            local_1d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
            local_1d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
            local_1d8._40_8_ = 0;
            local_1d8.ArSerializingDefaults = 0;
            local_1d8.ArPortFlags = 0;
            local_1d8.ArMaxSerializeSize = 0;
            local_1d8.ArUEVer.FileVersionUE4 = 0;
            local_1d8.ArUEVer.FileVersionUE5 = 0;
            local_1d8.ArLicenseeUEVer = 0;
            local_1d8.ArEngineVer.Major = 0;
            local_1d8.ArEngineVer.Minor = 0;
            local_1d8.ArEngineVer.Patch = 0;
            local_1d8.ArEngineVer._6_2_ = 0;
            local_1d8.ArEngineVer.Changelist = 0;
            local_1d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
            local_1d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
            local_1d8.SavePackageData = (FArchiveSavePackageData *)0x0;
            local_1d8.SerializedProperty = (FProperty *)0x0;
            local_1d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
            local_1d8.bCustomVersionsAreReset = false;
            local_1d8._129_7_ = 0;
            local_1d8.NextProxy = (FArchiveState *)0x0;
            FArchiveState::FArchiveState(&local_1d8);
            local_148 = 0;
            local_1d8._padding_ =
                 (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
            local_138 = local_200;
            local_140 = (ForAnyElementType *)(puVar15 + 2);
            FArchiveState::SetIsSaving(&local_1d8,true);
            (**(code **)(local_1d8._padding_ + 0x108))(&local_1d8,0);
            local_1d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
            BuildPatchServices::operator<<
                      ((FArchive *)&local_1d8,(FChunkHeader *)&pTVar10->field_0x10);
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,*(int *)&pTVar10->field_0x28,(ForAnyElementType *)(puVar15 + 2),
                       (int *)(puVar15 + 3),(int *)((longlong)puVar15 + 0x1c));
            uVar2 = *(undefined4 *)(pFVar21 + -0x38);
            iVar8 = *(int *)(puVar15 + 3);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar21 + -8),
                       &local_128);
            if ((*(int *)(pFVar21 + 8) != 0) &&
               (plVar3 = *(longlong **)pFVar21, plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 0x68))
                        (plVar3,uVar2,
                         (longlong)
                         (iVar8 / 3 + (iVar8 >> 0x1f) +
                         (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >>
                              0x1f)));
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_128);
            iVar8 = *(int *)(puVar15 + 3);
            uVar2 = *(undefined4 *)(pFVar21 + -0x38);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar21 + -8),
                       &local_110);
            if ((*(int *)(pFVar21 + 8) != 0) &&
               (plVar3 = *(longlong **)pFVar21, plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,(longlong)(iVar8 / 2));
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_110);
            iVar8 = *(int *)(puVar15 + 3);
            uVar2 = *(undefined4 *)(pFVar21 + -0x38);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar21 + -8),
                       &local_f8);
            if ((*(int *)(pFVar21 + 8) != 0) &&
               (plVar3 = *(longlong **)pFVar21, plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,(longlong)iVar8);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_f8);
            FArchive::~FArchive((FArchive *)&local_1d8);
            iVar8 = local_208;
          }
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          local_1e8 = puVar15;
          pTVar12 = ::operator_new(0x18);
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            pTVar12->SharedReferenceCount = (atomic<int>)0x1;
            pTVar12->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_VFMockDownload_BuildPatchServices__U__DefaultDeleter_VFMockDownload_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            pTVar12->WeakReferenceCount = (atomic<int>)0x1;
            pTVar12[1]._padding_ = (longlong)puVar15;
            pTVar13 = pTVar12;
          }
          uVar2 = *(undefined4 *)(pFVar21 + -0x38);
          local_1e0 = pTVar13;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar21 + -0x20),
                     &local_e0);
          if ((*(int *)(pFVar21 + -0x10) != 0) &&
             (plVar3 = *(longlong **)(pFVar21 + -0x18), plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,&local_1e8);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_e0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1e0);
        }
        iVar19 = iVar19 + 1;
        pFVar21 = pFVar21 + 0x50;
        FVar18.Data = (FScriptContainerElement *)local_1f0;
        this = local_210;
      } while (iVar19 < iVar8);
    }
    FWindowsPlatformProcess::Sleep(0.0);
    EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)this + 8));
    cVar1 = *(char *)(*(longlong *)this + 0xc0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)this + 8));
    DestructItems<TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>,int>
              ((TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
                *)FVar18.Data,iVar8);
    if ((TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
         *)FVar18.Data !=
        (TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
         *)0x0) {
      FMemory::Free(FVar18.Data);
    }
  } while (cVar1 != '\0');
  DestructItems<TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>,int>
            ((TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
              *)local_228.Data,(int)local_220);
  if ((TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
       *)local_228.Data !=
      (TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    FMemory::Free(local_228.Data);
  }
  return;
}

// StartService @ 1432ee600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall BuildPatchServices::FFakeDownloadService::StartService(FFakeDownloadService *this)

{
  TFuture<void> *pTVar1;
  undefined ***pppuVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  TUniqueFunction<void___cdecl(void)> local_78;
  code *local_48 [2];
  undefined **local_38;
  FFakeDownloadService *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  this->bRunDownloadThread = true;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__StartService_FFakeDownloadService_BuildPatchServices__QEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_78._0_8_ = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`BuildPatchServices::FFakeDownloadService::StartService'::__l2::<lambda_1>,void>
                ::Call;
  local_78._40_8_ = 0;
  local_30 = this;
  pTVar1 = Async<TFunction<void___cdecl(void)>_>
                     ((TFuture<void> *)local_88,Thread,(TFunction<void___cdecl(void)> *)local_48,
                      &local_78);
  if (&this->Future != pTVar1) {
    *(undefined8 *)&this->Future = *(undefined8 *)pTVar1;
    *(undefined8 *)pTVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->Future).field_0x8,
               (FSharedReferencer<1> *)&pTVar1->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_88._8_8_);
  if (local_48[0] != (code *)0x0) {
    pppuVar2 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar2 = local_20;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  return;
}

// StopService @ 1432ee820

void __thiscall BuildPatchServices::FFakeDownloadService::StopService(FFakeDownloadService *this)

{
  longlong *plVar1;
  char cVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  this->bRunDownloadThread = false;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  return;
}

