// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 6

// ~FIoHttpBatch @ 144587840

void __thiscall UE::FIoHttpBatch::~FIoHttpBatch(FIoHttpBatch *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->First != 0) {
    if (this->Last == 0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3293635725802602644>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\HttpIoDispatcher.cpp"
                         ,0x94,"Last != 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x58))(GHttpIoDispatcher.Object,this->First);
    this->Last = 0;
    this->First = 0;
  }
  return;
}

// Get @ 14458c310

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

FIoHttpRequest __thiscall
UE::FIoHttpBatch::Get
          (FIoHttpBatch *this,FName *param_1,FIoRelativeUrl *param_2,
          TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *param_3)

{
  FIoHttpRange local_18;
  undefined8 local_10;
  
  local_18.Min = 0;
  local_18.Max = 0;
  local_10._0_4_ = 0;
  local_10._4_4_ = 0;
  Get(this,param_1,param_2,(FIoHttpHeaders *)param_3,(FIoHttpOptions *)&local_18,
      (TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *)&FIoHttpOptions::Default);
  DestructItems<FAnsiString,int>((FAnsiString *)local_18,(int)local_10);
  if (local_18 != (FIoHttpRange)0x0) {
    FMemory::Free((void *)local_18);
  }
  return (FIoHttpRequest)(ulong64)param_1;
}

// Get @ 14458c380

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

FIoHttpRequest __thiscall
UE::FIoHttpBatch::Get
          (FIoHttpBatch *this,FName *param_1,FIoRelativeUrl *param_2,FIoHttpHeaders *param_3,
          TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *param_4)

{
  Get(this,param_1,param_2,param_3,(FIoHttpOptions *)param_4,
      (TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *)&FIoHttpOptions::Default);
  return (FIoHttpRequest)(ulong64)param_1;
}

// Get @ 14458c3c0

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

FIoHttpRequest __thiscall
UE::FIoHttpBatch::Get
          (FIoHttpBatch *this,FName *param_1,FIoRelativeUrl *param_2,FIoHttpHeaders *param_3,
          FIoHttpOptions *param_4,TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *param_5)

{
  code *pcVar1;
  bool bVar2;
  FIoHttpRequest FVar3;
  FName FVar4;
  undefined8 in_stack_00000038;
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Handle = (*pcVar1)();
      return (FIoHttpRequest)FVar3.Handle;
    }
  }
  FVar4 = (FName)(**(code **)((longlong)*GHttpIoDispatcher.Object + 0x30))
                           (GHttpIoDispatcher.Object,this,&this->Last,param_2,param_3,param_5,
                            param_4,in_stack_00000038,0);
  *param_1 = FVar4;
  return (FIoHttpRequest)(ulong64)param_1;
}

// Get @ 14458c490

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

FIoHttpRequest __thiscall
UE::FIoHttpBatch::Get
          (FIoHttpBatch *this,FName *param_1,FIoRelativeUrl *param_2,FIoHttpHeaders *param_3,
          FIoHttpOptions *param_4,FIoHash *param_5,
          TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *param_6)

{
  code *pcVar1;
  bool bVar2;
  FIoHttpRequest FVar3;
  FName FVar4;
  undefined8 in_stack_00000040;
  
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Handle = (*pcVar1)();
      return (FIoHttpRequest)FVar3.Handle;
    }
  }
  FVar4 = (FName)(**(code **)((longlong)*GHttpIoDispatcher.Object + 0x30))
                           (GHttpIoDispatcher.Object,this,&this->Last,param_2,param_3,param_5,
                            param_4,in_stack_00000040,param_6);
  *param_1 = FVar4;
  return (FIoHttpRequest)(ulong64)param_1;
}

// Issue @ 14458f280

void __thiscall UE::FIoHttpBatch::Issue(FIoHttpBatch *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->First != 0) {
    if (this->Last == 0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3293635725802602711>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemandCore\\Private\\HttpIoDispatcher.cpp"
                         ,0xd7,"Last != 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x38))(GHttpIoDispatcher.Object,this->First);
    this->Last = 0;
    this->First = 0;
  }
  return;
}

