// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 17

// StaticStruct @ 14940a520

UScriptStruct * __cdecl FNiagaraVariant::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariant.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVariant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariant,(UObject *)pUVar1,
                         L"NiagaraVariant");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraVariant.OuterSingleton;
}

// FNiagaraVariant @ 149427c50

FNiagaraVariant * __thiscall
FNiagaraVariant::FNiagaraVariant
          (FNiagaraVariant *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->DataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterface *)0x0;
  this->CurrentMode = Bytes;
  (this->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bytes).ArrayNum = 0;
  (this->Bytes).ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->Bytes,param_1);
  (this->DataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterface *)0x0;
  (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// FNiagaraVariant @ 149427ca0

FNiagaraVariant * __thiscall
FNiagaraVariant::FNiagaraVariant(FNiagaraVariant *this,UNiagaraDataInterface *param_1)

{
  this->CurrentMode = DataInterface;
  (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->DataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterface *)0x0;
  (this->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bytes).ArrayNum = 0;
  (this->Bytes).ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraDataInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->DataInterface).field0_0x0.DebugPtr = param_1;
  (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// FNiagaraVariant @ 149427d10

FNiagaraVariant * __thiscall
FNiagaraVariant::FNiagaraVariant(FNiagaraVariant *this,void *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraVariant *pFVar6;
  
  (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  piVar1 = &(this->Bytes).ArrayNum;
  (this->DataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterface *)0x0;
  piVar2 = &(this->Bytes).ArrayMax;
  (this->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->CurrentMode = Bytes;
  if ((param_1 == (void *)0x0) && (param_2 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNiagaraVariant *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2,&(this->Bytes).AllocatorInstance,piVar1,piVar2);
  if (param_2 != 0) {
    memcpy((this->Bytes).AllocatorInstance.Data + iVar5,param_1,(longlong)param_2);
  }
  (this->DataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterface *)0x0;
  (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// FNiagaraVariant @ 149427e10

FNiagaraVariant * __thiscall
FNiagaraVariant::FNiagaraVariant(FNiagaraVariant *this,TObjectPtr<UObject> param_1)

{
  this->CurrentMode = Object;
  (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->DataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterface *)0x0;
  (this->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bytes).ArrayNum = 0;
  (this->Bytes).ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
                    /* WARNING: Load size is inaccurate */
  (this->Object).field0_0x0 = *param_1.field0_0x0;
  (this->DataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterface *)0x0;
  return this;
}

// FNiagaraVariant @ 149427e80

FNiagaraVariant * __thiscall FNiagaraVariant::FNiagaraVariant(FNiagaraVariant *this)

{
  (this->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bytes).ArrayNum = 0;
  (this->Bytes).ArrayMax = 0;
  this->CurrentMode = None;
  (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->DataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterface *)0x0;
  return this;
}

// operator== @ 14942d360

bool __thiscall FNiagaraVariant::operator==(FNiagaraVariant *this,FNiagaraVariant *param_1)

{
  ENiagaraVariantMode EVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  int iVar3;
  UNiagaraDataInterface *pUVar4;
  UNiagaraDataInterface *pUVar5;
  
  EVar1 = this->CurrentMode;
  if (EVar1 == param_1->CurrentMode) {
    if (EVar1 == None) {
      return true;
    }
    if (EVar1 == Object) {
      return (this->Object).field0_0x0.DebugPtr == (param_1->Object).field0_0x0.DebugPtr;
    }
    if (EVar1 == DataInterface) {
      pUVar4 = GetDataInterface(this);
      UNRECOVERED_JUMPTABLE = *(code **)(pUVar4->_padding_ + 0x338);
      pUVar5 = GetDataInterface(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014942d3f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(pUVar4,pUVar5);
      return (bool)uVar2;
    }
    if (EVar1 == Bytes) {
      iVar3 = (this->Bytes).ArrayNum;
      if (iVar3 == (param_1->Bytes).ArrayNum) {
        if ((iVar3 != 0) &&
           (iVar3 = memcmp((this->Bytes).AllocatorInstance.Data,
                           (param_1->Bytes).AllocatorInstance.Data,(longlong)iVar3), iVar3 != 0)) {
          return false;
        }
        return true;
      }
    }
  }
  return false;
}

// operator!= @ 14942d420

bool __thiscall FNiagaraVariant::operator!=(FNiagaraVariant *this,FNiagaraVariant *param_1)

{
  ENiagaraVariantMode EVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  UNiagaraDataInterface *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  EVar1 = this->CurrentMode;
  if (EVar1 == param_1->CurrentMode) {
    if (EVar1 == None) {
      return false;
    }
    if (EVar1 == Object) {
      return (this->Object).field0_0x0.DebugPtr != (param_1->Object).field0_0x0.DebugPtr;
    }
    if (EVar1 == DataInterface) {
      pUVar5 = GetDataInterface(this);
      pcVar2 = *(code **)(pUVar5->_padding_ + 0x338);
      pUVar6 = GetDataInterface(param_1);
      cVar3 = (*pcVar2)(pUVar5,pUVar6);
      return cVar3 == '\0';
    }
    if (EVar1 == Bytes) {
      iVar4 = (this->Bytes).ArrayNum;
      if (iVar4 == (param_1->Bytes).ArrayNum) {
        if ((iVar4 != 0) &&
           (iVar4 = memcmp((this->Bytes).AllocatorInstance.Data,
                           (param_1->Bytes).AllocatorInstance.Data,(longlong)iVar4), iVar4 != 0)) {
          return true;
        }
        return false;
      }
    }
  }
  return true;
}

// AllocateBytes @ 149430eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FNiagaraVariant::AllocateBytes(FNiagaraVariant *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVariant.cpp"
                       ,0x4c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->CurrentMode != None) && (this->CurrentMode != Bytes)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8543639212530859955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVariant.cpp"
                       ,0x4d,
                       "CurrentMode == ENiagaraVariantMode::None || CurrentMode == ENiagaraVariantMode::Bytes"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->Bytes,param_1,Default);
  return;
}

// AppendCompileHash @ 149431200

bool __thiscall
FNiagaraVariant::AppendCompileHash(FNiagaraVariant *this,FNiagaraCompileHashVisitor *param_1)

{
  UObject *pUVar1;
  UNiagaraDataInterface *pUVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  undefined1 local_res8 [8];
  
  pUVar1 = (this->Object).field0_0x0.DebugPtr;
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  FVar5 = FVar4;
  if (pUVar1 != (UObject *)0x0) {
    FVar5.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    FVar5.Number = *(uint *)&pUVar1->field_0x1c;
  }
  bVar3 = FNiagaraCompileHashVisitor::UpdateName(param_1,L"NiagaraVariant.Object",FVar5);
  if (bVar3) {
    pUVar2 = (this->DataInterface).field0_0x0.DebugPtr;
    if (pUVar2 != (UNiagaraDataInterface *)0x0) {
      FVar4 = (FName)pUVar2->_padding_;
    }
    bVar3 = FNiagaraCompileHashVisitor::UpdateName(param_1,L"NiagaraVariant.DataInterface",FVar4);
    if (bVar3) {
      FSHA1::Update(param_1->HashState,(uchar *)(this->Bytes).AllocatorInstance.Data,
                    (longlong)(this->Bytes).ArrayNum);
      local_res8[0] = (undefined1)this->CurrentMode;
      FSHA1::Update(param_1->HashState,local_res8,1);
      return true;
    }
  }
  return false;
}

// GetBytes @ 149448c10

uchar * __thiscall FNiagaraVariant::GetBytes(FNiagaraVariant *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (this->CurrentMode == Bytes) {
    return (uchar *)(this->Bytes).AllocatorInstance.Data;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8543639212530859939>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVariant.cpp"
                     ,0x5d,"CurrentMode == ENiagaraVariantMode::Bytes");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    puVar3 = (uchar *)(*pcVar1)();
    return puVar3;
  }
  return (uchar *)(this->Bytes).AllocatorInstance.Data;
}

// GetDataInterface @ 149449b40

UNiagaraDataInterface * __thiscall FNiagaraVariant::GetDataInterface(FNiagaraVariant *this)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraDataInterface *pUVar3;
  
  if (this->CurrentMode == DataInterface) {
    return (this->DataInterface).field0_0x0.DebugPtr;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8543639212530859970>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVariant.cpp"
                     ,0x3e,"CurrentMode == ENiagaraVariantMode::DataInterface");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UNiagaraDataInterface *)(*pcVar1)();
    return pUVar3;
  }
  return (this->DataInterface).field0_0x0.DebugPtr;
}

// GetNumBytes @ 14944a840

int __thiscall FNiagaraVariant::GetNumBytes(FNiagaraVariant *this)

{
  return (this->Bytes).ArrayNum;
}

// GetUObject @ 14944f390

TObjectPtr<UObject> __thiscall FNiagaraVariant::GetUObject(FNiagaraVariant *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  TObjectPtr<UObject> TVar4;
  TObjectPtr<UObject>_u_0 in_RDX;
  
  if (this->CurrentMode != Object) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8543639212530859984>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVariant.cpp"
                       ,0x30,"CurrentMode == ENiagaraVariantMode::Object");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar2)();
      return (TObjectPtr<UObject>)TVar4.field0_0x0;
    }
  }
  pUVar1 = (this->Object).field0_0x0.DebugPtr;
  *(UObject **)in_RDX.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UObject>)in_RDX;
}

