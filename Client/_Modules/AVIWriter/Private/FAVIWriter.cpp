// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVIWriter
// Functions: 4

// ~FAVIWriter @ 14464ec00

void __thiscall FAVIWriter::~FAVIWriter(FAVIWriter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAVIWriter__6B_;
  pFVar1 = (this->Options).CodecName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Options).OutputFilename.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDefaultDelete<FCapturedFrames>::operator()
            ((TDefaultDelete<FCapturedFrames> *)&this->CapturedFrames,(this->CapturedFrames).Ptr);
  return;
}

// CreateInstance @ 14464fc30

FAVIWriter * __cdecl FAVIWriter::CreateInstance(FAVIWriterOptions *param_1)

{
  bool bVar1;
  int iVar2;
  FAVIWriter *pFVar3;
  
  pFVar3 = ::operator_new(0x80);
  if (pFVar3 != (FAVIWriter *)0x0) {
    pFVar3->_padding_ = (longlong)&___7FAVIWriter__6B_;
    pFVar3->bCapturing = (FThreadSafeBool)0x0;
    (pFVar3->CapturedFrames).Ptr = (FCapturedFrames *)0x0;
    pFVar3->FrameNumber = 0;
    ::FString::FString(&(pFVar3->Options).OutputFilename,&param_1->OutputFilename);
    (pFVar3->Options).CaptureFramerateNumerator = param_1->CaptureFramerateNumerator;
    iVar2 = param_1->CaptureFramerateDenominator;
    (pFVar3->Options).CompressionQuality.bIsSet = false;
    (pFVar3->Options).CaptureFramerateDenominator = iVar2;
    bVar1 = (param_1->CompressionQuality).bIsSet;
    (pFVar3->Options).CompressionQuality.bIsSet = bVar1;
    if (bVar1 != false) {
      (pFVar3->Options).CompressionQuality.TypedValue = (param_1->CompressionQuality).TypedValue;
    }
    ::FString::FString(&(pFVar3->Options).CodecName,&param_1->CodecName);
    (pFVar3->Options).bSynchronizeFrames = param_1->bSynchronizeFrames;
    (pFVar3->Options).Width = param_1->Width;
    (pFVar3->Options).Height = param_1->Height;
    pFVar3->_padding_ = (longlong)&___7FAVIWriterWin__6B_;
    pFVar3[1]._padding_ = 0;
    pFVar3[1].bCapturing = (FThreadSafeBool)0x0;
    pFVar3[1].FrameNumber = 0;
    pFVar3[1].CapturedFrames.Ptr = (FCapturedFrames *)0x0;
    pFVar3[1].Options.OutputFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar3[1].Options.OutputFilename.Data.ArrayNum = 0;
    pFVar3[1].Options.OutputFilename.Data.ArrayMax = 0;
    return pFVar3;
  }
  return (FAVIWriter *)0x0;
}

// GetFrameData @ 144650430

