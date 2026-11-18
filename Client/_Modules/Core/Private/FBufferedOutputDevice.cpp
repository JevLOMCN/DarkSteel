// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FBufferedOutputDevice @ 1418159b0

/* WARNING: Enum "Type": Some values do not have unique names */

FBufferedOutputDevice * __thiscall
FBufferedOutputDevice::FBufferedOutputDevice(FBufferedOutputDevice *this)

{
  FOutputDevice::FOutputDevice((FOutputDevice *)this);
  this->_padding_ = (longlong)&___7FBufferedOutputDevice__6B_;
  (this->BufferedLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferedLines).ArrayNum = 0;
  (this->BufferedLines).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SynchronizationObject,4000);
  this->FilterLevel = All;
  return this;
}

// ~FBufferedOutputDevice @ 141816a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBufferedOutputDevice::~FBufferedOutputDevice(FBufferedOutputDevice *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBufferedOutputDevice__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SynchronizationObject);
  DestructItems<FBufferedLine,int>
            ((FBufferedLine *)(this->BufferedLines).AllocatorInstance.Data,
             (this->BufferedLines).ArrayNum);
  pFVar1 = (this->BufferedLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  return;
}

// GetContents @ 141825b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBufferedOutputDevice::GetContents
          (FBufferedOutputDevice *this,TArray<FBufferedLine,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  TArray<FBufferedLine,TSizedDefaultAllocator<32>_> *pTVar2;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = &this->BufferedLines;
    if (param_1 != pTVar2) {
      DestructItems<FBufferedLine,int>
                ((FBufferedLine *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_1->ArrayNum = (this->BufferedLines).ArrayNum;
      param_1->ArrayMax = (this->BufferedLines).ArrayMax;
      (this->BufferedLines).ArrayNum = 0;
      (this->BufferedLines).ArrayMax = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000141825ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RedirectTo @ 14182da90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBufferedOutputDevice::RedirectTo(FBufferedOutputDevice *this,FOutputDevice *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (this->BufferedLines).ArrayNum;
    pFVar4 = (this->BufferedLines).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((this->BufferedLines).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FBufferedLine,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      pcVar3 = *(code **)(param_1->_padding_ + 0x10);
      FLazyName::Resolve((FLazyName *)(pFVar4 + 8));
      (*pcVar3)(param_1,*(undefined8 *)pFVar4,pFVar4[0x20],local_res18);
      pFVar4 = pFVar4 + 0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014182db42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Serialize @ 141831e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBufferedOutputDevice::Serialize
          (FBufferedOutputDevice *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  double dVar2;
  int iVar3;
  
  if (param_2 <= this->FilterLevel) {
    lpCriticalSection = &this->SynchronizationObject;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar3 = (this->BufferedLines).ArrayNum;
    piVar1 = &(this->BufferedLines).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->BufferedLines).AllocatorInstance,piVar1);
    }
    dVar2 = __real_bff0000000000000;
    (this->BufferedLines).ArrayNum = iVar3 + 1;
    FBufferedLine::FBufferedLine
              ((FBufferedLine *)
               ((this->BufferedLines).AllocatorInstance.Data + (longlong)iVar3 * 0x28),param_1,
               param_3,param_2,dVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

