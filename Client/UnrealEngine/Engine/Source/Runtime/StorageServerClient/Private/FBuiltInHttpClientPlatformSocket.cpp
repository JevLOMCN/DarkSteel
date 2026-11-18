// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 6

// FBuiltInHttpClientPlatformSocket @ 148cb2f70

FBuiltInHttpClientPlatformSocket * __thiscall
FBuiltInHttpClientPlatformSocket::FBuiltInHttpClientPlatformSocket
          (FBuiltInHttpClientPlatformSocket *this,IPlatformHostCommunication *param_1,
          TSharedPtr<IPlatformHostSocket,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  uchar *puVar3;
  ulonglong uVar4;
  
  this->Communication = param_1;
  this->_padding_ = (longlong)&___7FBuiltInHttpClientPlatformSocket__6B_;
  (this->Socket).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Socket).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ConnectionBuffer).Allocation = (uchar *)0x0;
  for (lVar2 = 0x3f; 0x1ffffUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  (this->ConnectionBuffer).Size = 0;
  (this->ConnectionBuffer).Head = 0;
  (this->ConnectionBuffer).Tail = 0;
  uVar4 = (ulonglong)((1 << ((byte)lVar2 & 0x1f)) - 1);
  (this->ConnectionBuffer).CapacityMask = uVar4;
  puVar3 = operator_new__(uVar4 + 1);
  (this->ConnectionBuffer).Allocation = puVar3;
  this->ProtocolNumber = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FBuiltInHttpClientPlatformSocket @ 148cb5de0

void __thiscall
FBuiltInHttpClientPlatformSocket::~FBuiltInHttpClientPlatformSocket
          (FBuiltInHttpClientPlatformSocket *this)

{
  IPlatformHostCommunication *pIVar1;
  code *pcVar2;
  IPlatformHostSocket *local_18;
  TReferenceControllerBase<1> *local_10;
  
  this->_padding_ = (longlong)&___7FBuiltInHttpClientPlatformSocket__6B_;
  pIVar1 = this->Communication;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
  local_18 = (this->Socket).Object;
  local_10 = (this->Socket).SharedReferenceCount.ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_18);
  operator_delete__((this->ConnectionBuffer).Allocation);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Socket).SharedReferenceCount.ReferenceController);
  return;
}

// Close @ 148cbf230

void __thiscall FBuiltInHttpClientPlatformSocket::Close(FBuiltInHttpClientPlatformSocket *this)

{
  IPlatformHostCommunication *pIVar1;
  code *pcVar2;
  IPlatformHostSocket *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = this->Communication;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
  local_18 = (this->Socket).Object;
  local_10 = (this->Socket).SharedReferenceCount.ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_18);
  return;
}

// HasPendingData @ 148cc9ab0

bool __thiscall
FBuiltInHttpClientPlatformSocket::HasPendingData
          (FBuiltInHttpClientPlatformSocket *this,ulong64 *param_1)

{
  ulong64 uVar1;
  
  uVar1 = (this->ConnectionBuffer).Size;
  *param_1 = uVar1;
  return uVar1 != 0;
}

// Recv @ 148cd7d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBuiltInHttpClientPlatformSocket::Recv
          (FBuiltInHttpClientPlatformSocket *this,uchar *param_1,ulong64 param_2,ulong64 *param_3,
          Type param_4)

