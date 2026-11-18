// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 4

// FBuiltInHttpClientFSocketPool @ 148cb2f10

FBuiltInHttpClientFSocketPool * __thiscall
FBuiltInHttpClientFSocketPool::FBuiltInHttpClientFSocketPool
          (FBuiltInHttpClientFSocketPool *this,TSharedPtr<FInternetAddr,1> *param_1,
          ISocketSubsystem *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FBuiltInHttpClientFSocketPool__6B_;
  (this->ServerAddr).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ServerAddr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->SocketSubsystem = param_2;
  *(undefined8 *)&this->SocketPool = 0;
  *(undefined8 *)&this->SocketPool = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FBuiltInHttpClientFSocketPool @ 148cb5d40

void __thiscall
FBuiltInHttpClientFSocketPool::~FBuiltInHttpClientFSocketPool(FBuiltInHttpClientFSocketPool *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  this->_padding_ = (longlong)&___7FBuiltInHttpClientFSocketPool__6B_;
  while( true ) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&this->SocketPool);
    if (uVar2 == 0) break;
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    if (aVar1 == (atomic<void_*>)0x0) break;
    (*(code *)**(undefined8 **)aVar1)(aVar1,1);
  }
  FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1>::
  ~FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1>
            ((FLockFreePointerListLIFOBase<IBuiltInHttpClientSocket,64,1> *)&this->SocketPool);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ServerAddr).SharedReferenceCount.ReferenceController);
  return;
}

// AcquireSocket @ 148cba610

IBuiltInHttpClientSocket * __thiscall
FBuiltInHttpClientFSocketPool::AcquireSocket(FBuiltInHttpClientFSocketPool *this,float param_1)

{
  atomic<void_*> aVar1;
  ISocketSubsystem *pIVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  FNameEntryId FVar7;
  undefined8 uVar8;
  undefined4 extraout_var;
  IBuiltInHttpClientSocket IVar9;
  FInternetAddr *pFVar10;
  IBuiltInHttpClientSocket *pIVar11;
  undefined1 auVar12 [16];
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 local_res20 [8];
  FString local_38 [2];
  
  uVar6 = FLockFreePointerListLIFORoot<64,1>::Pop
                    ((FLockFreePointerListLIFORoot<64,1> *)&this->SocketPool);
  if (uVar6 != 0) {
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe][uVar6 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar6);
    if (aVar1 != (atomic<void_*>)0x0) {
      return (IBuiltInHttpClientSocket *)aVar1;
    }
  }
  pFVar10 = (this->ServerAddr).Object;
  if (pFVar10 != (FInternetAddr *)0x0) {
    pIVar2 = this->SocketSubsystem;
    pcVar3 = *(code **)(pIVar2->_padding_ + 0x18);
    uVar8 = (**(code **)((longlong)*pFVar10 + 0xa8))(pFVar10,local_res20);
    ::FString::FString(local_38,L"StorageServer");
    FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
    local_res18 = *(undefined4 *)CONCAT44(extraout_var,FVar7.Value);
    local_res1c = 0;
    IVar9 = (IBuiltInHttpClientSocket)(*pcVar3)(pIVar2,&local_res18,local_38,uVar8);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)IVar9 + 0xb0))(IVar9,1);
    lVar4 = *(longlong *)IVar9;
    if (param_1 <= 0.0) {
      pFVar10 = TSharedPtr<FInternetAddr,1>::operator*<FInternetAddr>(&this->ServerAddr);
      cVar5 = (**(code **)(lVar4 + 0x28))(IVar9,pFVar10);
      if (cVar5 != '\0') {
        pIVar11 = ::operator_new(0x10);
        if (pIVar11 == (IBuiltInHttpClientSocket *)0x0) {
          return (IBuiltInHttpClientSocket *)0x0;
        }
        pIVar11[1] = IVar9;
        *pIVar11 = (IBuiltInHttpClientSocket)&___7FBuiltInHttpClientFSocket__6B_;
        return pIVar11;
      }
    }
    else {
      (**(code **)(lVar4 + 0xa0))(IVar9,1);
      pcVar3 = *(code **)(*(longlong *)IVar9 + 0x28);
      pFVar10 = TSharedPtr<FInternetAddr,1>::operator*<FInternetAddr>(&this->ServerAddr);
      cVar5 = (*pcVar3)(IVar9,pFVar10);
      if (cVar5 != '\0') {
        auVar12._0_8_ = (double)(param_1 * __real_4b189680 + __real_3f000000);
        auVar12._8_8_ = 0;
        auVar12 = roundpd(auVar12,auVar12,1);
        cVar5 = (**(code **)(*(longlong *)IVar9 + 0x80))(IVar9,1,(longlong)auVar12._0_8_);
        if (cVar5 != '\0') {
          pIVar11 = ::operator_new(0x10);
          if (pIVar11 == (IBuiltInHttpClientSocket *)0x0) {
            pIVar11 = (IBuiltInHttpClientSocket *)0x0;
          }
          else {
            pIVar11[1] = IVar9;
            *pIVar11 = (IBuiltInHttpClientSocket)&___7FBuiltInHttpClientFSocket__6B_;
          }
          (**(code **)(*(longlong *)IVar9 + 0xa0))(IVar9,0);
          return pIVar11;
        }
      }
      (**(code **)(*(longlong *)IVar9 + 0xa0))(IVar9,0);
    }
    if (IVar9 != (IBuiltInHttpClientSocket)0x0) {
      (*(code *)**(undefined8 **)IVar9)(IVar9,1);
    }
  }
  return (IBuiltInHttpClientSocket *)0x0;
}

// ReleaseSocket @ 148cd9830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBuiltInHttpClientFSocketPool::ReleaseSocket
          (FBuiltInHttpClientFSocketPool *this,IBuiltInHttpClientSocket *param_1,bool param_2)

{
  char cVar1;
  longlong local_res20;
  
  local_res20 = 0;
  if (param_2) {
    cVar1 = (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_res20);
    if (cVar1 == '\0') {
      TLockFreePointerListLIFOPad<IBuiltInHttpClientSocket,64>::Push
                ((TLockFreePointerListLIFOPad<IBuiltInHttpClientSocket,64> *)&this->SocketPool,
                 param_1);
      return;
    }
    if (local_res20 != 0) {
      UE::Logging::Private::BasicFatalLog
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection);
    }
  }
  if (param_1 != (IBuiltInHttpClientSocket *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}

