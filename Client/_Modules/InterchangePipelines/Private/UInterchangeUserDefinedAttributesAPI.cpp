// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 103

// GetUserDefinedAttribute<signed_char> @ 14e73aea0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<signed_char>
          (UInterchangeBaseNode *param_1,FString *param_2,schar *param_3,TOptional<FString> *param_4
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<signed_char,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<signed_char,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<signed_char,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<signed_char,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73b1aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73b1aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73b1de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73b1de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<unsigned_char> @ 14e73b220

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<unsigned_char>
          (UInterchangeBaseNode *param_1,FString *param_2,uchar *param_3,TOptional<FString> *param_4
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar3) {
    return false;
  }
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_28,param_2,local_res8[0],false);
  bVar3 = UInterchangeBaseNode::GetAttribute<unsigned_char>(param_1,&local_28,param_3);
  if (!bVar3) {
    bVar3 = false;
    goto LAB_14e73b419;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  if (*piVar7 != -1) {
    pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *piVar7 = -1;
    (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_38,param_2,local_res8[0],true);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_38);
  if (cVar5 == '\0') {
LAB_14e73b400:
    bVar3 = true;
  }
  else {
    local_48.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_48._8_8_ = 0;
    bVar3 = UInterchangeBaseNode::GetAttribute<FString>(param_1,&local_38,&local_48.TypedValue);
    if (bVar3) {
      if (&local_48 != &param_4->field0_0x0) {
        pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        _Src = local_48.TypedValue.Data.AllocatorInstance.Data;
        lVar6 = (longlong)local_48.TypedValue.Data.ArrayNum;
        (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(int *)((longlong)&param_4->field0_0x0 + 8) = local_48.TypedValue.Data.ArrayNum;
        if (local_48.TypedValue.Data.ArrayNum == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_48.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                     local_48.TypedValue.Data.ArrayNum,piVar7);
          memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,lVar6 * 2
                );
        }
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
      }
      if (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
      }
      goto LAB_14e73b400;
    }
    if (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14e73b419:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetUserDefinedAttribute<short> @ 14e73b460

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<short>
          (UInterchangeBaseNode *param_1,FString *param_2,short *param_3,TOptional<FString> *param_4
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<short,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<short,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<short,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<short,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73b76a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73b76a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73b79e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73b79e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<unsigned_short> @ 14e73b7e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<unsigned_short>
          (UInterchangeBaseNode *param_1,FString *param_2,ushort *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<unsigned_short,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_short,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_short,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_short,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73baea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73baea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73bb1e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73bb1e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<unsigned_int> @ 14e73bb60

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<unsigned_int>
          (UInterchangeBaseNode *param_1,FString *param_2,uint *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<unsigned_int,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_int,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_int,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_int,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73be6a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73be6a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73be9e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73be9e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TBox2<float>_> @ 14e73bee0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TBox2<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBox2<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TBox2<float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TBox2<float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox2<float>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox2<float>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73c1ea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73c1ea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73c21e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73c21e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TBox2<double>_> @ 14e73c260

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TBox2<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBox2<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TBox2<double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TBox2<double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox2<double>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox2<double>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73c56a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73c56a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73c59e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73c59e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TBox<float>_> @ 14e73c5e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TBox<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBox<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TBox<float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TBox<float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<float>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<float>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73c8ea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73c8ea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73c91e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73c91e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TBox<double>_> @ 14e73c960

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TBox<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBox<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TBox<double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TBox<double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<double>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<double>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73cc6a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73cc6a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73cc9e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73cc9e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TBoxSphereBounds<float,float>_> @ 14e73cce0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<UE::Math::TBoxSphereBounds<float,float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBoxSphereBounds<float,float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void>::Get(&local_48,param_3)
      ;
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73cfea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73cfea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73d01e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73d01e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TBoxSphereBounds<double,double>_> @ 14e73d060

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<UE::Math::TBoxSphereBounds<double,double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBoxSphereBounds<double,double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73d36a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73d36a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73d39e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73d39e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TIntPoint<int>_> @ 14e73d3e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TIntPoint<int>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TIntPoint<int> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TIntPoint<int>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TIntPoint<int>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntPoint<int>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntPoint<int>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73d6ea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73d6ea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73d71e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73d71e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TIntRect<int>_> @ 14e73d760

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TIntRect<int>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TIntRect<int> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TIntRect<int>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TIntRect<int>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntRect<int>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntRect<int>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73da6a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73da6a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73da9e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73da9e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TIntVector3<int>_> @ 14e73dae0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TIntVector3<int>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TIntVector3<int> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TIntVector3<int>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TIntVector3<int>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntVector3<int>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntVector3<int>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73ddea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73ddea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73de1e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73de1e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TMatrix<float>_> @ 14e73de60

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TMatrix<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TMatrix<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TMatrix<float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TMatrix<float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<float>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<float>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73e16a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73e16a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73e19e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73e19e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TMatrix<double>_> @ 14e73e1e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TMatrix<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TMatrix<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TMatrix<double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TMatrix<double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73e4ea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73e4ea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73e51e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73e51e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TPlane<float>_> @ 14e73e560

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TPlane<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TPlane<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TPlane<float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TPlane<float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TPlane<float>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TPlane<float>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73e86a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73e86a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73e89e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73e89e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TPlane<double>_> @ 14e73e8e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TPlane<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TPlane<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TPlane<double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TPlane<double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TPlane<double>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TPlane<double>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73ebea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73ebea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73ec1e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73ec1e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TQuat<float>_> @ 14e73ec60

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TQuat<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TQuat<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TQuat<float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TQuat<float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TQuat<float>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TQuat<float>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73ef6a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73ef6a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73ef9e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73ef9e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TQuat<double>_> @ 14e73efe0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TQuat<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TQuat<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TQuat<double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TQuat<double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TQuat<double>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TQuat<double>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73f2ea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73f2ea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73f31e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73f31e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TRotator<float>_> @ 14e73f360

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TRotator<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TRotator<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TRotator<float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TRotator<float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TRotator<float>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TRotator<float>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73f66a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73f66a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73f69e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73f69e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TRotator<double>_> @ 14e73f6e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TRotator<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TRotator<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TRotator<double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TRotator<double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TRotator<double>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TRotator<double>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73f9ea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73f9ea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73fa1e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73fa1e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TSphere<float>_> @ 14e73fa60

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TSphere<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TSphere<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TSphere<float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TSphere<float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TSphere<float>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TSphere<float>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e73fd6a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e73fd6a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e73fd9e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e73fd9e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TSphere<double>_> @ 14e73fde0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TSphere<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TSphere<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TSphere<double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TSphere<double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TSphere<double>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TSphere<double>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7400ea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7400ea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74011e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74011e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TTransform<float>_> @ 14e740160

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TTransform<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TTransform<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TTransform<float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TTransform<float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<float>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<float>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74046a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74046a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74049e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74049e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TTransform<double>_> @ 14e7404e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TTransform<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TTransform<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TTransform<double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TTransform<double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<double>,void>
            ::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<UE::Math::TTransform<double>,void>::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7407ea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7407ea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74081e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74081e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TVector2<float>_> @ 14e740860

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector2<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector2<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar3) {
    return false;
  }
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_28,param_2,local_res8[0],false);
  bVar3 = UInterchangeBaseNode::GetAttribute<UE::Math::TVector2<float>_>(param_1,&local_28,param_3);
  if (!bVar3) {
    bVar3 = false;
    goto LAB_14e740a59;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  if (*piVar7 != -1) {
    pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *piVar7 = -1;
    (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_38,param_2,local_res8[0],true);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_38);
  if (cVar5 == '\0') {
LAB_14e740a40:
    bVar3 = true;
  }
  else {
    local_48.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_48._8_8_ = 0;
    bVar3 = UInterchangeBaseNode::GetAttribute<FString>(param_1,&local_38,&local_48.TypedValue);
    if (bVar3) {
      if (&local_48 != &param_4->field0_0x0) {
        pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        _Src = local_48.TypedValue.Data.AllocatorInstance.Data;
        lVar6 = (longlong)local_48.TypedValue.Data.ArrayNum;
        (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(int *)((longlong)&param_4->field0_0x0 + 8) = local_48.TypedValue.Data.ArrayNum;
        if (local_48.TypedValue.Data.ArrayNum == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_48.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                     local_48.TypedValue.Data.ArrayNum,piVar7);
          memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,lVar6 * 2
                );
        }
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
      }
      if (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
      }
      goto LAB_14e740a40;
    }
    if (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14e740a59:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetUserDefinedAttribute<UE::Math::TVector2<double>_> @ 14e740aa0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector2<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector2<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TVector2<double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TVector2<double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector2<double>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector2<double>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e740daa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e740daa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e740dde;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e740dde:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TVector4<float>_> @ 14e740e20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector4<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector4<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TVector4<float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TVector4<float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector4<float>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector4<float>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74112a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74112a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74115e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74115e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TVector4<double>_> @ 14e7411a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector4<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector4<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TVector4<double>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TVector4<double>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector4<double>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector4<double>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7414aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7414aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7414de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7414de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TVector<float>_> @ 14e741520

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector<float> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<UE::Math::TVector<float>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TVector<float>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<float>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<float>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74182a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74182a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74185e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74185e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<UE::Math::TVector<double>_> @ 14e7418a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector<double> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar3) {
    return false;
  }
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_28,param_2,local_res8[0],false);
  bVar3 = UInterchangeBaseNode::GetAttribute<UE::Math::TVector<double>_>(param_1,&local_28,param_3);
  if (!bVar3) {
    bVar3 = false;
    goto LAB_14e741a99;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  if (*piVar7 != -1) {
    pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *piVar7 = -1;
    (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_38,param_2,local_res8[0],true);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_38);
  if (cVar5 == '\0') {
LAB_14e741a80:
    bVar3 = true;
  }
  else {
    local_48.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_48._8_8_ = 0;
    bVar3 = UInterchangeBaseNode::GetAttribute<FString>(param_1,&local_38,&local_48.TypedValue);
    if (bVar3) {
      if (&local_48 != &param_4->field0_0x0) {
        pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        _Src = local_48.TypedValue.Data.AllocatorInstance.Data;
        lVar6 = (longlong)local_48.TypedValue.Data.ArrayNum;
        (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(int *)((longlong)&param_4->field0_0x0 + 8) = local_48.TypedValue.Data.ArrayNum;
        if (local_48.TypedValue.Data.ArrayNum == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_48.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                     local_48.TypedValue.Data.ArrayNum,piVar7);
          memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,lVar6 * 2
                );
        }
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
      }
      if (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
      }
      goto LAB_14e741a80;
    }
    if (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14e741a99:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetUserDefinedAttribute<FColor> @ 14e741ae0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FColor>
          (UInterchangeBaseNode *param_1,FString *param_2,FColor *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FColor,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FColor,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FColor,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FColor,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e741dea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e741dea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e741e1e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e741e1e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FDateTime> @ 14e741e60

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FDateTime>
          (UInterchangeBaseNode *param_1,FString *param_2,FDateTime *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FDateTime,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FDateTime,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FDateTime,void>::IsValid(&local_48)
    ;
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FDateTime,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74216a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74216a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74219e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74219e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FFrameNumber> @ 14e7421e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FFrameNumber>
          (UInterchangeBaseNode *param_1,FString *param_2,FFrameNumber *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FFrameNumber,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FFrameNumber,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameNumber,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameNumber,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7424ea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7424ea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74251e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74251e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FFrameRate> @ 14e742560

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FFrameRate>
          (UInterchangeBaseNode *param_1,FString *param_2,FFrameRate *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FFrameRate,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FFrameRate,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameRate,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameRate,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74286a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74286a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74289e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74289e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FFrameTime> @ 14e7428e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FFrameTime>
          (UInterchangeBaseNode *param_1,FString *param_2,FFrameTime *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FFrameTime,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FFrameTime,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameTime,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameTime,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e742bea:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e742bea;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e742c1e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e742c1e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FGuid> @ 14e742c60

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FGuid>
          (UInterchangeBaseNode *param_1,FString *param_2,FGuid *param_3,TOptional<FString> *param_4
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FGuid,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FGuid,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FGuid,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FGuid,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e742f6a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e742f6a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e742f9e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e742f9e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FLinearColor> @ 14e742fe0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FLinearColor>
          (UInterchangeBaseNode *param_1,FString *param_2,FLinearColor *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar3) {
    return false;
  }
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_28,param_2,local_res8[0],false);
  bVar3 = UInterchangeBaseNode::GetAttribute<FLinearColor>(param_1,&local_28,param_3);
  if (!bVar3) {
    bVar3 = false;
    goto LAB_14e7431d9;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  if (*piVar7 != -1) {
    pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *piVar7 = -1;
    (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_38,param_2,local_res8[0],true);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_38);
  if (cVar5 == '\0') {
LAB_14e7431c0:
    bVar3 = true;
  }
  else {
    local_48.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_48._8_8_ = 0;
    bVar3 = UInterchangeBaseNode::GetAttribute<FString>(param_1,&local_38,&local_48.TypedValue);
    if (bVar3) {
      if (&local_48 != &param_4->field0_0x0) {
        pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        _Src = local_48.TypedValue.Data.AllocatorInstance.Data;
        lVar6 = (longlong)local_48.TypedValue.Data.ArrayNum;
        (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(int *)((longlong)&param_4->field0_0x0 + 8) = local_48.TypedValue.Data.ArrayNum;
        if (local_48.TypedValue.Data.ArrayNum == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_48.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                     local_48.TypedValue.Data.ArrayNum,piVar7);
          memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,lVar6 * 2
                );
        }
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
      }
      if (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
      }
      goto LAB_14e7431c0;
    }
    if (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14e7431d9:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetUserDefinedAttribute<FOrientedBox> @ 14e743220

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FOrientedBox>
          (UInterchangeBaseNode *param_1,FString *param_2,FOrientedBox *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FOrientedBox,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FOrientedBox,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FOrientedBox,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FOrientedBox,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74352a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74352a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74355e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74355e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FRandomStream> @ 14e7435a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FRandomStream>
          (UInterchangeBaseNode *param_1,FString *param_2,FRandomStream *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FRandomStream,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FRandomStream,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FRandomStream,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FRandomStream,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7438aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7438aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7438de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7438de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FSoftObjectPath> @ 14e743920

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FSoftObjectPath>
          (UInterchangeBaseNode *param_1,FString *param_2,FSoftObjectPath *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FSoftObjectPath,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FSoftObjectPath,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FSoftObjectPath,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FSoftObjectPath,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e743c2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e743c2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e743c5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e743c5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FTimespan> @ 14e743ca0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FTimespan>
          (UInterchangeBaseNode *param_1,FString *param_2,FTimespan *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FTimespan,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FTimespan,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FTimespan,void>::IsValid(&local_48)
    ;
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FTimespan,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e743faa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e743faa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e743fde;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e743fde:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FTwoVectors> @ 14e744020

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FTwoVectors>
          (UInterchangeBaseNode *param_1,FString *param_2,FTwoVectors *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FTwoVectors,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FTwoVectors,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FTwoVectors,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FTwoVectors,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74432a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74432a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74435e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74435e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FVector2DHalf> @ 14e7443a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FVector2DHalf>
          (UInterchangeBaseNode *param_1,FString *param_2,FVector2DHalf *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FVector2DHalf,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FVector2DHalf,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FVector2DHalf,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FVector2DHalf,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7446aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7446aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7446de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7446de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e744720

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e744a2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e744a2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e744a5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e744a5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 14e744aa0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e744daa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e744daa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e744dde;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e744dde:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<short,TSizedDefaultAllocator<32>_>_> @ 14e744e20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<short,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<short,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74512a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74512a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74515e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74515e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14e7451a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7454aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7454aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7454de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7454de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e745520

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void>::Get(&local_48,param_3)
      ;
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74582a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74582a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74585e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74585e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14e7458a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e745baa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e745baa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e745bde;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e745bde:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e745c20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e745f2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e745f2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e745f5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e745f5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e745fa0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<double,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7462aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7462aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7462de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7462de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_> @ 14e746320

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74662a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74662a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74665e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74665e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_> @ 14e7466a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7469aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7469aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7469de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7469de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_> @ 14e746a20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e746d2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e746d2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e746d5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e746d5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e746da0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7470aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7470aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7470de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7470de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_> @ 14e747120

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
  local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
            ::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74742a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74742a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74745e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74745e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_> @ 14e7474a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
  local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
            ::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7477aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7477aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7477de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7477de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 14e747820

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e747b2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e747b2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e747b5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e747b5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> @ 14e747ba0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e747eaa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e747eaa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e747ede;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e747ede:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14e747f20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74822a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74822a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74825e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74825e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_> @ 14e7482a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7485aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7485aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7485de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7485de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_> @ 14e748620

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74892a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74892a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74895e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74895e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_> @ 14e7489a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e748caa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e748caa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e748cde;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e748cde:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_> @ 14e748d20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74902a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74902a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74905e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74905e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 14e7490a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7493aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7493aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7493de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7493de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14e749420

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74972a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74972a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74975e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74975e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_> @ 14e7497a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e749aaa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e749aaa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e749ade;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e749ade:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 14e749b20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e749e2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e749e2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e749e5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e749e5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_> @ 14e749ea0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74a1aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74a1aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74a1de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74a1de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e74a220

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74a52a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74a52a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74a55e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74a55e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> @ 14e74a5a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74a8aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74a8aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74a8de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74a8de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 14e74a920

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>
            ::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74ac2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74ac2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74ac5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74ac5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14e74aca0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74afaa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74afaa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74afde;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74afde:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14e74b020

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74b32a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74b32a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74b35e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74b35e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14e74b3a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74b6aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74b6aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74b6de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74b6de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14e74b720

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>
              ::Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74ba2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74ba2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74ba5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74ba5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e74baa0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74bdaa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74bdaa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74bdde;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74bdde:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e74be20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>::
            IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>::
              Get(&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74c12a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74c12a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74c15e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74c15e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_> @ 14e74c1a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74c4aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74c4aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74c4de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74c4de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_> @ 14e74c520

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FDateTime,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48)
    ;
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74c82a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74c82a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74c85e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74c85e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_> @ 14e74c8a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74cbaa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74cbaa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74cbde;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74cbde:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_> @ 14e74cc20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FFrameRate,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74cf2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74cf2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74cf5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74cf5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_> @ 14e74cfa0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FFrameTime,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74d2aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74d2aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74d2de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74d2de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14e74d320

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74d62a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74d62a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74d65e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74d65e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e74d6a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74d9aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74d9aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74d9de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74d9de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_> @ 14e74da20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74dd2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74dd2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74dd5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74dd5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_> @ 14e74dda0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FRandomStream,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74e0aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74e0aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74e0de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74e0de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_> @ 14e74e120

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74e42a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74e42a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74e45e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74e45e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_> @ 14e74e4a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FTimespan,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48)
    ;
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74e7aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74e7aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74e7de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74e7de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_> @ 14e74e820

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74eb2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74eb2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74eb5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74eb5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_> @ 14e74eba0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74eeaa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74eeaa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74eede;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74eede:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_> @ 14e74ef20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74f22a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74f22a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74f25e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74f25e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e74f2a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74f5aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74f5aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74f5de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74f5de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e74f620

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74f92a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74f92a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74f95e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74f95e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 14e74f9a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e74fcaa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e74fcaa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e74fcde;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e74fcde:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 14e74fd20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e75002a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e75002a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e75005e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e75005e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e7500a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
GetUserDefinedAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::
    GetAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::
            TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::
              TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7503aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7503aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7503de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7503de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FFloat16> @ 14e750420

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FFloat16>
          (UInterchangeBaseNode *param_1,FString *param_2,FFloat16 *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FFloat16,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FFloat16,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FFloat16,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FFloat16,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e75072a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e75072a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e75075e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e75075e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<FName> @ 14e7507a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FName>
          (UInterchangeBaseNode *param_1,FString *param_2,FName *param_3,TOptional<FString> *param_4
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<FName,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FName,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FName,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<FName,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e750aaa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e750aaa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e750ade;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e750ade:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<__int64> @ 14e750b20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<__int64>
          (UInterchangeBaseNode *param_1,FString *param_2,long64 *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<__int64,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<__int64,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<__int64,void>::IsValid(&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<__int64,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e750e2a:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e750e2a;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e750e5e;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e750e5e:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetUserDefinedAttribute<unsigned___int64> @ 14e750ea0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<unsigned___int64>
          (UInterchangeBaseNode *param_1,FString *param_2,ulong64 *param_3,
          TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 _Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAttributeStorageResult EVar8;
  longlong lVar9;
  int *piVar10;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  ForAnyElementType local_88;
  int local_7c;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<unsigned___int64,void> local_48;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0xa8,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  bVar5 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar5) {
    return false;
  }
  MakeUserDefinedPropertyKey(&local_68,param_2,local_res8[0],false);
  iVar4 = local_68.Key.Data.ArrayNum;
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  if (local_68.Key.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_88,local_68.Key.Data.ArrayNum,&local_7c);
    memcpy(local_88.Data,FVar3.Data,(longlong)iVar4 * 2);
  }
  cVar7 = (*pcVar2)(param_1,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FVar3.Data = local_68.Key.Data.AllocatorInstance.Data;
  if (cVar7 != '\0') {
    local_78.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Key.Data.ArrayMax = 0;
    if (local_68.Key.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Key.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                 local_68.Key.Data.ArrayNum,&local_78.Key.Data.ArrayMax);
      memcpy(local_78.Key.Data.AllocatorInstance.Data,FVar3.Data,
             (longlong)local_68.Key.Data.ArrayNum * 2);
    }
    if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned___int64,void>
              ((param_1->Attributes).Object,&local_48,&local_78);
    if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
    }
    bVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned___int64,void>::IsValid
                      (&local_48);
    if (bVar5) {
      EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned___int64,void>::Get
                        (&local_48,param_3);
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      if (EVar8 == Operation_Success) {
        if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
          pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
          (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
        }
        piVar10 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,param_2,local_res8[0],true);
        cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar7 == '\0') {
LAB_14e7511aa:
          bVar5 = true;
        }
        else {
          local_98.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          bVar5 = UInterchangeBaseNode::GetAttribute<FString>
                            (param_1,&local_58,&local_98.TypedValue);
          if (bVar5) {
            if (&local_98 != &param_4->field0_0x0) {
              pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
              lVar9 = (longlong)local_98.TypedValue.Data.ArrayNum;
              (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
              if (local_98.TypedValue.Data.ArrayNum == 0) {
                *piVar10 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                           local_98.TypedValue.Data.ArrayNum,piVar10);
                memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,
                       lVar9 * 2);
              }
              if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
              }
            }
            if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
            }
            goto LAB_14e7511aa;
          }
          if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14e7511de;
      }
    }
    else if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e7511de:
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