{
  TSharedPtr<IPlatformHostSocket,1> *this_00;
  FConnectionCircularBuffer *this_01;
  ulong64 *puVar1;
  ulong64 uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  IPlatformHostSocket *pIVar7;
  uchar *_Dst;
  undefined1 *_Src;
  ulonglong uVar8;
  ulonglong uVar9;
  size_t sVar10;
  undefined1 auStack_478 [32];
  undefined1 local_458;
  undefined1 local_448;
  undefined1 auStack_447 [1023];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_478;
  this_00 = &this->Socket;
  if ((this_00->Object == (IPlatformHostSocket *)0x0) ||
     (cVar4 = (**(code **)((longlong)*this_00->Object + 0x18))(), cVar4 != '\x02')) {
LAB_148cd7f8f:
    bVar5 = false;
  }
  else {
    this_01 = &this->ConnectionBuffer;
    if (((this->ConnectionBuffer).CapacityMask + 1 < param_2) &&
       (3 < (byte)LogStorageServerPlatformBackend._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformBackend);
    }
    *param_3 = 0;
    if ((this->ConnectionBuffer).Size == 0) {
      pIVar7 = TSharedPtr<IPlatformHostSocket,1>::operator->(this_00);
      local_458 = 0;
      cVar4 = (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&local_448,0x400,param_3);
      if (cVar4 != '\0') goto LAB_148cd7f8f;
      uVar8 = *param_3;
      uVar9 = (this->ConnectionBuffer).CapacityMask + 1;
      if (uVar9 - (this->ConnectionBuffer).Size < uVar8) {
        if (3 < (byte)LogStorageServerPlatformBackend._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformBackend);
        }
      }
      else {
        uVar2 = (this->ConnectionBuffer).Head;
        _Dst = this_01->Allocation + uVar2;
        if (uVar9 < uVar2 + uVar8) {
          sVar10 = uVar9 - uVar2;
          memcpy(_Dst,&local_448,sVar10);
          _Dst = this_01->Allocation;
          _Src = auStack_447 + (sVar10 - 1);
          sVar10 = uVar8 - sVar10;
        }
        else {
          _Src = &local_448;
          sVar10 = uVar8;
        }
        memcpy(_Dst,_Src,sVar10);
        puVar1 = &(this->ConnectionBuffer).Size;
        *puVar1 = *puVar1 + uVar8;
        (this->ConnectionBuffer).Head =
             (this->ConnectionBuffer).Head + uVar8 & (this->ConnectionBuffer).CapacityMask;
      }
    }
    if (param_4 == Peek) {
      FConnectionCircularBuffer::Peek(this_01,param_1,param_2,param_3);
      bVar5 = true;
    }
    else if (param_4 == WaitAll) {
      FConnectionCircularBuffer::Consume(this_01,param_1,param_2,param_3);
      uVar8 = *param_3;
      if (uVar8 < param_2) {
        do {
          if ((this_00->Object == (IPlatformHostSocket *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          local_458 = 1;
          cVar4 = (**(code **)((longlong)*this_00->Object + 8))
                            (this_00->Object,param_1 + uVar8,param_2 - uVar8,param_3);
          if (cVar4 != '\0') goto LAB_148cd7f8f;
          uVar8 = uVar8 + *param_3;
          if (param_2 < uVar8) {
            if (3 < (byte)LogStorageServerPlatformBackend._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformBackend);
            }
            goto LAB_148cd7f6f;
          }
        } while (uVar8 < param_2);
        *param_3 = uVar8;
        bVar5 = true;
      }
      else {
LAB_148cd7f6f:
        *param_3 = uVar8;
        bVar5 = true;
      }
    }
    else {
      if (param_4 == None) {
        FConnectionCircularBuffer::Consume(this_01,param_1,param_2,param_3);
      }
      bVar5 = true;
    }
  }
  return bVar5;
}

// Send @ 148cdc550

bool __thiscall
FBuiltInHttpClientPlatformSocket::Send
          (FBuiltInHttpClientPlatformSocket *this,uchar *param_1,ulong64 param_2)

{
  IPlatformHostSocket *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pIVar1 = (this->Socket).Object;
  if (pIVar1 != (IPlatformHostSocket *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x18))();
    if (cVar3 == '\x02') {
      if ((this->Socket).Object == (IPlatformHostSocket *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->Socket).Object;
      cVar3 = (**(code **)*pIVar1)(pIVar1,param_1,param_2);
      return cVar3 == '\0';
    }
  }
  return false;
}

