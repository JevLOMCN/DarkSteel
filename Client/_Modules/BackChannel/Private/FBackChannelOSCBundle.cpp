// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 12

// FBackChannelOSCBundle @ 14e7f2df0

FBackChannelOSCBundle * __thiscall
FBackChannelOSCBundle::FBackChannelOSCBundle
          (FBackChannelOSCBundle *this,FBackChannelOSCBundle *param_1)

{
  this->_padding_ = (longlong)&___7FBackChannelOSCBundle__6B_;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  (this->Elements).ArrayMax = 0;
  this->Mode = param_1->Mode;
  this->TimeTag = param_1->TimeTag;
  return this;
}

// FBackChannelOSCBundle @ 14e7f2e20

FBackChannelOSCBundle * __thiscall
FBackChannelOSCBundle::FBackChannelOSCBundle(FBackChannelOSCBundle *this,OSCPacketMode param_1)

{
  this->Mode = param_1;
  this->_padding_ = (longlong)&___7FBackChannelOSCBundle__6B_;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  (this->Elements).ArrayMax = 0;
  return this;
}

// ~FBackChannelOSCBundle @ 14e7f3500

void __thiscall FBackChannelOSCBundle::~FBackChannelOSCBundle(FBackChannelOSCBundle *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBackChannelOSCBundle__6B_;
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->Elements).AllocatorInstance.Data,(this->Elements).ArrayNum);
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBackChannelOSCPacket__6B_;
  return;
}

// operator= @ 14e7f3980

FBackChannelOSCBundle * __thiscall
FBackChannelOSCBundle::operator=(FBackChannelOSCBundle *this,FBackChannelOSCBundle *param_1)

{
  this->Mode = param_1->Mode;
  this->TimeTag = param_1->TimeTag;
  return this;
}

// AddElement @ 14e7f4400

void __thiscall
FBackChannelOSCBundle::AddElement(FBackChannelOSCBundle *this,void *param_1,int param_2)

{
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  pTVar1 = &this->Elements;
  piVar2 = &(this->Elements).ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,1,&pTVar1->AllocatorInstance,piVar2,&(this->Elements).ArrayMax);
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(undefined8 *)(pFVar7 + 8) = 0;
  uVar8 = *piVar2 - 1;
  uVar6 = 0;
  if ((int)uVar8 < *piVar2) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *piVar2;
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,(ForAnyElementType *)(pFVar7 + (longlong)iVar5 * 0x10 + -0x10),
             (int *)(pFVar7 + (longlong)iVar5 * 0x10 + -8),
             (int *)(pFVar7 + (longlong)iVar5 * 0x10 + -4));
  memcpy(*(void **)(pFVar7 + (longlong)iVar5 * 0x10 + -0x10),param_1,(longlong)param_2);
  return;
}

// CreateFromBuffer @ 14e7f4f20

