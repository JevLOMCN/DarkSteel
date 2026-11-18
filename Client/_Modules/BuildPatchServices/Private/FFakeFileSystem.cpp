// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// FFakeFileSystem @ 1432faa60

FFakeFileSystem * __thiscall
BuildPatchServices::FFakeFileSystem::FFakeFileSystem(FFakeFileSystem *this)

{
  FMockFileSystem::FMockFileSystem((FMockFileSystem *)this);
  this->_padding_ = (longlong)&___7FFakeFileSystem_BuildPatchServices__6B_;
  *(undefined8 *)&this->DiskData = 0;
  *(undefined8 *)&(this->DiskData).field_0x8 = 0;
  *(undefined8 *)&(this->DiskData).field_0x20 = 0;
  *(undefined4 *)&(this->DiskData).field_0x28 = 0;
  *(undefined4 *)&(this->DiskData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DiskData).field_0x34 = 0;
  *(undefined4 *)&(this->DiskData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DiskData).field_0x40 = 0;
  *(undefined4 *)&(this->DiskData).field_0x48 = 0;
  (this->DiskDataOpenFailure).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DiskDataOpenFailure).ArrayNum = 0;
  (this->DiskDataOpenFailure).ArrayMax = 0;
  *(undefined8 *)&this->CreateFileReaderFunc = 0;
  *(undefined8 *)&(this->CreateFileReaderFunc).field_0x28 = 0;
  *(undefined8 *)&this->CreateFileWriterFunc = 0;
  *(undefined8 *)&(this->CreateFileWriterFunc).field_0x28 = 0;
  return this;
}

