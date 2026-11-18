// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCommonParser
// Functions: 3

// StaticStruct @ 14e66b520

UScriptStruct * __cdecl FInterchangeCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCommonParser();
    Z_Registration_Info_UScriptStruct_FInterchangeCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeCurve,(UObject *)pUVar1,
                         L"InterchangeCurve");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeCurve.OuterSingleton;
}

// Serialize @ 14e6705e0

void __thiscall FInterchangeCurve::Serialize(FInterchangeCurve *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<FInterchangeCurveKey,TSizedDefaultAllocator<32>_>
            (param_1,&this->Keys);
  return;
}

// ToRichCurve @ 14e6713a0

void __thiscall FInterchangeCurve::ToRichCurve(FInterchangeCurve *this,FRichCurve *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement FVar3;
  uint uVar4;
  int iVar5;
  FRichCurveKey *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar9;
  float in_XMM1_Da;
  undefined1 local_res8 [8];
  FKeyHandle local_res10;
  FKeyHandle local_res18 [4];
  FKeyHandle in_stack_ffffffffffffffc8;
  
  uVar4 = (this->Keys).ArrayNum;
  pTVar9 = &param_1->Keys;
  if (-1 < (int)uVar4) {
    piVar1 = &(param_1->Keys).ArrayMax;
    if (*piVar1 < (int)uVar4) {
      in_stack_ffffffffffffffc8.Index = (param_1->Keys).ArrayNum;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,uVar4,&pTVar9->AllocatorInstance,in_stack_ffffffffffffffc8.Index,piVar1);
    }
    iVar5 = (this->Keys).ArrayNum;
    pFVar7 = (this->Keys).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar5 * 0x1c;
    while( true ) {
      if ((this->Keys).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FInterchangeCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar8) break;
      FKeyHandle::FKeyHandle(local_res18);
      in_stack_ffffffffffffffc8.Index = in_stack_ffffffffffffffc8.Index & 0xffffff00;
      FRichCurve::AddKey(param_1,in_XMM1_Da,*(float *)(pFVar7 + 4),SUB81(pTVar9,0),
                         in_stack_ffffffffffffffc8);
      pFVar6 = FRichCurve::GetKey(param_1,local_res10);
      pFVar6->Time = *(float *)(pFVar7 + 4);
      pFVar6->Value = *(float *)(pFVar7 + 8);
      FVar3 = *pFVar7;
      if (FVar3 == (FScriptContainerElement)0x0) {
        (pFVar6->InterpMode).Value = '\0';
      }
      else if (FVar3 == (FScriptContainerElement)0x1) {
        (pFVar6->InterpMode).Value = '\x01';
      }
      else if (FVar3 == (FScriptContainerElement)0x2) {
        (pFVar6->InterpMode).Value = '\x02';
      }
      else {
        (pFVar6->InterpMode).Value = '\x03';
      }
      FVar3 = pFVar7[1];
      if (FVar3 == (FScriptContainerElement)0x0) {
        (pFVar6->TangentMode).Value = '\0';
      }
      else if (FVar3 == (FScriptContainerElement)0x1) {
        (pFVar6->TangentMode).Value = '\x01';
      }
      else if (FVar3 == (FScriptContainerElement)0x2) {
        (pFVar6->TangentMode).Value = '\x02';
      }
      else {
        (pFVar6->TangentMode).Value = '\x03';
      }
      FVar3 = pFVar7[2];
      if (FVar3 == (FScriptContainerElement)0x1) {
        (pFVar6->TangentWeightMode).Value = '\x01';
      }
      else if (FVar3 == (FScriptContainerElement)0x2) {
        (pFVar6->TangentWeightMode).Value = '\x02';
      }
      else if (FVar3 == (FScriptContainerElement)0x3) {
        (pFVar6->TangentWeightMode).Value = '\x03';
      }
      else {
        (pFVar6->TangentWeightMode).Value = '\0';
      }
      pFVar6->ArriveTangent = *(float *)(pFVar7 + 0xc);
      pFVar6->ArriveTangentWeight = *(float *)(pFVar7 + 0x10);
      pFVar6->LeaveTangent = *(float *)(pFVar7 + 0x14);
      pFVar2 = pFVar7 + 0x18;
      pFVar7 = pFVar7 + 0x1c;
      pFVar6->LeaveTangentWeight = *(float *)pFVar2;
    }
    FRichCurve::AutoSetTangents(param_1,0.0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

