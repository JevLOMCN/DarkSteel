// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 9

// FStateTreeSharedEvent @ 14d4b1d90

FStateTreeSharedEvent * __thiscall
FStateTreeSharedEvent::FStateTreeSharedEvent
          (FStateTreeSharedEvent *this,FStateTreeSharedEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Event).Object = (param_1->Event).Object;
  pTVar1 = (param_1->Event).SharedReferenceCount.ReferenceController;
  (this->Event).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FStateTreeSharedEvent @ 14d4b3bd0

void __thiscall FStateTreeSharedEvent::~FStateTreeSharedEvent(FStateTreeSharedEvent *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Event).SharedReferenceCount.ReferenceController);
  return;
}

// StaticStruct @ 14d4dbc40

UScriptStruct * __cdecl FStateTreeSharedEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSharedEvent,(UObject *)pUVar1,
                         L"StateTreeSharedEvent");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeSharedEvent.OuterSingleton;
}

// FStateTreeSharedEvent @ 14d4ebd10

FStateTreeSharedEvent * __thiscall
FStateTreeSharedEvent::FStateTreeSharedEvent
          (FStateTreeSharedEvent *this,FStateTreeSharedEvent *param_1)

{
  (this->Event).Object = (param_1->Event).Object;
  (this->Event).SharedReferenceCount.ReferenceController =
       (param_1->Event).SharedReferenceCount.ReferenceController;
  (param_1->Event).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Event).Object = (FStateTreeEvent *)0x0;
  return this;
}

// FStateTreeSharedEvent @ 14d4ebd40

FStateTreeSharedEvent * __thiscall
FStateTreeSharedEvent::FStateTreeSharedEvent(FStateTreeSharedEvent *this,FStateTreeEvent *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FStateTreeSharedEvent *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pTVar4 = ::operator_new(0x30);
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    (this->Event).Object = (FStateTreeEvent *)0x10;
    (this->Event).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFStateTreeEvent___00_SharedPointerInternals__6B_;
    pTVar4[1]._padding_ = (longlong)(param_1->Tag).TagName;
    *(undefined8 *)&pTVar4[1].SharedReferenceCount.field_0x0 = 0;
    pTVar4[2]._padding_ = 0;
    FInstancedStruct::InitializeAs
              ((FInstancedStruct *)&pTVar4[1].SharedReferenceCount,
               (param_1->Payload).ScriptStruct.field0_0x0.DebugPtr,(param_1->Payload).StructMemory);
    uVar2 = (param_1->Origin).Number;
    pTVar4[2].SharedReferenceCount = (atomic<int>)(param_1->Origin).ComparisonIndex.Value;
    pTVar4[2].WeakReferenceCount = (atomic<int>)uVar2;
    if ((FStateTreeEvent *)(pTVar4 + 1) == (FStateTreeEvent *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FStateTreeSharedEvent *)(*pcVar1)();
        return pFVar5;
      }
    }
    (this->Event).Object = (FStateTreeEvent *)(pTVar4 + 1);
    (this->Event).SharedReferenceCount.ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// FStateTreeSharedEvent @ 14d4ebe30

FStateTreeSharedEvent * __thiscall
FStateTreeSharedEvent::FStateTreeSharedEvent
          (FStateTreeSharedEvent *this,FGameplayTag param_1,FConstStructView *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FStateTreeSharedEvent *pFVar4;
  FConstStructView local_18;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Event).Object = (FStateTreeEvent *)0x10;
    (this->Event).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_18.ScriptStruct = param_2->ScriptStruct;
    local_18.StructMemory = param_2->StructMemory;
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFStateTreeEvent___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)param_1.TagName;
    FInstancedStruct::FInstancedStruct
              ((FInstancedStruct *)&pTVar3[1].SharedReferenceCount,&local_18);
    pTVar3[2].SharedReferenceCount = (atomic<int>)param_3.ComparisonIndex.Value;
    pTVar3[2].WeakReferenceCount = (atomic<int>)param_3.Number;
    if ((FStateTreeEvent *)(pTVar3 + 1) == (FStateTreeEvent *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FStateTreeSharedEvent *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->Event).Object = (FStateTreeEvent *)(pTVar3 + 1);
    (this->Event).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// FStateTreeSharedEvent @ 14d4ebf20

FStateTreeSharedEvent * __thiscall
FStateTreeSharedEvent::FStateTreeSharedEvent(FStateTreeSharedEvent *this)

{
  (this->Event).Object = (FStateTreeEvent *)0x0;
  (this->Event).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator* @ 14d4edb40

FStateTreeEvent * __thiscall FStateTreeSharedEvent::operator*(FStateTreeSharedEvent *this)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeEvent *pFVar3;
  
  if ((this->Event).Object != (FStateTreeEvent *)0x0) {
    return (this->Event).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Event.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeEvents.h"
                     ,0x77,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStateTreeEvent *)(*pcVar1)();
    return pFVar3;
  }
  return (this->Event).Object;
}

// AddStructReferencedObjects @ 14d4ef790

void __thiscall
FStateTreeSharedEvent::AddStructReferencedObjects
          (FStateTreeSharedEvent *this,FReferenceCollector *param_1)

{
  FStateTreeEvent *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = (this->Event).Object;
  if (pFVar1 != (FStateTreeEvent *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeEvent.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeEvent.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEvent,(UObject *)pUVar2,
                           L"StateTreeEvent");
    }
    FReferenceCollector::AddPropertyReferencesWithStructARO
              (param_1,Z_Registration_Info_UScriptStruct_FStateTreeEvent.OuterSingleton,pFVar1,
               (UObject *)0x0);
  }
  return;
}