TSharedPtr<FBackChannelOSCBundle,1> * __cdecl
FBackChannelOSCBundle::CreateFromBuffer
          (TSharedPtr<FBackChannelOSCBundle,1> *__return_storage_ptr__,void *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FBackChannelOSCBundle *pFVar4;
  TSharedPtr<FBackChannelOSCBundle,1> *pTVar5;
  size_t sVar6;
  int *piVar7;
  TRawPtrProxy<FBackChannelOSCBundle> local_res8;
  
  pFVar4 = ::operator_new(0x28);
  local_res8.Object = (FBackChannelOSCBundle *)0x0;
  if (pFVar4 != (FBackChannelOSCBundle *)0x0) {
    (pFVar4->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->_padding_ = (longlong)&___7FBackChannelOSCBundle__6B_;
    (pFVar4->Elements).ArrayNum = 0;
    (pFVar4->Elements).ArrayMax = 0;
    pFVar4->Mode = Read;
    local_res8.Object = pFVar4;
  }
  TSharedPtr<FBackChannelOSCBundle,1>::TSharedPtr<FBackChannelOSCBundle,1><FBackChannelOSCBundle>
            (__return_storage_ptr__,&local_res8);
  iVar3 = strcmp(param_1,BundleHeader);
  if ((iVar3 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCStringAnsi::Strcmp(Header, BundleHeader) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCBundle.cpp"
                         ,0x7a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FBackChannelOSCBundle,1> *)(*pcVar1)();
    return pTVar5;
  }
  sVar6 = strlen(BundleHeader);
  if ((__return_storage_ptr__->Object == (FBackChannelOSCBundle *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FBackChannelOSCBundle,1> *)(*pcVar1)();
    return pTVar5;
  }
  piVar7 = (int *)((longlong)((int)sVar6 + 1) + 8 + (longlong)param_1);
  __return_storage_ptr__->Object->TimeTag = 0;
  while( true ) {
    if ((int *)((longlong)param_2 + (longlong)param_1) <= piVar7) {
      return __return_storage_ptr__;
    }
    iVar3 = *piVar7;
    if ((__return_storage_ptr__->Object == (FBackChannelOSCBundle *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) break;
    AddElement(__return_storage_ptr__->Object,piVar7 + 1,iVar3);
    piVar7 = (int *)((longlong)(piVar7 + 1) + (longlong)iVar3);
    if ((int *)((longlong)param_2 + (longlong)param_1) < piVar7) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("pData <= pDataEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCBundle.cpp"
                         ,0x8d,L"");
      if (!bVar2) {
        return __return_storage_ptr__;
      }
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FBackChannelOSCBundle,1> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pcVar1 = (code *)swi(3);
  pTVar5 = (TSharedPtr<FBackChannelOSCBundle,1> *)(*pcVar1)();
  return pTVar5;
}

// GetElement @ 14e7f6270

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FBackChannelOSCBundle::GetElement(FBackChannelOSCBundle *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FBackChannelOSCBundle::GetElement'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((this->Elements).ArrayNum <= param_1) {
    if (1 < (byte)LogBackChannel._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    }
    return &::Dummy;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// GetElementCount @ 14e7f6370

int __thiscall FBackChannelOSCBundle::GetElementCount(FBackChannelOSCBundle *this)

{
  return (this->Elements).ArrayNum;
}

// GetSize @ 14e7f6920

int __thiscall FBackChannelOSCBundle::GetSize(FBackChannelOSCBundle *this)

{
  int iVar1;
  size_t sVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  sVar2 = strlen(BundleHeader);
  iVar1 = (this->Elements).ArrayNum;
  pFVar3 = (this->Elements).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  iVar5 = (int)sVar2 + 9;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar5 = iVar5 + 4 + *(int *)(pFVar3 + 8);
    pFVar3 = pFVar3 + 0x10;
  }
  return iVar5;
}

// GetType @ 14e7f6a70

OSCPacketType __thiscall FBackChannelOSCBundle::GetType(FBackChannelOSCBundle *this)

{
  return Bundle;
}

// WriteToBuffer @ 14e7fad70

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FBackChannelOSCBundle::WriteToBuffer
          (FBackChannelOSCBundle *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x18))();
  return __return_storage_ptr__;
}

// WriteToBuffer @ 14e7fada0

void __thiscall
FBackChannelOSCBundle::WriteToBuffer
          (FBackChannelOSCBundle *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  int local_res10;
  
  iVar5 = (**(code **)(this->_padding_ + 8))();
  local_res10 = param_1->ArrayNum;
  lVar6 = (longlong)local_res10;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar5,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
  pFVar7 = (param_1->AllocatorInstance).Data + lVar6;
  strncpy((char *)pFVar7,BundleHeader,(longlong)iVar5);
  pFVar7[(longlong)iVar5 - 1] = (FScriptContainerElement)0x0;
  *(undefined2 *)(pFVar7 + 7) = 0;
  pFVar7[9] = (FScriptContainerElement)0x0;
  pFVar7 = pFVar7 + 0x10;
  iVar1 = (this->Elements).ArrayNum;
  pFVar9 = (this->Elements).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    iVar2 = *(int *)(pFVar9 + 8);
    *(int *)pFVar7 = iVar2;
    memcpy(pFVar7 + 4,*(void **)pFVar9,(longlong)iVar2);
    pFVar7 = pFVar7 + 4 + iVar2;
    pFVar9 = pFVar9 + 0x10;
  }
  if (((int)pFVar7 - *(int *)&(param_1->AllocatorInstance).Data) - local_res10 != iVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesWritten == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCBundle.cpp"
                       ,0x6f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

