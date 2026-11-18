// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 20

// StaticStruct @ 14ad79570

UScriptStruct * __cdecl FMetasoundFrontendClassInput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInput.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInput,(UObject *)pUVar1,
                         L"MetasoundFrontendClassInput");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInput.OuterSingleton;
}

// FMetasoundFrontendClassInput @ 14ad9a200

FMetasoundFrontendClassInput * __thiscall
FMetasoundFrontendClassInput::FMetasoundFrontendClassInput
          (FMetasoundFrontendClassInput *this,FInput *param_1)

{
  longlong lVar1;
  FGuid FVar2;
  char cVar3;
  bool bVar4;
  FMetasoundFrontendLiteral *pFVar5;
  IDataTypeRegistry *pIVar6;
  FName FVar7;
  FClassIDGenerator *this_00;
  FGuid *pFVar8;
  FName local_res8;
  FName *local_res10;
  FName local_res18 [2];
  FGuid local_88;
  FMetasoundFrontendLiteral local_78;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FVar2 = Metasound::FrontendInvalidID;
  *(undefined4 *)&this->_padding_ = 0;
  *(FGuid *)&this->_padding_ = FVar2;
  (this->Defaults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Defaults).ArrayNum = 0;
  (this->Defaults).ArrayMax = 0;
  this->_padding_ = (longlong)(param_1->InitValue).ParamName;
  pFVar5 = FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_78,&param_1->InitValue);
  InitDefault(this,pFVar5);
  local_res8 = param_1->DataType;
  if (local_res8 != (FName)0x0) {
    pIVar6 = Metasound::Frontend::IDataTypeRegistry::Get();
    cVar3 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,&local_res8);
    FVar7 = local_res8;
    if (cVar3 != '\0') goto LAB_14ad9a2d1;
    local_res10 = &local_res8;
    bVar4 = `Metasound::DocumentPrivate::ResolveMemberDataType'::__l6::<lambda_1>::operator()
                      (&local_res10);
    FVar7 = local_res8;
    if (bVar4) goto LAB_14ad9a2d1;
  }
  Metasound::Frontend::ConvertParameterToDataType((EAudioParameterType)local_res18);
  FVar7 = local_res18[0];
LAB_14ad9a2d1:
  this->_padding_ = (longlong)FVar7;
  this_00 = Metasound::Frontend::FClassIDGenerator::Get();
  pFVar8 = Metasound::Frontend::FClassIDGenerator::CreateInputID(this_00,&local_88,param_1);
  lVar1 = *(longlong *)&pFVar8->C;
  this->_padding_ = *(longlong *)pFVar8;
  this->_padding_ = lVar1;
  return this;
}

// FMetasoundFrontendClassInput @ 14ad9a310

FMetasoundFrontendClassInput * __thiscall
FMetasoundFrontendClassInput::FMetasoundFrontendClassInput
          (FMetasoundFrontendClassInput *this,FMetasoundFrontendClassVertex *param_1)

{
  longlong lVar1;
  ELiteralType EVar2;
  EMetasoundFrontendLiteralType EVar3;
  IDataTypeRegistry *pIVar4;
  FMetasoundFrontendLiteral *this_00;
  
  lVar1 = *(longlong *)&param_1->field_0x8;
  this->_padding_ = *(longlong *)param_1;
  this->_padding_ = lVar1;
  lVar1 = *(longlong *)&param_1->field_0x18;
  this->_padding_ = *(longlong *)&param_1->field_0x10;
  this->_padding_ = lVar1;
  lVar1 = *(longlong *)&(param_1->NodeID).C;
  this->_padding_ = *(longlong *)&param_1->NodeID;
  this->_padding_ = lVar1;
  *(EMetasoundFrontendVertexAccessType *)&this->_padding_ = param_1->AccessType;
  (this->Defaults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Defaults).ArrayNum = 0;
  (this->Defaults).ArrayMax = 0;
  pIVar4 = Metasound::Frontend::IDataTypeRegistry::Get();
  EVar2 = (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4,&param_1->field_0x8);
  EVar3 = Metasound::Frontend::GetMetasoundFrontendLiteralType(EVar2);
  this_00 = InitDefault(this);
  FMetasoundFrontendLiteral::SetType(this_00,EVar3);
  return this;
}

// AddDefault @ 14ada5c40

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendClassInput::AddDefault(FMetasoundFrontendClassInput *this,FGuid *param_1)

{
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  FMetasoundFrontendLiteral *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FMetasoundFrontendLiteral local_c8;
  FMetasoundFrontendLiteral local_70;
  undefined8 local_18;
  FScriptContainerElement *pFStack_10;
  
  pFVar8 = (this->Defaults).AllocatorInstance.Data;
  pTVar1 = &this->Defaults;
  pFVar9 = pFVar8 + (longlong)(this->Defaults).ArrayNum * 0x68;
  if (pFVar8 != pFVar9) {
    do {
      if (((param_1->D == *(uint *)(pFVar8 + 100) && param_1->C == *(uint *)(pFVar8 + 0x60)) &&
          param_1->B == *(uint *)(pFVar8 + 0x5c)) && param_1->A == *(uint *)(pFVar8 + 0x58)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ContainsDefault(InPageID)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                           ,0x537,L"Page default with given ID already exists");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FMetasoundFrontendLiteral *)(*pcVar3)();
          return pFVar7;
        }
        break;
      }
      pFVar8 = pFVar8 + 0x68;
    } while (pFVar8 != pFVar9);
  }
  local_c8._1_2_ = 0;
  local_c8._3_1_ = 0;
  local_c8.Type = None;
  local_c8.AsNumDefault = 0;
  local_c8.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsBoolean.ArrayNum = 0;
  local_c8.AsBoolean.ArrayMax = 0;
  local_c8.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsInteger.ArrayNum = 0;
  local_c8.AsInteger.ArrayMax = 0;
  local_c8.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsFloat.ArrayNum = 0;
  local_c8.AsFloat.ArrayMax = 0;
  local_c8.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsString.ArrayNum = 0;
  local_c8.AsString.ArrayMax = 0;
  local_c8.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsUObject.ArrayNum = 0;
  local_c8.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_70,&local_c8);
  local_18._0_4_ = param_1->A;
  local_18._4_4_ = param_1->B;
  pFStack_10 = *(FScriptContainerElement **)&param_1->C;
  if (local_c8.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsUObject.AllocatorInstance.Data);
  }
  FVar4.Data = local_c8.AsString.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_c8.AsString.AllocatorInstance.Data,local_c8.AsString.ArrayNum);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_c8.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsFloat.AllocatorInstance.Data);
  }
  if (local_c8.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsInteger.AllocatorInstance.Data);
  }
  if (local_c8.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsBoolean.AllocatorInstance.Data);
  }
  pFVar7 = (FMetasoundFrontendLiteral *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar7 <= &local_70) &&
      (&local_70 <
       (FMetasoundFrontendLiteral *)((longlong)pFVar7 + (longlong)(this->Defaults).ArrayMax * 0x68))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMetasoundFrontendLiteral *)(*pcVar3)();
    return pFVar7;
  }
  iVar6 = (this->Defaults).ArrayNum;
  piVar2 = &(this->Defaults).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Defaults).ArrayNum = iVar6 + 1;
  pFVar7 = (FMetasoundFrontendLiteral *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x68);
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(pFVar7,&local_70);
  pFVar7[1].Type = (undefined1)local_18;
  *(undefined3 *)&pFVar7[1].field_0x1 = local_18._1_3_;
  pFVar7[1].AsNumDefault = local_18._4_4_;
  pFVar7[1].AsBoolean.AllocatorInstance.Data = pFStack_10;
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&local_70);
  return pFVar7;
}

// ContainsDefault @ 14ada80e0

bool __thiscall
FMetasoundFrontendClassInput::ContainsDefault(FMetasoundFrontendClassInput *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Defaults).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->Defaults).ArrayNum * 0x68;
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->D == *(uint *)(pFVar1 + 100) && param_1->C == *(uint *)(pFVar1 + 0x60)) &&
          param_1->B == *(uint *)(pFVar1 + 0x5c)) && param_1->A == *(uint *)(pFVar1 + 0x58))
      goto LAB_14ada813a;
      pFVar1 = pFVar1 + 0x68;
    } while (pFVar1 != pFVar2);
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14ada813a:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// FindConstDefault @ 14adb8b60

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendClassInput::FindConstDefault(FMetasoundFrontendClassInput *this,FGuid *param_1)

{
  FMetasoundFrontendLiteral *pFVar1;
  FMetasoundFrontendLiteral *pFVar2;
  
  pFVar1 = (FMetasoundFrontendLiteral *)(this->Defaults).AllocatorInstance.Data;
  pFVar2 = (FMetasoundFrontendLiteral *)
           ((longlong)pFVar1 + (longlong)(this->Defaults).ArrayNum * 0x68);
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->D == *(uint *)((longlong)&pFVar1[1].AsBoolean.AllocatorInstance.Data + 4) &&
           param_1->C == *(uint *)&pFVar1[1].AsBoolean.AllocatorInstance.Data) &&
          param_1->B == pFVar1[1].AsNumDefault) && param_1->A == *(uint *)(pFVar1 + 1)) {
        return pFVar1;
      }
      pFVar1 = (FMetasoundFrontendLiteral *)&pFVar1[1].AsBoolean.ArrayNum;
    } while (pFVar1 != pFVar2);
  }
  return (FMetasoundFrontendLiteral *)0x0;
}

// FindConstDefaultChecked @ 14adb8bd0

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendClassInput::FindConstDefaultChecked
          (FMetasoundFrontendClassInput *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendLiteral *pFVar3;
  FMetasoundFrontendLiteral *pFVar4;
  
  pFVar3 = (FMetasoundFrontendLiteral *)(this->Defaults).AllocatorInstance.Data;
  pFVar4 = (FMetasoundFrontendLiteral *)
           ((longlong)pFVar3 + (longlong)(this->Defaults).ArrayNum * 0x68);
  if (pFVar3 != pFVar4) {
    do {
      if (((param_1->D == *(uint *)((longlong)&pFVar3[1].AsBoolean.AllocatorInstance.Data + 4) &&
           param_1->C == *(uint *)&pFVar3[1].AsBoolean.AllocatorInstance.Data) &&
          param_1->B == pFVar3[1].AsNumDefault) && param_1->A == *(uint *)(pFVar3 + 1)) {
        if (pFVar3 != (FMetasoundFrontendLiteral *)0x0) {
          return pFVar3;
        }
        break;
      }
      pFVar3 = (FMetasoundFrontendLiteral *)&pFVar3[1].AsBoolean.ArrayNum;
    } while (pFVar3 != pFVar4);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Literal",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                     ,0x54f,L"");
  if (!bVar2) {
    return (FMetasoundFrontendLiteral *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FMetasoundFrontendLiteral *)(*pcVar1)();
  return pFVar3;
}

// FindDefault @ 14adb8e70

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendClassInput::FindDefault(FMetasoundFrontendClassInput *this,FGuid *param_1)

{
  FMetasoundFrontendLiteral *pFVar1;
  FMetasoundFrontendLiteral *pFVar2;
  
  pFVar1 = (FMetasoundFrontendLiteral *)(this->Defaults).AllocatorInstance.Data;
  pFVar2 = (FMetasoundFrontendLiteral *)
           ((longlong)pFVar1 + (longlong)(this->Defaults).ArrayNum * 0x68);
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->D == *(uint *)((longlong)&pFVar1[1].AsBoolean.AllocatorInstance.Data + 4) &&
           param_1->C == *(uint *)&pFVar1[1].AsBoolean.AllocatorInstance.Data) &&
          param_1->B == pFVar1[1].AsNumDefault) && param_1->A == *(uint *)(pFVar1 + 1)) {
        return pFVar1;
      }
      pFVar1 = (FMetasoundFrontendLiteral *)&pFVar1[1].AsBoolean.ArrayNum;
    } while (pFVar1 != pFVar2);
  }
  return (FMetasoundFrontendLiteral *)0x0;
}

// FindDefaultChecked @ 14adb8ee0

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendClassInput::FindDefaultChecked(FMetasoundFrontendClassInput *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendLiteral *pFVar3;
  FMetasoundFrontendLiteral *pFVar4;
  
  pFVar3 = (FMetasoundFrontendLiteral *)(this->Defaults).AllocatorInstance.Data;
  pFVar4 = (FMetasoundFrontendLiteral *)
           ((longlong)pFVar3 + (longlong)(this->Defaults).ArrayNum * 0x68);
  if (pFVar3 != pFVar4) {
    do {
      if (((param_1->D == *(uint *)((longlong)&pFVar3[1].AsBoolean.AllocatorInstance.Data + 4) &&
           param_1->C == *(uint *)&pFVar3[1].AsBoolean.AllocatorInstance.Data) &&
          param_1->B == pFVar3[1].AsNumDefault) && param_1->A == *(uint *)(pFVar3 + 1)) {
        if (pFVar3 != (FMetasoundFrontendLiteral *)0x0) {
          return pFVar3;
        }
        break;
      }
      pFVar3 = (FMetasoundFrontendLiteral *)&pFVar3[1].AsBoolean.ArrayNum;
    } while (pFVar3 != pFVar4);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Literal",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                     ,0x561,L"");
  if (!bVar2) {
    return (FMetasoundFrontendLiteral *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FMetasoundFrontendLiteral *)(*pcVar1)();
  return pFVar3;
}

// GetDefaults @ 14adbe540

TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> * __thiscall
FMetasoundFrontendClassInput::GetDefaults(FMetasoundFrontendClassInput *this)

{
  return &this->Defaults;
}

// InitDefault @ 14adc4d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMetasoundFrontendLiteral * __thiscall
FMetasoundFrontendClassInput::InitDefault(FMetasoundFrontendClassInput *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  int iVar8;
  FMetasoundFrontendLiteral *pFVar9;
  IDataTypeRegistry *pIVar10;
  FLiteral *pFVar11;
  longlong lVar12;
  undefined1 auStack_138 [32];
  FMetasoundFrontendLiteral *local_118;
  FMetasoundFrontendLiteral *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  FMetasoundFrontendLiteral local_e8;
  FMetasoundFrontendLiteral local_90;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((this->Defaults).ArrayNum != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Defaults.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                       ,0x56e,L"Default(s) already initialized");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMetasoundFrontendLiteral *)(*pcVar3)();
      return pFVar9;
    }
  }
  local_e8._1_2_ = 0;
  local_e8._3_1_ = 0;
  local_e8.Type = None;
  local_e8.AsNumDefault = 0;
  local_e8.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsBoolean.ArrayNum = 0;
  local_e8.AsBoolean.ArrayMax = 0;
  local_e8.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsInteger.ArrayNum = 0;
  local_e8.AsInteger.ArrayMax = 0;
  local_e8.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsFloat.ArrayNum = 0;
  local_e8.AsFloat.ArrayMax = 0;
  local_e8.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsString.ArrayNum = 0;
  local_e8.AsString.ArrayMax = 0;
  local_e8.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AsUObject.ArrayNum = 0;
  local_e8.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_90,&local_e8);
  local_38._0_4_ = Metasound::Frontend::DefaultPageID.A;
  local_38._4_4_ = Metasound::Frontend::DefaultPageID.B;
  local_38._8_4_ = Metasound::Frontend::DefaultPageID.C;
  local_38._12_4_ = Metasound::Frontend::DefaultPageID.D;
  if (local_e8.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsUObject.AllocatorInstance.Data);
  }
  FVar4.Data = local_e8.AsString.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_e8.AsString.AllocatorInstance.Data,local_e8.AsString.ArrayNum);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_e8.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsFloat.AllocatorInstance.Data);
  }
  if (local_e8.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsInteger.AllocatorInstance.Data);
  }
  if (local_e8.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AsBoolean.AllocatorInstance.Data);
  }
  pFVar9 = (FMetasoundFrontendLiteral *)(this->Defaults).AllocatorInstance.Data;
  if ((pFVar9 <= &local_90) &&
     (lVar12 = (longlong)(this->Defaults).ArrayMax,
     &local_90 < (FMetasoundFrontendLiteral *)((longlong)pFVar9 + lVar12 * 0x68))) {
    local_100 = (longlong)(this->Defaults).ArrayNum;
    local_f8 = 0x68;
    local_118 = &local_90;
    local_110 = pFVar9;
    local_108 = lVar12;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMetasoundFrontendLiteral *)(*pcVar3)();
      return pFVar9;
    }
  }
  iVar8 = (this->Defaults).ArrayNum;
  piVar1 = &(this->Defaults).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&(this->Defaults).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Defaults).AllocatorInstance.Data;
  (this->Defaults).ArrayNum = iVar8 + 1;
  pFVar9 = (FMetasoundFrontendLiteral *)(pFVar2 + (longlong)iVar8 * 0x68);
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(pFVar9,&local_90);
  auVar5 = local_38;
  pFVar9[1].Type = local_38[0];
  *(undefined3 *)&pFVar9[1].field_0x1 = local_38._1_3_;
  pFVar9[1].AsNumDefault = local_38._4_4_;
  pFVar9[1].AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)local_38._8_8_;
  local_38 = auVar5;
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&local_90);
  pIVar10 = Metasound::Frontend::IDataTypeRegistry::Get();
  cVar7 = (**(code **)((longlong)*pIVar10 + 0x38))(pIVar10,&this->_padding_);
  if (cVar7 != '\0') {
    pIVar10 = Metasound::Frontend::IDataTypeRegistry::Get();
    pFVar11 = (FLiteral *)
              (**(code **)((longlong)*pIVar10 + 0x80))(pIVar10,local_28,&this->_padding_);
    FMetasoundFrontendLiteral::SetFromLiteral(pFVar9,pFVar11);
    if (0xc < local_18) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMetasoundFrontendLiteral *)(*pcVar3)();
        return pFVar9;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_18])(local_28);
  }
  return pFVar9;
}

// InitDefault @ 14adc4fb0

void __thiscall
FMetasoundFrontendClassInput::InitDefault
          (FMetasoundFrontendClassInput *this,FMetasoundFrontendLiteral *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  FMetasoundFrontendLiteral *pFVar6;
  FMetasoundFrontendLiteral local_c8;
  FMetasoundFrontendLiteral local_70;
  undefined1 local_18 [16];
  
  if ((this->Defaults).ArrayNum != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Defaults.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                       ,0x57d,L"Default(s) already initialized");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_c8._1_2_ = 0;
  local_c8._3_1_ = 0;
  local_c8.Type = None;
  local_c8.AsNumDefault = 0;
  local_c8.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsBoolean.ArrayNum = 0;
  local_c8.AsBoolean.ArrayMax = 0;
  local_c8.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsInteger.ArrayNum = 0;
  local_c8.AsInteger.ArrayMax = 0;
  local_c8.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsFloat.ArrayNum = 0;
  local_c8.AsFloat.ArrayMax = 0;
  local_c8.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsString.ArrayNum = 0;
  local_c8.AsString.ArrayMax = 0;
  local_c8.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsUObject.ArrayNum = 0;
  local_c8.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_70,&local_c8);
  local_18._0_4_ = Metasound::Frontend::DefaultPageID.A;
  local_18._4_4_ = Metasound::Frontend::DefaultPageID.B;
  local_18._8_4_ = Metasound::Frontend::DefaultPageID.C;
  local_18._12_4_ = Metasound::Frontend::DefaultPageID.D;
  if (local_c8.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_c8.AsString.AllocatorInstance.Data,local_c8.AsString.ArrayNum);
  if (local_c8.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsString.AllocatorInstance.Data);
  }
  if (local_c8.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsFloat.AllocatorInstance.Data);
  }
  if (local_c8.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsInteger.AllocatorInstance.Data);
  }
  if (local_c8.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsBoolean.AllocatorInstance.Data);
  }
  pFVar6 = (FMetasoundFrontendLiteral *)(this->Defaults).AllocatorInstance.Data;
  if ((pFVar6 <= &local_70) &&
     (&local_70 <
      (FMetasoundFrontendLiteral *)((longlong)pFVar6 + (longlong)(this->Defaults).ArrayMax * 0x68)))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = (this->Defaults).ArrayNum;
  piVar1 = &(this->Defaults).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&(this->Defaults).AllocatorInstance,piVar1);
  }
  (this->Defaults).ArrayNum = iVar5 + 1;
  pFVar6 = (FMetasoundFrontendLiteral *)
           ((this->Defaults).AllocatorInstance.Data + (longlong)iVar5 * 0x68);
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(pFVar6,&local_70);
  auVar3 = local_18;
  pFVar6[1].Type = local_18[0];
  *(undefined3 *)&pFVar6[1].field_0x1 = local_18._1_3_;
  pFVar6[1].AsNumDefault = local_18._4_4_;
  pFVar6[1].AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)local_18._8_8_;
  local_18 = auVar3;
  FMetasoundFrontendLiteral::operator=(pFVar6,param_1);
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&local_70);
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(param_1);
  return;
}

// IsFunctionalEquivalent @ 14adc7120

bool __cdecl
FMetasoundFrontendClassInput::IsFunctionalEquivalent
          (FMetasoundFrontendClassInput *param_1,FMetasoundFrontendClassInput *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FMetasoundFrontendLiteral *this;
  uint uVar6;
  FMetasoundFrontendLiteral *pFVar7;
  longlong lVar8;
  
  if ((((param_1->_padding_ == param_2->_padding_) && (param_1->_padding_ == param_2->_padding_)) &&
      ((int)param_1->_padding_ == (int)param_2->_padding_)) &&
     (iVar1 = (param_1->Defaults).ArrayNum, iVar1 == (param_2->Defaults).ArrayNum)) {
    uVar6 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (param_2->Defaults).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar7 = (FMetasoundFrontendLiteral *)((param_2->Defaults).AllocatorInstance.Data + lVar8);
        uVar5 = 0;
        if ((int)uVar6 < (param_1->Defaults).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        this = (FMetasoundFrontendLiteral *)((param_1->Defaults).AllocatorInstance.Data + lVar8);
        if (((*(int *)((longlong)&this[1].AsBoolean.AllocatorInstance.Data + 4) !=
              *(int *)((longlong)&pFVar7[1].AsBoolean.AllocatorInstance.Data + 4) ||
             *(int *)&this[1].AsBoolean.AllocatorInstance.Data !=
             *(int *)&pFVar7[1].AsBoolean.AllocatorInstance.Data) ||
            this[1].AsNumDefault != pFVar7[1].AsNumDefault) ||
            *(int *)(this + 1) != *(int *)(pFVar7 + 1)) goto LAB_14adc7270;
        bVar3 = FMetasoundFrontendLiteral::IsEqual(this,pFVar7);
        if (!bVar3) goto LAB_14adc7270;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x68;
      } while ((int)uVar6 < (param_1->Defaults).ArrayNum);
    }
    bVar3 = true;
  }
  else {
LAB_14adc7270:
    bVar3 = false;
  }
  return bVar3;
}

// IterateDefaults @ 14adc8480

void __thiscall
FMetasoundFrontendClassInput::IterateDefaults
          (FMetasoundFrontendClassInput *this,
          TFunctionRef<void___cdecl(FGuid_const_&,FMetasoundFrontendLiteral_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Defaults).ArrayNum;
  pFVar2 = (this->Defaults).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((this->Defaults).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendClassInputDefault,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2 + 0x58,pFVar2);
    pFVar2 = pFVar2 + 0x68;
  }
  return;
}

// IterateDefaults @ 14adc84f0

void __thiscall
FMetasoundFrontendClassInput::IterateDefaults
          (FMetasoundFrontendClassInput *this,
          TFunctionRef<void___cdecl(FGuid_const_&,FMetasoundFrontendLiteral_const_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Defaults).ArrayNum;
  pFVar2 = (this->Defaults).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((this->Defaults).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendClassInputDefault_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2 + 0x58,pFVar2);
    pFVar2 = pFVar2 + 0x68;
  }
  return;
}

// RemoveDefault @ 14adcef00

bool __thiscall
FMetasoundFrontendClassInput::RemoveDefault(FMetasoundFrontendClassInput *this,FGuid *param_1)

{
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  iVar1 = (this->Defaults).ArrayNum;
  this_00 = &this->Defaults;
  bVar4 = false;
  uVar8 = 0;
  if (0 < iVar1) {
    lVar10 = 0;
    iVar9 = iVar1;
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar9) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      pFVar2 = (this_00->AllocatorInstance).Data;
      if (((*(uint *)(pFVar2 + lVar10 + 100) == param_1->D &&
           *(uint *)(pFVar2 + lVar10 + 0x60) == param_1->C) &&
          *(uint *)(pFVar2 + lVar10 + 0x5c) == param_1->B) &&
          *(uint *)(pFVar2 + lVar10 + 0x58) == param_1->A) {
        bVar4 = true;
        uVar7 = 0;
        if ((int)uVar8 < (this->Defaults).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar8);
      }
      else {
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x68;
      }
      iVar9 = (this->Defaults).ArrayNum;
    } while ((int)uVar8 < iVar9);
    if (bVar4) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,&this_00->AllocatorInstance,iVar9,&(this->Defaults).ArrayMax);
    }
  }
  return 0 < iVar1 - (this->Defaults).ArrayNum;
}

// ResetDefaults @ 14adcf430

void __thiscall
FMetasoundFrontendClassInput::ResetDefaults(FMetasoundFrontendClassInput *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FMetasoundFrontendClassInputDefault *pFVar3;
  
  piVar1 = &(this->Defaults).ArrayMax;
  pFVar3 = (FMetasoundFrontendClassInputDefault *)(this->Defaults).AllocatorInstance.Data;
  iVar2 = (this->Defaults).ArrayNum;
  if ((this->Defaults).ArrayMax < 0) {
    DestructItems<FMetasoundFrontendClassInputDefault,int>(pFVar3,iVar2);
    (this->Defaults).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,&(this->Defaults).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FMetasoundFrontendClassInputDefault,int>(pFVar3,iVar2);
    (this->Defaults).ArrayNum = 0;
  }
  if (param_1) {
    InitDefault(this);
    iVar2 = (this->Defaults).ArrayNum;
    if (*piVar1 != iVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,iVar2,&(this->Defaults).AllocatorInstance,iVar2,piVar1);
    }
  }
  return;
}

// SetDefaults @ 14add0870

void __thiscall
FMetasoundFrontendClassInput::SetDefaults
          (FMetasoundFrontendClassInput *this,
          TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)param_1->ArrayNum * 0x68;
  for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 0x68) {
    if (((*(int *)(pFVar3 + 100) == 0 && *(int *)(pFVar3 + 0x60) == 0) &&
        *(int *)(pFVar3 + 0x5c) == 0) && *(int *)(pFVar3 + 0x58) == 0) goto LAB_14add08dd;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InputDefaults.ContainsByPredicate(IsDefaultPageID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocument.cpp"
                     ,0x5a7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14add08dd:
  pTVar5 = &this->Defaults;
  if (pTVar5 != param_1) {
    DestructItems<FMetasoundFrontendClassInputDefault,int>
              ((FMetasoundFrontendClassInputDefault *)(pTVar5->AllocatorInstance).Data,
               (this->Defaults).ArrayNum);
    pFVar3 = (pTVar5->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar5->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Defaults).ArrayNum = param_1->ArrayNum;
    (this->Defaults).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  DestructItems<FMetasoundFrontendClassInputDefault,int>
            ((FMetasoundFrontendClassInputDefault *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// FMetasoundFrontendClassInput @ 14addca20

FMetasoundFrontendClassInput * __thiscall
FMetasoundFrontendClassInput::FMetasoundFrontendClassInput
          (FMetasoundFrontendClassInput *this,FMetasoundFrontendClassInput *param_1)

{
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FMetasoundFrontendClassInputDefault *pFVar4;
  longlong lVar5;
  
  lVar5 = param_1->_padding_;
  pTVar1 = &this->Defaults;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Defaults).ArrayMax;
  iVar3 = (param_1->Defaults).ArrayNum;
  pFVar4 = (FMetasoundFrontendClassInputDefault *)(param_1->Defaults).AllocatorInstance.Data;
  (this->Defaults).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// ~FMetasoundFrontendClassInput @ 14addf370

void __thiscall
FMetasoundFrontendClassInput::~FMetasoundFrontendClassInput(FMetasoundFrontendClassInput *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMetasoundFrontendClassInputDefault,int>
            ((FMetasoundFrontendClassInputDefault *)(this->Defaults).AllocatorInstance.Data,
             (this->Defaults).ArrayNum);
  pFVar1 = (this->Defaults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

