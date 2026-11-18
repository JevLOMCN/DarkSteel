// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// AddNamedValue @ 146f34990

void __cdecl
FEQSParamsExporter::AddNamedValue
          (UObject *param_1,FName *param_2,EAIParamType param_3,float param_4,
          TArray<FAIDynamicParam,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_6)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  FAIDynamicParam *pFVar7;
  ulonglong uVar8;
  FAIDynamicParam local_78;
  
  if ((*param_2 == (FName)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParamName.IsNone() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQuery.cpp"
                         ,0x1e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = param_5->ArrayNum;
  uVar6 = 0;
  uVar8 = uVar6;
  if (0 < iVar4) {
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(FName *)((param_5->AllocatorInstance).Data + uVar8) == *param_2) goto LAB_146f34bcd;
      iVar4 = param_5->ArrayNum;
      uVar6 = (ulonglong)(uVar5 + 1);
      uVar8 = uVar8 + 0x38;
    } while ((int)(uVar5 + 1) < iVar4);
  }
  local_78.BBKey.bNoneIsAllowedValue = 1;
  local_78.bAllowBBKey = '\x01';
  pFVar7 = (FAIDynamicParam *)(param_5->AllocatorInstance).Data;
  local_78.ParamName.ComparisonIndex.Value = 0;
  local_78.ParamName.Number = 0;
  local_78.BBKey.AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.BBKey.AllowedTypes.ArrayNum = 0;
  local_78.BBKey.AllowedTypes.ArrayMax = 0;
  local_78.BBKey.SelectedKeyName.ComparisonIndex.Value = 0;
  local_78.BBKey.SelectedKeyName.Number = 0;
  local_78.BBKey.SelectedKeyType.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
  local_78.BBKey.SelectedKeyID = 0xffff;
  local_78.ParamType = Float;
  local_78.Value = 0.0;
  if (((pFVar7 <= &local_78) && (&local_78 < pFVar7 + param_5->ArrayMax)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = param_5->ArrayNum;
  if (uVar3 == param_5->ArrayMax) {
    uVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&param_5->AllocatorInstance,&param_5->ArrayMax);
    param_5->ArrayNum = uVar3;
  }
  param_5->ArrayNum = uVar3 + 1;
  FAIDynamicParam::FAIDynamicParam
            ((FAIDynamicParam *)((param_5->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x38),
             &local_78);
  uVar5 = 0;
  if ((int)uVar3 < param_5->ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar7 = (FAIDynamicParam *)((param_5->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x38);
  if (local_78.BBKey.AllowedTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.BBKey.AllowedTypes.AllocatorInstance.Data);
  }
  pFVar7->ParamName = *param_2;
  pFVar7->Value = param_4;
  pFVar7->ParamType = param_3;
  FAIDynamicParam::ConfigureBBKey(pFVar7,param_1);
LAB_146f34bcd:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(param_6,param_2);
  return;
}

// AddNamedValuesFromObject @ 146f34c10

void __cdecl
FEQSParamsExporter::AddNamedValuesFromObject
          (UObject *param_1,UEnvQueryNode *param_2,
          TArray<FAIDynamicParam,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4)

{
  FProperty *this;
  UEnvQueryNode *pUVar1;
  code *pcVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  FName *pFVar14;
  int iVar15;
  EAIParamType EVar16;
  float fVar17;
  FString local_70 [3];
  
  fVar5 = __real_bf800000;
  fVar4 = __real_3f800000;
  this = *(FProperty **)(param_2->_padding_ + 0x70);
  do {
    if (this == (FProperty *)0x0) {
      return;
    }
    if ((*(uint *)(this->_padding_ + 0x18) >> 0x15 & 1) == 0) {
LAB_146f34de2:
      if ((this != (FProperty *)0x0) && ((*(uint *)(this->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
        (**(code **)(this->_padding_ + 0x68))(this,local_70,0,0);
        iVar7 = ::FString::Find(local_70,L"FAIDataProviderIntValue",0x17,IgnoreCase,FromStart,-1);
        if (iVar7 == -1) {
          iVar7 = ::FString::Find(local_70,L"FAIDataProviderFloatValue",0x19,IgnoreCase,FromStart,-1
                                 );
          if (iVar7 == -1) {
            iVar7 = ::FString::Find(local_70,L"FAIDataProviderBoolValue",0x18,IgnoreCase,FromStart,
                                    -1);
            if ((iVar7 == -1) ||
               (pvVar11 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                    (this,(UObject *)param_2,0), pvVar11 == (void *)0x0))
            goto LAB_146f34fd0;
            if (*(longlong *)((longlong)pvVar11 + 0x10) == 0) {
LAB_146f34f9a:
              lVar12 = 0;
            }
            else {
              pUVar8 = UAIDataProvider_QueryParams::StaticClass();
              bVar6 = FObjectPtr::IsA((FObjectPtr *)((longlong)pvVar11 + 0x10),pUVar8);
              if (!bVar6) goto LAB_146f34f9a;
              lVar12 = *(longlong *)((longlong)pvVar11 + 0x10);
            }
            if ((lVar12 == 0) ||
               (pFVar14 = (FName *)(lVar12 + 0x28), *(longlong *)(lVar12 + 0x28) == 0))
            goto LAB_146f34fd0;
            fVar17 = fVar5;
            if (*(char *)((longlong)pvVar11 + 0x30) != '\0') {
              fVar17 = fVar4;
            }
            EVar16 = Bool;
            goto LAB_146f34fbe;
          }
          pvVar11 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,(UObject *)param_2,0);
          if (pvVar11 != (void *)0x0) {
            if (*(longlong *)((longlong)pvVar11 + 0x10) == 0) {
LAB_146f34f0c:
              lVar12 = 0;
            }
            else {
              pUVar8 = UAIDataProvider_QueryParams::StaticClass();
              bVar6 = FObjectPtr::IsA((FObjectPtr *)((longlong)pvVar11 + 0x10),pUVar8);
              if (!bVar6) goto LAB_146f34f0c;
              lVar12 = *(longlong *)((longlong)pvVar11 + 0x10);
            }
            if ((lVar12 != 0) &&
               (pFVar14 = (FName *)(lVar12 + 0x28), *(longlong *)(lVar12 + 0x28) != 0)) {
              fVar17 = *(float *)((longlong)pvVar11 + 0x30);
              EVar16 = Float;
              goto LAB_146f34fbe;
            }
          }
        }
        else {
          pvVar11 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,(UObject *)param_2,0);
          if (pvVar11 == (void *)0x0) goto LAB_146f34fd0;
          if (*(longlong *)((longlong)pvVar11 + 0x10) == 0) {
LAB_146f34e7a:
            lVar12 = 0;
          }
          else {
            pUVar8 = UAIDataProvider_QueryParams::StaticClass();
            bVar6 = FObjectPtr::IsA((FObjectPtr *)((longlong)pvVar11 + 0x10),pUVar8);
            if (!bVar6) goto LAB_146f34e7a;
            lVar12 = *(longlong *)((longlong)pvVar11 + 0x10);
          }
          if ((lVar12 != 0) &&
             (pFVar14 = (FName *)(lVar12 + 0x28), *(longlong *)(lVar12 + 0x28) != 0)) {
            fVar17 = *(float *)((longlong)pvVar11 + 0x30);
            EVar16 = Int;
LAB_146f34fbe:
            AddNamedValue(param_1,pFVar14,EVar16,fVar17,param_3,param_4);
          }
        }
LAB_146f34fd0:
        if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      lVar12 = this[1]._padding_;
      if ((((lVar12 != 0) && ((*(uint *)(*(longlong *)(lVar12 + 8) + 0x18) >> 0x1a & 1) != 0)) &&
          (lVar12 = *(longlong *)(lVar12 + 0x70), lVar12 != 0)) &&
         (pUVar8 = UEnvQueryNode::StaticClass(), pUVar8 != (UClass *)0x0)) {
        iVar7 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar12 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          puVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,(UObject *)param_2,0);
          lVar3 = this[1]._padding_;
          (**(code **)(*(longlong *)this[1]._padding_ + 0x168))();
          lVar12 = this[1]._padding_;
          iVar7 = *(int *)(lVar12 + 0x34);
          if ((iVar7 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((lVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          for (iVar15 = 0; iVar15 < (int)puVar9[1]; iVar15 = iVar15 + 1) {
            if ((int)puVar9[1] != 0) {
              uVar13 = *puVar9;
              if (((lVar3 & 1) != 0) && ((uVar13 & 1) != 0)) {
                uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)puVar9;
              }
              puVar10 = (undefined8 *)((longlong)iVar15 * (longlong)iVar7 + uVar13);
              if ((puVar10 != (undefined8 *)0x0) &&
                 (pUVar1 = (UEnvQueryNode *)*puVar10, pUVar1 != (UEnvQueryNode *)0x0)) {
                AddNamedValuesFromObject(param_1,pUVar1,param_3,param_4);
              }
            }
          }
          goto LAB_146f34de2;
        }
      }
    }
    this = this->PropertyLinkNext;
  } while( true );
}

// HasNamedValue @ 146f5afe0

bool __cdecl
FEQSParamsExporter::HasNamedValue
          (FName *param_1,TArray<FAIDynamicParam,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = param_2->ArrayNum;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar7) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(FName *)((param_2->AllocatorInstance).Data + lVar6) == *param_1) {
        return true;
      }
      iVar7 = param_2->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x38;
    } while ((int)uVar5 < iVar7);
  }
  return false;
}