// CreateFileReader @ 14331c2d0

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> __thiscall
BuildPatchServices::FFakeFileSystem::CreateFileReader
          (FFakeFileSystem *this,wchar_t *param_1,EReadFlags param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  FString *pFVar11;
  FArchiveState *pFVar12;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> TVar13;
  longlong lVar14;
  longlong *plVar15;
  ForAnyElementType FVar16;
  FArchiveState *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined4 in_register_00000084;
  wchar_t *pwVar19;
  undefined4 in_R9D;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  undefined1 local_res8 [8];
  wchar_t *local_res10;
  wchar_t *local_res18;
  undefined4 local_res20;
  undefined8 *local_98;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  pwVar19 = (wchar_t *)CONCAT44(in_register_00000084,param_2);
  pFVar17 = (FArchiveState *)0x0;
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  local_res18 = pwVar19;
  if (*(void **)&this->CreateFileReaderFunc == (void *)0x0) {
    local_res20 = in_R9D;
    ::FString::FString(&local_90,pwVar19);
    FPaths::NormalizeFilename(&local_90);
    ::FString::FString(&local_80,L"");
    pFVar11 = FPaths::ConvertRelativePathToFull(local_70,&local_80,&local_90);
    if (&local_90 != pFVar11) {
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      local_90.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_90.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    plVar4 = &this->_padding_;
    if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)plVar4);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_90.Data.ArrayNum != 0) {
      FVar16.Data = local_90.Data.AllocatorInstance.Data;
    }
    iVar9 = local_90.Data.ArrayNum + -1;
    if (local_90.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar16.Data);
    iVar9 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->DiskData,uVar8,&local_90);
    if (iVar9 != -1) {
      pFVar18 = (this->DiskDataOpenFailure).AllocatorInstance.Data;
      pFVar20 = pFVar18 + (longlong)(this->DiskDataOpenFailure).ArrayNum * 0x10;
      pwVar19 = local_res18;
      iVar9 = local_90.Data.ArrayNum;
      for (; local_res18 = pwVar19, pFVar18 != pFVar20; pFVar18 = pFVar18 + 0x10) {
        iVar2 = *(int *)(pFVar18 + 8);
        if (iVar2 == iVar9) {
          if (iVar2 < 2) goto LAB_14331c5ce;
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar18,(wchar_t *)local_90.Data.AllocatorInstance.Data);
          bVar21 = iVar9 == 0;
          iVar9 = local_90.Data.ArrayNum;
        }
        else {
          bVar21 = iVar2 + iVar9 == 1;
        }
        pwVar19 = local_res18;
        if (bVar21) goto LAB_14331c5ce;
      }
      pFVar12 = ::operator_new(0xa8);
      if (pFVar12 != (FArchiveState *)0x0) {
        iVar9 = local_90.Data.ArrayNum + -1;
        FVar16.Data = local_90.Data.AllocatorInstance.Data;
        if (local_90.Data.ArrayNum == 0) {
          iVar9 = 0;
          FVar16.Data = (FScriptContainerElement *)L"";
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar16.Data);
        iVar9 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->DiskData,uVar8,&local_90);
        if (((iVar9 == -1) ||
            (pFVar17 = (FArchiveState *)(*(longlong *)&this->DiskData + (longlong)iVar9 * 0x28),
            pFVar17 == (FArchiveState *)0x0)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar21)) {
          pcVar3 = (code *)swi(3);
          TVar13.Ptr = (FArchive *)(*pcVar3)();
          return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)TVar13.Ptr;
        }
        pFVar12->_padding_ = 0;
        pFVar12->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        (pFVar12->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
        (pFVar12->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
        (pFVar12->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
        *(undefined8 *)&pFVar12->field_0x28 = 0;
        pFVar12->ArSerializingDefaults = 0;
        pFVar12->ArPortFlags = 0;
        pFVar12->ArMaxSerializeSize = 0;
        (pFVar12->ArUEVer).FileVersionUE4 = 0;
        (pFVar12->ArUEVer).FileVersionUE5 = 0;
        pFVar12->ArLicenseeUEVer = 0;
        (pFVar12->ArEngineVer).Major = 0;
        (pFVar12->ArEngineVer).Minor = 0;
        (pFVar12->ArEngineVer).Patch = 0;
        *(undefined2 *)&(pFVar12->ArEngineVer).field_0x6 = 0;
        (pFVar12->ArEngineVer).Changelist = 0;
        pFVar12->CustomVersionContainer = (FCustomVersionContainer *)0x0;
        pFVar12->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        pFVar12->SavePackageData = (FArchiveSavePackageData *)0x0;
        pFVar12->SerializedProperty = (FProperty *)0x0;
        pFVar12->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        *(undefined8 *)&pFVar12->bCustomVersionsAreReset = 0;
        pFVar12->NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(pFVar12);
        pFVar12[1]._padding_ = 0;
        pFVar12->_padding_ = (longlong)&___7FFakeFileReader_BuildPatchServices__6B_;
        pFVar12[1].ActiveFPLB = &pFVar17->InlineFPLB;
        pFVar12[1].InlineFPLB.StartFastPathLoadBuffer =
             (uchar *)(longlong)*(int *)&(pFVar17->InlineFPLB).EndFastPathLoadBuffer;
        FArchiveState::SetIsLoading(pFVar12,true);
        pFVar17 = pFVar12;
      }
      pFVar12 = *(FArchiveState **)param_1;
      pwVar19 = local_res18;
      if ((pFVar12 != pFVar17) &&
         (*(FArchiveState **)param_1 = pFVar17, pFVar12 != (FArchiveState *)0x0)) {
        (**(code **)pFVar12->_padding_)(pFVar12,1);
        pwVar19 = local_res18;
      }
    }
LAB_14331c5ce:
    LeaveCriticalSection((LPCRITICAL_SECTION)plVar4);
    in_R9D = local_res20;
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
      in_R9D = local_res20;
    }
  }
  else {
    local_res10 = pwVar19;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateFileReaderFunc);
    pcVar3 = *(code **)&this->CreateFileReaderFunc;
    plVar4 = *(longlong **)&(this->CreateFileReaderFunc).field_0x28;
    plVar15 = (longlong *)&(this->CreateFileReaderFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar15 = plVar4;
    }
    uVar10 = (**(code **)(*plVar15 + 8))();
    (*pcVar3)(&local_98,uVar10,&local_res10,local_res8);
    if ((undefined8 **)param_1 != &local_98) {
      puVar5 = *(undefined8 **)param_1;
      *(undefined8 **)param_1 = local_98;
      local_98 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    if (local_98 != (undefined8 *)0x0) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  uVar10 = *(undefined8 *)param_1;
  dVar7 = FStatsCollector::GetSeconds();
  iVar9 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  lVar6 = this->_padding_;
  *(int *)&this->_padding_ = iVar9 + 1;
  lVar14 = (longlong)iVar9;
  *(double *)(lVar6 + lVar14 * 0x28) = dVar7;
  *(undefined8 *)(lVar6 + 8 + lVar14 * 0x28) = uVar10;
  ::FString::FString((FString *)(lVar6 + 0x10 + lVar14 * 0x28),pwVar19);
  *(undefined4 *)(lVar6 + 0x20 + lVar14 * 0x28) = in_R9D;
  return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)(FArchive *)param_1;
}

