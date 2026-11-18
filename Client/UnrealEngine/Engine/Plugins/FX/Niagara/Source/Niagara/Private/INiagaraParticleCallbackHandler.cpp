// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// Execute_ReceiveParticleData @ 1491797a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
INiagaraParticleCallbackHandler::Execute_ReceiveParticleData
          (UObject *param_1,TArray<FBasicParticleData,TSizedDefaultAllocator<32>_> *param_2,
          UNiagaraSystem *param_3,TVector<double> *param_4)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  TArray<FBasicParticleData,TSizedDefaultAllocator<32>_> local_48;
  UNiagaraSystem *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double local_20;
  
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Niagara\\UHT\\NiagaraDataInterfaceExport.gen.cpp"
                       ,0x7d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar6 = *(UClass **)&param_1->field_0x10;
  pUVar4 = UNiagaraParticleCallbackHandler::StaticClass();
  bVar3 = UClass::ImplementsInterface(pUVar6,pUVar4);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UNiagaraParticleCallbackHandler::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Niagara\\UHT\\NiagaraDataInterfaceExport.gen.cpp"
                       ,0x7e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pUVar5 = UObject::FindFunction(param_1,NAME_UNiagaraParticleCallbackHandler_ReceiveParticleData);
  if (pUVar5 == (UFunction *)0x0) {
    pUVar6 = UNiagaraParticleCallbackHandler::StaticClass();
    puVar7 = UObjectBaseUtility::GetNativeInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,param_2,param_3,param_4);
    }
  }
  else {
    if (&local_48 != param_2) {
      iVar1 = param_2->ArrayNum;
      _Src = (param_2->AllocatorInstance).Data;
      local_48.ArrayNum = iVar1;
      if ((iVar1 != 0) || (local_48.ArrayMax != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar1,local_48.ArrayMax,&local_48.AllocatorInstance,iVar1,
                   &local_48.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_48.AllocatorInstance.Data,_Src,(longlong)iVar1 * 0x38);
        }
      }
    }
    local_30 = *(undefined4 *)&param_4->field0_0x0;
    uStack_2c = *(undefined4 *)((longlong)&param_4->field0_0x0 + 4);
    uStack_28 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 8);
    uStack_24 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc);
    local_20 = (param_4->field0_0x0)._s_0.Z;
    local_38 = param_3;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,&local_48);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// ReceiveParticleData @ 149189690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
INiagaraParticleCallbackHandler::ReceiveParticleData
          (INiagaraParticleCallbackHandler *this,
          TArray<FBasicParticleData,TSizedDefaultAllocator<32>_> *param_1,UNiagaraSystem *param_2,
          TVector<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_ReceiveParticleData instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Niagara\\UHT\\NiagaraDataInterfaceExport.gen.cpp"
                     ,0x78,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// execReceiveParticleData @ 149193450

void __cdecl
INiagaraParticleCallbackHandler::execReceiveParticleData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  uchar *puVar3;
  undefined8 local_res8;
  void *local_38;
  undefined8 local_30;
  uchar local_28 [32];
  
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8 = 0;
  ppvVar2 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (*(code *)**(undefined8 **)param_1)(param_1,ppvVar2,local_res8,puVar3);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