TArray<FCapturedFrame,TSizedDefaultAllocator<32>_> * __thiscall
FAVIWriter::GetFrameData
          (FAVIWriter *this,
          TArray<FCapturedFrame,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  FCapturedFrames *this_00;
  int iVar3;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  char cVar8;
  ForAnyElementType *pFVar9;
  ForAnyElementType FVar10;
  ForAnyElementType local_58;
  undefined8 uStack_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  
  this_00 = (this->CapturedFrames).Ptr;
  FVar10.Data = (FScriptContainerElement *)0x0;
  if (this_00 == (FCapturedFrames *)0x0) {
    uStack_50 = 0;
    pFVar9 = &local_58;
    bVar5 = false;
    bVar4 = true;
    FVar10.Data = (FScriptContainerElement *)0x0;
  }
  else {
    cVar8 = (**(code **)(this_00->FrameReady->_padding_ + 0x20))(this_00->FrameReady,param_1,0);
    if (cVar8 == '\0') {
      FCapturedFrames::StartUnArchiving(this_00);
      pFVar9 = &local_48;
      local_40 = 0;
      bVar5 = true;
      bVar4 = false;
    }
    else {
      if (((TOptional<TFuture<void>_> *)local_38 != &this_00->UnarchiveTask) &&
         ((this_00->UnarchiveTask).bIsSet != false)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)&(this_00->UnarchiveTask).TypedValue.field_0x8);
        (this_00->UnarchiveTask).bIsSet = false;
      }
      uVar1 = this_00->MaxInMemoryFrames;
      local_58.Data = (FScriptContainerElement *)0x0;
      uStack_50 = 0;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      if (0 < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar1,&local_58,0,(int *)((longlong)&uStack_50 + 4));
      }
      lpCriticalSection = &this_00->InMemoryFrameMutex;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar6 = (this_00->InMemoryFrames).AllocatorInstance.Data;
      iVar2 = (this_00->InMemoryFrames).ArrayNum;
      iVar3 = (this_00->InMemoryFrames).ArrayMax;
      *(undefined4 *)&(this_00->InMemoryFrames).AllocatorInstance.Data = local_58.Data._0_4_;
      *(undefined4 *)((longlong)&(this_00->InMemoryFrames).AllocatorInstance.Data + 4) =
           local_58.Data._4_4_;
      (this_00->InMemoryFrames).ArrayNum = (int)uStack_50;
      (this_00->InMemoryFrames).ArrayMax = uStack_50._4_4_;
      local_58.Data = pFVar6;
      uStack_50._0_4_ = iVar2;
      uStack_50._4_4_ = iVar3;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FCapturedFrames::StartUnArchiving(this_00);
      FVar10.Data = local_58.Data;
      local_40 = CONCAT44(uStack_50._4_4_,(int)uStack_50);
      uStack_50 = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
      DestructItems<FCapturedFrame,int>((FCapturedFrame *)0x0,0);
      if ((FCapturedFrame *)local_58.Data != (FCapturedFrame *)0x0) {
        FMemory::Free(local_58.Data);
      }
      pFVar9 = &local_48;
      bVar5 = true;
      bVar4 = false;
    }
  }
  pFVar9->Data = (FScriptContainerElement *)0x0;
  FVar7.Data = local_58.Data;
  iVar2 = *(int *)&pFVar9[1].Data;
  (__return_storage_ptr__->AllocatorInstance).Data = FVar10.Data;
  __return_storage_ptr__->ArrayNum = iVar2;
  __return_storage_ptr__->ArrayMax = *(int *)((longlong)&pFVar9[1].Data + 4);
  pFVar9[1].Data = (FScriptContainerElement *)0x0;
  if (bVar4) {
    DestructItems<FCapturedFrame,int>((FCapturedFrame *)local_58.Data,(int)uStack_50);
    if ((FCapturedFrame *)FVar7.Data != (FCapturedFrame *)0x0) {
      FMemory::Free(FVar7.Data);
    }
  }
  if (bVar5) {
    DestructItems<FCapturedFrame,int>((FCapturedFrame *)local_48.Data,(int)local_40);
    if ((FCapturedFrame *)local_48.Data != (FCapturedFrame *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return __return_storage_ptr__;
}

// Update @ 144651a60

void __thiscall
FAVIWriter::Update(FAVIWriter *this,double param_1,
                  TArray<FColor,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FEvent *pFVar8;
  double dVar9;
  double dVar10;
  FCapturedFrame local_68;
  
  if ((this->bCapturing != (FThreadSafeBool)0x0) && (iVar1 = param_2->ArrayNum, iVar1 != 0)) {
    iVar2 = (this->Options).CaptureFramerateDenominator;
    iVar3 = (this->Options).CaptureFramerateNumerator;
    pFVar8 = (FEvent *)0x0;
    pFVar7 = (param_2->AllocatorInstance).Data;
    iVar4 = this->FrameNumber;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar5 = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    uVar6 = this->FrameNumber;
    dVar9 = (double)iVar2 / (double)iVar3;
    dVar10 = (double)iVar4 * dVar9;
    if ((this->Options).bSynchronizeFrames != false) {
      pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(false);
    }
    local_68.StartTimeSeconds = dVar10;
    local_68.EndTimeSeconds = dVar10 + dVar9;
    local_68.FrameIndex = uVar6;
    local_68.FrameData.AllocatorInstance.Data = pFVar7;
    local_68.FrameData.ArrayNum = iVar1;
    local_68.FrameData.ArrayMax = iVar5;
    local_68.FrameProcessedEvent = pFVar8;
    FCapturedFrames::Add((this->CapturedFrames).Ptr,&local_68);
    this->FrameNumber = this->FrameNumber + 1;
    if (pFVar8 != (FEvent *)0x0) {
      (**(code **)(pFVar8->_padding_ + 0x20))(pFVar8,0xffffffff,0);
      FGenericPlatformProcess::ReturnSynchEventToPool(pFVar8);
    }
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