// CreateFileWriter @ 14331c7e0

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> __thiscall
BuildPatchServices::FFakeFileSystem::CreateFileWriter
          (FFakeFileSystem *this,wchar_t *param_1,EWriteFlags param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  FString *pFVar9;
  FMemoryWriter *pFVar10;
  FMemoryWriter *pFVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint in_register_00000084;
  FName FVar15;
  undefined4 in_R9D;
  double dVar16;
  int local_res8 [2];
  FName local_res10;
  FName local_res18;
  undefined4 local_res20;
  undefined8 *local_98;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  FVar15.Number = in_register_00000084;
  FVar15.ComparisonIndex.Value = param_2;
  pFVar11 = (FMemoryWriter *)0x0;
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  local_res18 = FVar15;
  if (*(void **)&this->CreateFileWriterFunc == (void *)0x0) {
    local_res20 = in_R9D;
    ::FString::FString(&local_80,(wchar_t *)FVar15);
    FPaths::NormalizeFilename(&local_80);
    ::FString::FString(&local_90,L"");
    pFVar9 = FPaths::ConvertRelativePathToFull(local_70,&local_90,&local_80);
    if (&local_80 != pFVar9) {
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      local_80.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.Data.ArrayNum = (pFVar9->Data).ArrayNum;
      local_80.Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    plVar3 = &this->_padding_;
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)plVar3);
    pFVar10 = ::operator_new(0xa8);
    if (pFVar10 != (FMemoryWriter *)0x0) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      iVar7 = local_80.Data.ArrayNum + -1;
      FVar5.Data = local_80.Data.AllocatorInstance.Data;
      if (local_80.Data.ArrayNum == 0) {
        iVar7 = 0;
        FVar5.Data = (FScriptContainerElement *)L"";
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar5.Data);
      iVar7 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&this->DiskData,uVar6,&local_80);
      if ((iVar7 == -1) ||
         (lVar14 = *(longlong *)&this->DiskData + (longlong)iVar7 * 0x28, lVar14 == 0)) {
        local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_80;
        TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&this->DiskData,(uint)local_res8,
                   (TKeyInitializer<FString_const_&> *)(ulonglong)uVar6,(bool *)&local_90);
        lVar14 = *(longlong *)&this->DiskData + (longlong)local_res8[0] * 0x28;
      }
      pFVar11 = FMemoryWriter::FMemoryWriter
                          (pFVar10,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                   (lVar14 + 0x10),false,false,local_res10);
      FVar15 = local_res18;
    }
    pFVar10 = *(FMemoryWriter **)param_1;
    if ((pFVar10 != pFVar11) &&
       (*(FMemoryWriter **)param_1 = pFVar11, pFVar10 != (FMemoryWriter *)0x0)) {
      (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)plVar3);
    in_R9D = local_res20;
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
      in_R9D = local_res20;
    }
  }
  else {
    local_res10 = FVar15;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateFileWriterFunc);
    pcVar2 = *(code **)&this->CreateFileWriterFunc;
    plVar3 = *(longlong **)&(this->CreateFileWriterFunc).field_0x28;
    plVar13 = (longlong *)&(this->CreateFileWriterFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar13 = plVar3;
    }
    uVar8 = (**(code **)(*plVar13 + 8))();
    (*pcVar2)(&local_98,uVar8,&local_res10,local_res8);
    if ((undefined8 **)param_1 != &local_98) {
      puVar4 = *(undefined8 **)param_1;
      *(undefined8 **)param_1 = local_98;
      local_98 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    if (local_98 != (undefined8 *)0x0) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  uVar8 = *(undefined8 *)param_1;
  dVar16 = FStatsCollector::GetSeconds();
  iVar7 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  lVar14 = this->_padding_;
  lVar12 = (longlong)iVar7;
  *(double *)(lVar14 + lVar12 * 0x28) = dVar16;
  *(undefined8 *)(lVar14 + lVar12 * 0x28 + 8) = uVar8;
  ::FString::FString((FString *)(lVar14 + lVar12 * 0x28 + 0x10),(wchar_t *)FVar15);
  *(undefined4 *)(lVar14 + lVar12 * 0x28 + 0x20) = in_R9D;
  return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)(FArchive *)param_1;
}

