// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 5

// FGLTFBufferBuilder @ 14e5cff60

FGLTFBufferBuilder * __thiscall
FGLTFBufferBuilder::FGLTFBufferBuilder
          (FGLTFBufferBuilder *this,FString *param_1,UGLTFExportOptions *param_2)

{
  FGLTFJsonBuilder::FGLTFJsonBuilder((FGLTFJsonBuilder *)this,param_1,param_2);
  (this->BufferArchive).Object = (FGLTFMemoryArchive *)0x0;
  (this->BufferArchive).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FGLTFBufferBuilder @ 14e5d74b0

void __thiscall FGLTFBufferBuilder::~FGLTFBufferBuilder(FGLTFBufferBuilder *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BufferArchive).SharedReferenceCount.ReferenceController);
  FGLTFJsonRoot::~FGLTFJsonRoot((FGLTFJsonRoot *)&this->_padding_);
  FGLTFFileBuilder::~FGLTFFileBuilder((FGLTFFileBuilder *)this);
  return;
}

// AddBufferView @ 14e5dd050

FGLTFJsonBufferView * __thiscall
FGLTFBufferBuilder::AddBufferView
          (FGLTFBufferBuilder *this,void *param_1,ulong64 param_2,EGLTFJsonBufferTarget param_3,
          uchar param_4)

