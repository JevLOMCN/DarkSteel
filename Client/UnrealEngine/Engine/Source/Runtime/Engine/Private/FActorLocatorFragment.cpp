// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 1488a3920

UScriptStruct * __cdecl FActorLocatorFragment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorLocatorFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorLocatorFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorLocatorFragment,(UObject *)pUVar1,
                         L"ActorLocatorFragment");
  }
  return Z_Registration_Info_UScriptStruct_FActorLocatorFragment.OuterSingleton;
}

// ComputePriority @ 1488bae10

uint __cdecl FActorLocatorFragment::ComputePriority(UObject *param_1,UObject *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return 2000;
  }
  return 0;
}

// Initialize @ 1488cb9e0

FInitializeResult * __thiscall
FActorLocatorFragment::Initialize
          (FActorLocatorFragment *this,FInitializeResult *__return_storage_ptr__,
          FInitializeParams *param_1)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  uint7 uStack_2f;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,param_1->Object);
  (this->Path).AssetPath.PackageName = local_28.AssetPath.PackageName;
  (this->Path).AssetPath.AssetName = local_28.AssetPath.AssetName;
  pFVar2 = &(this->Path).SubPathString;
  if (pFVar2 != &local_28.SubPathString) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
    (this->Path).SubPathString.Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
    (this->Path).SubPathString.Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  __return_storage_ptr__->RelativeToContext = (UObject *)0x0;
  *(ulonglong *)&__return_storage_ptr__->Type = (ulonglong)uStack_2f << 8;
  return __return_storage_ptr__;
}

// Resolve @ 1488db3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FResolveResult * __thiscall
FActorLocatorFragment::Resolve
          (FActorLocatorFragment *this,FResolveResult *__return_storage_ptr__,
          FResolveParams *param_1)

