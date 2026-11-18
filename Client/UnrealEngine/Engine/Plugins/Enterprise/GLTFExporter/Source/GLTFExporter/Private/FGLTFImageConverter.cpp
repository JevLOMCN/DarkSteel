// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// Convert @ 14e5e60d0

FGLTFJsonImage * __thiscall
FGLTFImageConverter::Convert
          (FGLTFImageConverter *this,TGLTFSuperfluous<FString> *param_1,bool param_2,
          TIntPoint<int> param_3,
          TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> *param_4)

{
  FString *pFVar1;
  char cVar2;
  FGLTFBufferBuilder *this_00;
  FGLTFFileBuilder *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FGLTFMemoryArchive,1> *pTVar7;
  FGLTFJsonImage *pFVar8;
  char *pcVar9;
  FGLTFJsonBufferView *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  ForAnyElementType *pFVar13;
  EImageFormat EVar14;
  wchar_t *pwVar15;
  EGLTFJsonMimeType EVar16;
  int iStackX_24;
  FGLTFJsonImage *local_88;
  TSharedPtr<FGLTFMemoryArchive,1> local_80;
  FString local_70;
  TSharedRef<FGLTFMemoryArchive,1> local_60;
  FString local_50;
  
  pTVar7 = MakeShared<FGLTFMemoryArchive,1>(&local_60);
  local_80.Object = pTVar7->Object;
  local_80.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  cVar2 = *(char *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0xa4);
  if (cVar2 == '\0') {
LAB_14e5e6188:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_4->field_0x8);
    pFVar8 = (FGLTFJsonImage *)0x0;
  }
  else {
    if (cVar2 == '\x01') {
LAB_14e5e6251:
      EVar16 = PNG;
      if ((local_80.Object == (FGLTFMemoryArchive *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FGLTFJsonImage *)(*pcVar4)();
        return pFVar8;
      }
      iVar6 = 0;
      EVar14 = PNG;
    }
    else {
      if (cVar2 != '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Converters\\GLTFImageConverters.cpp"
                           ,0x38,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FGLTFJsonImage *)(*pcVar4)();
          return pFVar8;
        }
        goto LAB_14e5e6188;
      }
      lVar12 = 0;
      if (!param_2) {
        iStackX_24 = param_3.field0_0x0._4_4_;
        iStackX_24 = param_3.field0_0x0._0_4_ * iStackX_24;
        if (0 < iStackX_24) {
          pcVar9 = (char *)(**(longlong **)param_4 + 3);
          do {
            if (*pcVar9 != -1) goto LAB_14e5e6251;
            lVar12 = lVar12 + 1;
            pcVar9 = pcVar9 + 4;
          } while (lVar12 < iStackX_24);
        }
      }
      EVar16 = JPEG;
      if ((local_80.Object == (FGLTFMemoryArchive *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FGLTFJsonImage *)(*pcVar4)();
        return pFVar8;
      }
      EVar14 = JPEG;
      iVar6 = *(int *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0xa8);
    }
    pwVar15 = L"";
    FGLTFImageUtilities::CompressToFormat
              ((FColor *)**(undefined8 **)param_4,param_3,EVar14,iVar6,
               (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&(local_80.Object)->field_0x98);
    lVar12 = *(longlong *)&this->field_0x58;
    pFVar8 = ::operator_new(0x40);
    if (pFVar8 == (FGLTFJsonImage *)0x0) {
      pFVar8 = (FGLTFJsonImage *)0x0;
    }
    else {
      *(undefined4 *)&pFVar8->_padding_ = *(undefined4 *)(lVar12 + 0x2d0);
      pFVar8->_padding_ = (longlong)&___7FGLTFJsonImage__6B_;
      (pFVar8->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->Name).Data.ArrayNum = 0;
      (pFVar8->Name).Data.ArrayMax = 0;
      (pFVar8->URI).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->URI).Data.ArrayNum = 0;
      (pFVar8->URI).Data.ArrayMax = 0;
      pFVar8->MimeType = None;
      pFVar8->BufferView = (FGLTFJsonBufferView *)0x0;
    }
    pFVar13 = (ForAnyElementType *)(lVar12 + 0x2c8);
    local_88 = pFVar8;
    if (((pFVar13->Data <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar13->Data + (longlong)*(int *)(lVar12 + 0x2d4) * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FGLTFJsonImage *)(*pcVar4)();
      return pFVar8;
    }
    iVar6 = *(int *)(lVar12 + 0x2d0);
    if (iVar6 == *(int *)(lVar12 + 0x2d4)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar13,(int *)(lVar12 + 0x2d4));
    }
    *(int *)(lVar12 + 0x2d0) = iVar6 + 1;
    *(FGLTFJsonImage **)(pFVar13->Data + (longlong)iVar6 * 8) = local_88;
    local_88 = (FGLTFJsonImage *)0x0;
    if (*(char *)(*(longlong *)&this->field_0x58 + 0x10) == '\0') {
      if (EVar16 == PNG) {
        pwVar15 = L".png";
      }
      else if (EVar16 == JPEG) {
        pwVar15 = L".jpg";
      }
      else {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Converters\\GLTFImageUtilities.cpp"
                           ,0xf,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FGLTFJsonImage *)(*pcVar4)();
          return pFVar8;
        }
      }
      this_01 = *(FGLTFFileBuilder **)&this->field_0x58;
      ::FString::ConcatFC(&local_70,(FString *)param_1,pwVar15);
      pFVar11 = FGLTFFileBuilder::AddExternalFile(this_01,&local_50,&local_70,&local_80);
      pFVar1 = &pFVar8->URI;
      if (pFVar1 != pFVar11) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->URI).Data.ArrayNum = (pFVar11->Data).ArrayNum;
        (pFVar8->URI).Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::FString::operator=(&pFVar8->Name,(FString *)param_1);
      pFVar8->MimeType = EVar16;
      this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
      if ((local_80.Object == (FGLTFMemoryArchive *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FGLTFJsonImage *)(*pcVar4)();
        return pFVar8;
      }
      pFVar10 = FGLTFBufferBuilder::AddBufferView
                          (this_00,*(void **)&(local_80.Object)->field_0x98,
                           *(ulong64 *)&(local_80.Object)->field_0xa0,None,'\x04');
      pFVar8->BufferView = pFVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_4->field_0x8);
  }
  return pFVar8;
}

// GetMimeType @ 14e5f7940

EGLTFJsonMimeType __thiscall
FGLTFImageConverter::GetMimeType
          (FGLTFImageConverter *this,FColor *param_1,TIntPoint<int> param_2,bool param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  EGLTFJsonMimeType EVar4;
  uchar *puVar5;
  longlong lVar6;
  int iStackX_1c;
  
  cVar1 = *(char *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0xa4);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return PNG;
    }
    if (cVar1 == '\x02') {
      if (!param_3) {
        iStackX_1c = param_2.field0_0x0._4_4_;
        iStackX_1c = iStackX_1c * param_2.field0_0x0._0_4_;
        lVar6 = 0;
        if (0 < iStackX_1c) {
          puVar5 = &(param_1->field0_0x0)._s_0.A;
          do {
            if (*puVar5 != 0xff) {
              return PNG;
            }
            lVar6 = lVar6 + 1;
            puVar5 = puVar5 + 4;
          } while (lVar6 < iStackX_1c);
        }
      }
      return JPEG;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Converters\\GLTFImageConverters.cpp"
                       ,0x38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return None;
}

