// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 4

// ~FAudioEncoder @ 148d01190

void __thiscall AVEncoder::FAudioEncoder::~FAudioEncoder(FAudioEncoder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAudioEncoder_AVEncoder__6B_;
  pFVar1 = (this->Listeners).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000148d011ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ListenersMutex);
  return;
}

// OnEncodedAudioFrame @ 148d0fd20

void __thiscall
AVEncoder::FAudioEncoder::OnEncodedAudioFrame(FAudioEncoder *this,FMediaPacket *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ListenersMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = (this->Listeners).AllocatorInstance.Data;
    iVar2 = (this->Listeners).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Listeners).ArrayNum != iVar2) {
        `TCheckedPointerIterator<AVEncoder::IAudioEncoderListener_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      (**(code **)**(undefined8 **)pFVar3)(*(undefined8 **)pFVar3,param_1);
      pFVar3 = pFVar3 + 8;
    }
                    /* WARNING: Could not recover jumptable at 0x000148d0fd9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterListener @ 148d11530

void __thiscall
AVEncoder::FAudioEncoder::RegisterListener(FAudioEncoder *this,IAudioEncoderListener *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  IAudioEncoderListener *local_res8;
  
  lpCriticalSection = &this->ListenersMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->Listeners).AllocatorInstance.Data;
  pFVar4 = pFVar1;
  do {
    if (pFVar4 == pFVar1 + (longlong)(this->Listeners).ArrayNum * 8) {
LAB_148d115b2:
      local_res8 = param_1;
      TArray<AVEncoder::IAudioEncoderListener_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<AVEncoder::IAudioEncoderListener_*>(&this->Listeners,&local_res8);
                    /* WARNING: Could not recover jumptable at 0x000148d115d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if (*(IAudioEncoderListener **)pFVar4 == param_1) {
      if (((int)((longlong)pFVar4 - (longlong)pFVar1 >> 3) != -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Listeners.Find(&Listener) == INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\AudioEncoder.cpp"
                             ,0xd,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_148d115b2;
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// UnregisterListener @ 148d15540

void __thiscall
AVEncoder::FAudioEncoder::UnregisterListener(FAudioEncoder *this,IAudioEncoderListener *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  IAudioEncoderListener *pIVar9;
  IAudioEncoderListener *local_48 [2];
  
  lpCriticalSection = &this->ListenersMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->Listeners).AllocatorInstance.Data;
  local_48[0] = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->Listeners).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Listeners).ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (this->Listeners).AllocatorInstance.Data;
    iVar8 = 0;
    bVar4 = *(IAudioEncoderListener **)pFVar2 != local_48[0];
    lVar7 = 0;
    pIVar9 = local_48[0];
    iVar5 = 0;
    do {
      iVar6 = iVar5;
      do {
        lVar7 = lVar7 + 1;
        iVar6 = iVar6 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar4 == (*(IAudioEncoderListener **)(pFVar2 + lVar7 * 8) != pIVar9));
      if (bVar4 != false) {
        if (iVar8 != iVar5) {
          memmove(pFVar2 + (longlong)iVar8 * 8,pFVar2 + (longlong)iVar5 * 8,
                  (longlong)(iVar6 - iVar5) << 3);
          pIVar9 = local_48[0];
        }
        iVar8 = iVar8 + (iVar6 - iVar5);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar5 = iVar6;
    } while (lVar7 < iVar1);
    (this->Listeners).ArrayNum = iVar8;
    if (iVar1 - iVar8 == 1) goto LAB_148d156f9;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Count == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\AudioEncoder.cpp"
                     ,0x17,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_148d156f9:
                    /* WARNING: Could not recover jumptable at 0x000148d15707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