// DeleteFile @ 14331d550

bool __thiscall
BuildPatchServices::FFakeFileSystem::DeleteFile(FFakeFileSystem *this,wchar_t *param_1)

{
  longlong *lpCriticalSection;
  ForAnyElementType FVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,param_1);
  FPaths::NormalizeFilename(&local_38);
  ::FString::FString(&local_28,L"");
  pFVar3 = FPaths::ConvertRelativePathToFull(&local_18,&local_28,&local_38);
  if (&local_38 != pFVar3) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(this->DiskData).field_0x8 != *(int *)&(this->DiskData).field_0x34) {
      iVar4 = local_38.Data.ArrayNum + -1;
      FVar1.Data = local_38.Data.AllocatorInstance.Data;
      if (local_38.Data.ArrayNum == 0) {
        iVar4 = 0;
        FVar1.Data = (FScriptContainerElement *)L"";
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
      TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->DiskData,uVar2,&local_38);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FileExists @ 14331ecb0

bool __thiscall
BuildPatchServices::FFakeFileSystem::FileExists(FFakeFileSystem *this,wchar_t *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  iVar3 = local_18.Data.ArrayNum + -1;
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  iVar3 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->DiskData,uVar2,&local_18);
  if (iVar3 == -1) {
    pFVar6 = (this->DiskDataOpenFailure).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)(this->DiskDataOpenFailure).ArrayNum * 0x10;
    for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 0x10) {
      if (*(int *)(pFVar6 + 8) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)pFVar6;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar4,param_1);
      if (iVar3 == 0) goto LAB_14331ed4d;
    }
    bVar5 = false;
  }
  else {
LAB_14331ed4d:
    bVar5 = true;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetFileSize @ 143320a90

bool __thiscall
BuildPatchServices::FFakeFileSystem::GetFileSize
          (FFakeFileSystem *this,wchar_t *param_1,long64 *param_2)

{
  longlong *lpCriticalSection;
  int *piVar1;
  long64 lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  FString local_48;
  FString local_38 [2];
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *param_2 = -1;
  ::FString::FString(&local_48,param_1);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
  }
  lVar9 = 0;
  iVar7 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar8.Data);
  iVar7 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->DiskData,uVar6,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (iVar7 != -1) {
    ::FString::FString(local_38,param_1);
    iVar7 = local_38[0].Data.ArrayNum + -1;
    FVar8.Data = local_38[0].Data.AllocatorInstance.Data;
    if (local_38[0].Data.ArrayNum == 0) {
      iVar7 = 0;
      FVar8.Data = (FScriptContainerElement *)L"";
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar8.Data);
    iVar7 = TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->DiskData,uVar6,local_38);
    if (((iVar7 == -1) ||
        (lVar9 = *(longlong *)&this->DiskData + (longlong)iVar7 * 0x28, lVar9 == 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    *param_2 = (longlong)*(int *)(lVar9 + 0x18);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  dVar11 = FStatsCollector::GetSeconds();
  iVar7 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  lVar9 = this->_padding_;
  lVar10 = (longlong)iVar7 * 0x20;
  *(double *)(lVar9 + lVar10) = dVar11;
  ::FString::FString((FString *)(lVar9 + lVar10 + 8),param_1);
  *(long64 *)(lVar9 + lVar10 + 0x18) = *param_2;
  lVar2 = *param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (bool)((byte)((ulonglong)lVar2 >> 0x3f) ^ 1);
}