{
  int *piVar1;
  longlong *plVar2;
  FGLTFMemoryArchive *pFVar3;
  FGLTFJsonBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FGLTFJsonBufferView *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FGLTFJsonBufferView *local_28 [2];
  
  InitializeBuffer(this);
  if (((this->BufferArchive).Object == (FGLTFMemoryArchive *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FGLTFJsonBufferView *)(*pcVar5)();
    return pFVar8;
  }
  uVar9 = (ulonglong)param_4;
  pFVar3 = (this->BufferArchive).Object;
  uVar10 = *(ulonglong *)&pFVar3->field_0xa0;
  uVar9 = (uVar9 - uVar10 % uVar9) % uVar9;
  if (uVar9 != 0) {
    uVar10 = uVar10 + uVar9;
    if ((pFVar3 == (FGLTFMemoryArchive *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGLTFJsonBufferView *)(*pcVar5)();
      return pFVar8;
    }
    *(ulonglong *)&((this->BufferArchive).Object)->field_0x90 = uVar10;
  }
  if (((this->BufferArchive).Object == (FGLTFMemoryArchive *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FGLTFJsonBufferView *)(*pcVar5)();
    return pFVar8;
  }
  pFVar3 = (this->BufferArchive).Object;
  if (((longlong)param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Length >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Public\\Builders\\GLTFMemoryArchive.h"
                         ,0x13,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FGLTFJsonBufferView *)(*pcVar5)();
    return pFVar8;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (1,1,(*(longlong *)&pFVar3->field_0x90 - *(longlong *)&pFVar3->field_0xa0) + param_2,
             (ForAnyElementType *)&pFVar3->field_0x98,(long64 *)&pFVar3->field_0xa0,
             (long64 *)&pFVar3->field_0xa8);
  memcpy((void *)(*(longlong *)&pFVar3->field_0x98 + *(longlong *)&pFVar3->field_0x90),param_1,
         param_2);
  *(ulong64 *)&pFVar3->field_0x90 = *(longlong *)&pFVar3->field_0x90 + param_2;
  if (((this->BufferArchive).Object == (FGLTFMemoryArchive *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FGLTFJsonBufferView *)(*pcVar5)();
    return pFVar8;
  }
  this->JsonBuffer->ByteLength = *(long64 *)&((this->BufferArchive).Object)->field_0x90;
  pFVar8 = ::operator_new(0x40);
  if (pFVar8 != (FGLTFJsonBufferView *)0x0) {
    *(int *)&pFVar8->_padding_ = (int)this->_padding_;
    pFVar8->_padding_ = (longlong)&___7FGLTFJsonBufferView__6B_;
    (pFVar8->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->Name).Data.ArrayNum = 0;
    (pFVar8->Name).Data.ArrayMax = 0;
    pFVar8->Buffer = (FGLTFJsonBuffer *)0x0;
    pFVar8->ByteLength = 0;
    pFVar8->ByteOffset = 0;
    pFVar8->ByteStride = 0;
    pFVar8->Target = None;
  }
  plVar2 = &this->_padding_;
  local_28[0] = pFVar8;
  if ((((FGLTFJsonBufferView **)*plVar2 <= local_28) &&
      (local_28 < (FGLTFJsonBufferView **)*plVar2 + *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FGLTFJsonBufferView *)(*pcVar5)();
    return pFVar8;
  }
  iVar7 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  *(FGLTFJsonBufferView **)(*plVar2 + (longlong)iVar7 * 8) = local_28[0];
  pFVar4 = this->JsonBuffer;
  pFVar8->ByteOffset = uVar10;
  pFVar8->Buffer = pFVar4;
  pFVar8->ByteLength = param_2;
  pFVar8->Target = param_3;
  return pFVar8;
}

// GetBufferData @ 14e5f5b00

FGLTFMemoryArchive * __thiscall FGLTFBufferBuilder::GetBufferData(FGLTFBufferBuilder *this)

{
  return (this->BufferArchive).Object;
}

// InitializeBuffer @ 14e6013e0

void __thiscall FGLTFBufferBuilder::InitializeBuffer(FGLTFBufferBuilder *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  TSharedPtr<FGLTFMemoryArchive,1> *pTVar3;
  longlong *plVar4;
  atomic<int> aVar5;
  FGLTFMemoryArchive *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  FGLTFJsonBuffer *pFVar12;
  TSharedRef<FGLTFMemoryArchive,1> *pTVar13;
  FString *pFVar14;
  FGLTFJsonBuffer *pFVar15;
  FString *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  FGLTFJsonBuffer *local_78;
  FString local_70;
  FString local_60;
  TSharedRef<FGLTFMemoryArchive,1> local_50;
  FString local_40;
  TSharedPtr<FGLTFMemoryArchive,1> local_30;
  
  pTVar3 = &this->BufferArchive;
  if (pTVar3->Object == (FGLTFMemoryArchive *)0x0) {
    pFVar12 = ::operator_new(0x38);
    pFVar15 = (FGLTFJsonBuffer *)0x0;
    if (pFVar12 != (FGLTFJsonBuffer *)0x0) {
      *(int *)&pFVar12->_padding_ = (int)this->_padding_;
      pFVar12->_padding_ = (longlong)&___7FGLTFJsonBuffer__6B_;
      (pFVar12->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar12->Name).Data.ArrayNum = 0;
      (pFVar12->Name).Data.ArrayMax = 0;
      (pFVar12->URI).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar12->URI).Data.ArrayNum = 0;
      (pFVar12->URI).Data.ArrayMax = 0;
      pFVar12->ByteLength = 0;
      pFVar15 = pFVar12;
    }
    plVar4 = &this->_padding_;
    local_78 = pFVar15;
    if ((((FGLTFJsonBuffer **)*plVar4 <= &local_78) &&
        (&local_78 < (FGLTFJsonBuffer **)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar11 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)plVar4,piVar1);
    }
    *(int *)&this->_padding_ = iVar11 + 1;
    *(FGLTFJsonBuffer **)(*plVar4 + (longlong)iVar11 * 8) = local_78;
    this->JsonBuffer = pFVar15;
    pTVar13 = MakeShared<FGLTFMemoryArchive,1>(&local_50);
    pTVar17 = (pTVar13->SharedReferenceCount).ReferenceController;
    pFVar6 = pTVar13->Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar3 != &local_30) {
      pTVar3->Object = pFVar6;
      pTVar7 = (this->BufferArchive).SharedReferenceCount.ReferenceController;
      if (pTVar17 != pTVar7) {
        (this->BufferArchive).SharedReferenceCount.ReferenceController = pTVar17;
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar7->SharedReferenceCount;
          aVar5 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)pTVar7->_padding_)(pTVar7);
            LOCK();
            paVar2 = &pTVar7->WeakReferenceCount;
            aVar5 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar5 == (atomic<int>)0x1) {
              (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    if ((char)this->_padding_ == '\0') {
      ::FString::FString(&local_70,L".bin");
      FPaths::ChangeExtension(&local_60,(FString *)this,&local_70);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      pFVar14 = FGLTFFileBuilder::AddExternalFile
                          ((FGLTFFileBuilder *)this,&local_40,&local_60,pTVar3);
      pFVar15 = this->JsonBuffer;
      pFVar16 = &pFVar15->URI;
      if (pFVar16 != pFVar14) {
        pFVar8 = (pFVar16->Data).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pFVar16->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar15->URI).Data.ArrayNum = (pFVar14->Data).ArrayNum;
        (pFVar15->URI).Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