// SetBytes @ 149465230

void __thiscall FNiagaraVariant::SetBytes(FNiagaraVariant *this,uchar *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVariant.cpp"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->CurrentMode != None) && (this->CurrentMode != Bytes)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8543639212530859948>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVariant.cpp"
                       ,0x54,
                       "CurrentMode == ENiagaraVariantMode::None || CurrentMode == ENiagaraVariantMode::Bytes"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->CurrentMode = Bytes;
  pTVar6 = &this->Bytes;
  if (-1 < param_2) {
    piVar1 = &(this->Bytes).ArrayMax;
    piVar2 = &(this->Bytes).ArrayNum;
    *piVar2 = 0;
    if ((this->Bytes).ArrayMax < param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_2,&pTVar6->AllocatorInstance,0,piVar1);
    }
    if ((param_1 == (uchar *)0x0) && (param_2 != 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_2,&pTVar6->AllocatorInstance,piVar2,piVar1);
    if (param_2 != 0) {
      memcpy((pTVar6->AllocatorInstance).Data + iVar5,param_1,(longlong)param_2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
}

// SetDataInterface @ 1494653a0

void __thiscall
FNiagaraVariant::SetDataInterface(FNiagaraVariant *this,UNiagaraDataInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->CurrentMode != None) && (this->CurrentMode != DataInterface)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8543639212530859964>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVariant.cpp"
                       ,0x44,
                       "CurrentMode == ENiagaraVariantMode::None || CurrentMode == ENiagaraVariantMode::DataInterface"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentMode = DataInterface;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraDataInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->DataInterface).field0_0x0.DebugPtr = param_1;
  return;
}

// SetUObject @ 149468520

void __thiscall FNiagaraVariant::SetUObject(FNiagaraVariant *this,TObjectPtr<UObject> param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->CurrentMode != None) && (this->CurrentMode != Object)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8543639212530859978>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVariant.cpp"
                       ,0x36,
                       "CurrentMode == ENiagaraVariantMode::None || CurrentMode == ENiagaraVariantMode::Object"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentMode = Object;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (*(UObject **)param_1.field0_0x0 == (UObject *)0x0) {
      (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
      return;
    }
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
                    /* WARNING: Load size is inaccurate */
  (this->Object).field0_0x0 = *param_1.field0_0x0;
  return;
}

