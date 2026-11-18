// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FOverridableTextPortPropertyPathScope @ 1420e9f00

FOverridableTextPortPropertyPathScope * __thiscall
FOverridableTextPortPropertyPathScope::FOverridableTextPortPropertyPathScope
          (FOverridableTextPortPropertyPathScope *this,FProperty *param_1,int param_2,
          EPropertyVisitorInfoType param_3)

{
  FPropertyVisitorPath *pFVar1;
  longlong lVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  FOverridableTextPortPropertyPathScope *pFVar6;
  FPropertyVisitorPath *this_00;
  ulonglong uVar7;
  FPropertyVisitorInfo local_48;
  
  pvVar4 = ThreadLocalStoragePointer;
  pFVar1 = &this->DefaultPath;
  uVar7 = (ulonglong)_tls_index;
  this->Property = (FProperty *)0x0;
  (pFVar1->Path).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultPath).Path.ArrayNum = 0;
  (this->DefaultPath).Path.ArrayMax = 0;
  lVar2 = *(longlong *)((longlong)pvVar4 + uVar7 * 8);
  *(undefined8 *)&(this->DefaultPath).OnPushFunc = 0;
  *(undefined8 *)&(this->DefaultPath).OnPushFunc.field_0x28 = 0;
  *(undefined8 *)&(this->DefaultPath).OnPopFunc = 0;
  *(undefined8 *)&(this->DefaultPath).OnPopFunc.field_0x28 = 0;
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(char *)(lVar2 + 0xc98) != '\0') {
    if (param_1 == (FProperty *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                         ,0xf3,L"Expecting a valid property ptr");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FOverridableTextPortPropertyPathScope *)(*pcVar3)();
        return pFVar6;
      }
    }
    pvVar4 = ThreadLocalStoragePointer;
    this->Property = param_1;
    lVar2 = *(longlong *)((longlong)pvVar4 + uVar7 * 8);
    this_00 = *(FPropertyVisitorPath **)(lVar2 + 0xca8);
    if (this_00 == (FPropertyVisitorPath *)0x0) {
      *(FPropertyVisitorPath **)(lVar2 + 0xca8) = pFVar1;
      this_00 = pFVar1;
    }
    local_48.ParentStructType = (UStruct *)0x0;
    local_48.bContainsInnerProperties = false;
    local_48.Property = param_1;
    local_48.Index = param_2;
    local_48.PropertyInfo = param_3;
    FPropertyVisitorPath::Push(this_00,&local_48);
  }
  return this;
}

// ~FOverridableTextPortPropertyPathScope @ 1420ec410

void __thiscall
FOverridableTextPortPropertyPathScope::~FOverridableTextPortPropertyPathScope
          (FOverridableTextPortPropertyPathScope *this)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FProperty *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (this->Property != (FProperty *)0x0) {
    plVar3 = *(longlong **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xca8);
    if ((plVar3 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Path",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                           ,0x107,L"Expecting a valid path "), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((int)plVar3[1] == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Path->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                           ,0x108,L"Expecting at least one property in the path"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((int)plVar3[1] < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (int)plVar3[1];
    puVar1 = (undefined8 *)(*plVar3 + -0x18 + (longlong)iVar2 * 0x18);
    local_28 = (FProperty *)*puVar1;
    uStack_20 = puVar1[1];
    local_18 = *(undefined8 *)(*plVar3 + -8 + (longlong)iVar2 * 0x18);
    *(int *)(plVar3 + 1) = iVar2 + -1;
    if ((void *)plVar3[8] != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable((void *)plVar3[8]);
      pcVar5 = (code *)plVar3[8];
      plVar8 = plVar3 + 10;
      if ((longlong *)plVar3[0xd] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar3[0xd];
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar5)(uVar7,&local_28);
    }
    if ((local_28 != this->Property) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Path->Pop().Property == Property",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                           ,0x109,
                           L"Expecting at the top property to match the one we pushed in the constructor"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((int)plVar3[1] == 0) {
      *(undefined8 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xca8) = 0;
    }
  }
  if (*(longlong *)&(this->DefaultPath).OnPopFunc != 0) {
    plVar3 = *(longlong **)&(this->DefaultPath).OnPopFunc.field_0x28;
    plVar8 = (longlong *)&(this->DefaultPath).OnPopFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar8 = plVar3;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&(this->DefaultPath).OnPushFunc != 0) {
    plVar3 = *(longlong **)&(this->DefaultPath).OnPushFunc.field_0x28;
    plVar8 = (longlong *)&(this->DefaultPath).OnPushFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar8 = plVar3;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pFVar4 = (this->DefaultPath).Path.AllocatorInstance.Data;
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar4);
  return;
}