{
  int iVar1;
  FResolveParameterBuffer *pFVar2;
  UWorld *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  FResolveResult *pFVar8;
  FString *pFVar9;
  UClass *pUVar10;
  ULevel *this_01;
  UObject *pUVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  int iVar16;
  ForAnyElementType FVar17;
  undefined1 local_res20;
  undefined1 local_d8;
  undefined1 local_d7;
  UObject *local_d0;
  FString local_c8;
  FString local_b8;
  FName local_a8;
  FName FStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar2 = param_1->ParameterBuffer;
  pFVar14 = (FScriptContainerElement *)0x0;
  iVar16 = 0;
  local_d0 = (UObject *)0x0;
  if (pFVar2 != (FResolveParameterBuffer *)0x0) {
    uVar7 = 1 << ((byte)FActorLocatorFragmentResolveParameter::ParameterType & 0x1f);
    pFVar13 = pFVar14;
    if ((uVar7 & pFVar2->AllParameters) != 0) {
      uVar7 = uVar7 - 1 & pFVar2->AllParameters;
      uVar12 = (ulonglong)uVar7 - ((ulonglong)(uVar7 >> 1) & 0x5555555555555555);
      uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
      bVar5 = (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
      if ((bVar5 == 0xff) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < 255",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.h"
                             ,0xd0,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FResolveResult *)(*pcVar4)();
        return pFVar8;
      }
      if ((pFVar2->Num <= bVar5) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < Num",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorResolveParameterBuffer.h"
                             ,0xd9,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FResolveResult *)(*pcVar4)();
        return pFVar8;
      }
      pFVar13 = (FScriptContainerElement *)
                (pFVar2->Memory + *(ushort *)(pFVar2->Memory + (ulonglong)bVar5 * 4));
    }
    if ((pFVar13 != (FScriptContainerElement *)0x0) &&
       (this_00 = *(UWorld **)pFVar13, this_00 != (UWorld *)0x0)) {
      local_a8 = (this->Path).AssetPath.PackageName;
      FStack_a0 = (this->Path).AssetPath.AssetName;
      if ((*(FName *)(pFVar13 + 0x18) == local_a8) && (*(FName *)(pFVar13 + 0x20) == FStack_a0)) {
        iVar1 = (this->Path).SubPathString.Data.ArrayNum;
        pFVar3 = (this->Path).SubPathString.Data.AllocatorInstance.Data;
        iVar15 = iVar1 + -1;
        if (((*(int *)(pFVar13 + 0x14) == 0 && *(int *)(pFVar13 + 0x10) == 0) &&
            *(int *)(pFVar13 + 0xc) == 0) && *(int *)(pFVar13 + 8) == 0) {
          if (iVar1 == 0) {
            iVar15 = 0;
          }
          pFVar9 = ::FString::ConstructFromPtrSize(&local_58,(uchar *)pFVar3,iVar15);
          if (&local_48 != pFVar9) {
            pFVar14 = (pFVar9->Data).AllocatorInstance.Data;
            (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar16 = (pFVar9->Data).ArrayNum;
            (pFVar9->Data).ArrayNum = 0;
            (pFVar9->Data).ArrayMax = 0;
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          pFVar13 = (FScriptContainerElement *)L"";
          if (iVar16 != 0) {
            pFVar13 = pFVar14;
          }
          UWorld::ResolveSubobject(this_00,(wchar_t *)pFVar13,&local_d0,false);
          local_b8.Data.AllocatorInstance.Data = pFVar14;
        }
        else {
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          if (iVar1 == 0) {
            iVar15 = iVar16;
          }
          pFVar9 = ::FString::ConstructFromPtrSize(&local_68,(uchar *)pFVar3,iVar15);
          if (&local_c8 != pFVar9) {
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            local_c8.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
            (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c8.Data.ArrayNum = (pFVar9->Data).ArrayNum;
            local_c8.Data.ArrayMax = (pFVar9->Data).ArrayMax;
            (pFVar9->Data).ArrayNum = 0;
            (pFVar9->Data).ArrayMax = 0;
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          FWorldPartitionLevelHelper::AddActorContainerIDToSubPathString
                    (&local_b8,(FActorContainerID *)(pFVar13 + 8),&local_c8);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_b8.Data.ArrayNum != 0) {
            FVar17.Data = local_b8.Data.AllocatorInstance.Data;
          }
          UWorld::ResolveSubobject(*(UWorld **)pFVar13,(wchar_t *)FVar17.Data,&local_d0,false);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (local_d0 != (UObject *)0x0) {
    uStack_90 = CONCAT31(uStack_90._1_3_,local_res20) & 0xfffffffc;
    local_98 = SUB84(local_d0,0);
    uStack_94 = (undefined4)((ulonglong)local_d0 >> 0x20);
    goto LAB_1488db726;
  }
  this_01 = (ULevel *)param_1->Context;
  if (this_01 != (ULevel *)0x0) {
    pUVar10 = Z_Construct_UClass_ULevel_NoRegister();
    iVar16 = (int)pUVar10->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar10->_padding_)) {
      pUVar10 = Z_Construct_UClass_ULevel_NoRegister();
      this_01 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_01,pUVar10);
      if (this_01 == (ULevel *)0x0) goto LAB_1488db6f1;
    }
    local_d0 = ResolveActorWithinLevel(this,this_01);
  }
LAB_1488db6f1:
  if (local_d0 == (UObject *)0x0) {
    pUVar11 = FSoftObjectPath::ResolveObject(&this->Path);
    uStack_70 = CONCAT31(uStack_70._1_3_,local_d7) & 0xfffffffc;
    local_78 = SUB84(pUVar11,0);
    uStack_74 = (undefined4)((ulonglong)pUVar11 >> 0x20);
    local_98 = local_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
  }
  else {
    uStack_80 = CONCAT31(uStack_80._1_3_,local_d8) & 0xfffffffc;
    local_88 = SUB84(local_d0,0);
    uStack_84 = (undefined4)((ulonglong)local_d0 >> 0x20);
    local_98 = local_88;
    uStack_94 = uStack_84;
    uStack_90 = uStack_80;
    uStack_8c = uStack_7c;
  }
LAB_1488db726:
  *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = local_98;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = uStack_94;
  *(uint *)&(__return_storage_ptr__->Value)._padding_ = uStack_90;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = uStack_8c;
  (__return_storage_ptr__->Value).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// ToString @ 1488e8020

void __thiscall
FActorLocatorFragment::ToString(FActorLocatorFragment *this,TStringBuilderBase<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((this->Path).AssetPath.PackageName != (FName)0x0) {
    ::operator<<(param_1,(FTopLevelAssetPath *)this);
    iVar1 = (this->Path).SubPathString.Data.ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L':';
      param_1->CurPos = param_1->CurPos + 1;
      operator<<<wchar_t,FUtf8String_const_&>(param_1,&(this->Path).SubPathString);
    }
  }
  return;
}

// TryParseString @ 1488e89a0

FParseStringResult * __thiscall
FActorLocatorFragment::TryParseString
          (FActorLocatorFragment *this,FParseStringResult *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,FParseStringParams *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 local_res8 [32];
  TStringView<wchar_t> local_28;
  undefined8 local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FSoftObjectPath::SetPath(&this->Path,&local_28);
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_18 = 0;
  FText::FText((FText *)&local_28);
  iVar1 = 0;
  local_18 = CONCAT35((int3)((ulonglong)local_18 >> 0x28),0x100000000);
  (__return_storage_ptr__->ErrorMessage).TextData.Reference = (ITextData *)local_28.DataPtr;
  uVar2 = true;
  if ((ITextData *)local_28.DataPtr != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.DataPtr + 8))(local_28.DataPtr,local_res8);
    iVar1 = (int)local_18;
    uVar2 = local_18._4_1_;
  }
  (__return_storage_ptr__->ErrorMessage).Flags = local_28.Size;
  __return_storage_ptr__->NumCharsParsed = iVar1;
  __return_storage_ptr__->bSuccess = (bool)uVar2;
  if ((ITextData *)local_28.DataPtr != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.DataPtr + 0x10))();
  }
  return __return_storage_ptr__;
}

