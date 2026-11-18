// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// OnAnalysisBegin @ 14d3e95a0

void __thiscall
TraceServices::FStringsAnalyzer::OnAnalysisBegin(FStringsAnalyzer *this,FOnAnalysisContext *param_1)

{
  (**(code **)*param_1->InterfaceBuilder)(param_1->InterfaceBuilder,0,"Strings","StaticString",0);
  (**(code **)*param_1->InterfaceBuilder)(param_1->InterfaceBuilder,1,"Strings","FName",0);
  return;
}

// OnEvent @ 14d3f7740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FStringsAnalyzer::OnEvent
          (FStringsAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FEventData *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  IDefinitionProvider *pIVar5;
  undefined8 uVar6;
  FString *pFVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  ulonglong uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  uint local_110;
  uint local_10c;
  ulong64 local_108;
  uint local_100 [2];
  TStringView<wchar_t> local_f8;
  TStringView<char> local_e8;
  FScriptContainerElement *local_d8;
  int local_d0;
  FString local_c8;
  FString local_b8;
  code *local_a8 [2];
  undefined **local_98;
  code *local_90;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((param_1 == 0) || (param_1 == 1)) {
    this_00 = param_3->EventData;
    pIVar5 = EditDefinitionProvider(this->Session);
    if ((pIVar5 == (IDefinitionProvider *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefinitionProvider != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\StringsAnalyzer.cpp"
                           ,0x20,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pFVar12 = (FScriptContainerElement *)0x0;
    local_f8.DataPtr = (wchar_t *)0x0;
    iVar11 = 0;
    local_f8.Size = 0;
    local_e8.DataPtr = (char *)0x0;
    local_e8.Size = 0;
    bVar2 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"DisplayWide",&local_f8);
    if ((bVar2) && (0 < local_f8.Size)) {
      uVar6 = (**(code **)((longlong)*this->Session + 200))(this->Session,&local_f8);
    }
    else {
      bVar2 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"DisplayAnsi",&local_e8);
      if ((!bVar2) || (local_e8.Size < 1)) {
        if ((byte)LogTraceServices._0_1_ < 3) {
          return true;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        return true;
      }
      pFVar7 = ::FString::ConstructFromPtrSize(&local_c8,local_e8.DataPtr,local_e8.Size);
      if (&local_b8 != pFVar7) {
        pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar11 = (pFVar7->Data).ArrayNum;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_d0 = iVar11 + -1;
      if (iVar11 == 0) {
        local_d0 = 0;
      }
      local_d8 = pFVar12;
      uVar6 = (**(code **)((longlong)*this->Session + 200))(this->Session,&local_d8);
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar12);
      }
    }
    (**(code **)(pIVar5->_padding_ + 8))(&pIVar5->_padding_);
    puVar8 = (undefined8 *)(**(code **)(pIVar5->_padding_ + 0x20))(pIVar5);
    *puVar8 = uVar6;
    uVar4 = 0;
    if (param_1 == 1) {
      bVar2 = UE::Trace::IAnalyzer::FEventData::IsDefinitionImpl(this_00,&local_110);
      if (bVar2) {
        uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"DefinitionId",0);
        local_118 = CONCAT44(local_110,uVar4);
        uVar4 = local_110;
      }
      else {
        local_118 = 0;
      }
      local_80 = (undefined ***)0x0;
      local_98 = &
                 ___7__TFunction_OwnedObject_P6A_AVFString__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_90 = FStringDefinition::ToString;
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<FString_(__cdecl*)(void_const_*),FString,void_const_*>::Call;
      TMapBase<unsigned_int,TFunction<FString___cdecl(void_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<FString___cdecl(void_const_*)>,0>_>
      ::FindOrAddImpl<unsigned_int_const_&,TFunction<FString___cdecl(void_const_*)>_>
                ((TMapBase<unsigned_int,TFunction<FString___cdecl(void_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<FString___cdecl(void_const_*)>,0>_>
                  *)&pIVar5->Stringifiers,uVar4,(uint *)((longlong)&local_118 + 4),
                 (TFunction<FString___cdecl(void_const_*)> *)local_a8);
      uVar10 = local_118;
      if (local_a8[0] != (code *)0x0) {
        pppuVar9 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar9 = local_80;
        }
        (*(code *)(*pppuVar9)[2])();
        uVar10 = local_118;
      }
    }
    else {
      bVar2 = UE::Trace::IAnalyzer::FEventData::IsDefinitionImpl(this_00,&local_10c);
      if (bVar2) {
        local_108 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                              (this_00,"DefinitionId",0);
        local_100[0] = local_10c;
      }
      else {
        local_108 = 0;
        local_100[0] = 0;
      }
      local_50 = (undefined ***)0x0;
      local_68 = &
                 ___7__TFunction_OwnedObject_P6A_AVFString__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_60 = FStringDefinition::ToString;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<FString_(__cdecl*)(void_const_*),FString,void_const_*>::Call;
      TMapBase<unsigned_int,TFunction<FString___cdecl(void_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<FString___cdecl(void_const_*)>,0>_>
      ::FindOrAddImpl<unsigned_int_const_&,TFunction<FString___cdecl(void_const_*)>_>
                ((TMapBase<unsigned_int,TFunction<FString___cdecl(void_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<FString___cdecl(void_const_*)>,0>_>
                  *)&pIVar5->Stringifiers,local_100[0],local_100,
                 (TFunction<FString___cdecl(void_const_*)> *)local_78);
      if (local_78[0] != (code *)0x0) {
        pppuVar9 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar9 = local_50;
        }
        (*(code *)(*pppuVar9)[2])();
      }
      uVar10 = (ulonglong)local_100[0] << 0x20 ^ local_108;
    }
    (**(code **)(pIVar5->_padding_ + 0x28))(pIVar5,uVar10,puVar8);
    (**(code **)(pIVar5->_padding_ + 0x10))(&pIVar5->_padding_);
  }
  return true;
}

