// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// GetArchetype @ 14226ea20

UObject * __cdecl
FObjectArchetypeHelper::GetArchetype(UObject *param_1,IObjectArchetypePolicy *param_2)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FUObjectItem *pFVar6;
  FUObjectItem *pFVar7;
  UObjectBase *this;
  int iStackX_18;
  int iStackX_1c;
  FArchetypeInfo FStackX_20;
  
  if (!bEnableArchetypeCache) {
    FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    FVar1.Number = *(uint *)&param_1->field_0x1c;
    pUVar5 = FindArchetypeFromRequiredInfoImpl<0,1>
                       (*(UClass **)&param_1->field_0x10,*(UObject **)&param_1->field_0x20,FVar1,
                        *(EObjectFlags *)&param_1->field_0x8,false,param_2);
    return pUVar5;
  }
  if ((param_1 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x3ce,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UObject *)(*pcVar3)();
    return pUVar5;
  }
  FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::GetAnnotation
            (&ArchetypeAnnotation,(int)&iStackX_18);
  if (iStackX_18 != -1) {
    if ((iStackX_18 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar3)();
      return pUVar5;
    }
    pFVar7 = (FUObjectItem *)0x0;
    pFVar6 = pFVar7;
    if (iStackX_18 < GUObjectArray.ObjObjects.NumElements) {
      pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iStackX_18);
    }
    if (pFVar6->SerialNumber == iStackX_1c) {
      if ((iStackX_18 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UObject *)(*pcVar3)();
        return pUVar5;
      }
      if (((GUObjectArray.ObjObjects.NumElements <= iStackX_18) ||
          (pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iStackX_18),
          pFVar7 == (FUObjectItem *)0x0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArchetypeItem != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArchetype.cpp"
                             ,0x108,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UObject *)(*pcVar3)();
        return pUVar5;
      }
      this = (pFVar7->field1_0x8).Object;
      if (this == (UObjectBase *)0x0) {
        return (UObject *)0x0;
      }
      goto LAB_14226ec37;
    }
  }
  FVar2.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  FVar2.Number = *(uint *)&param_1->field_0x1c;
  this = (UObjectBase *)
         FindArchetypeFromRequiredInfoImpl<0,1>
                   (*(UClass **)&param_1->field_0x10,*(UObject **)&param_1->field_0x20,FVar2,
                    *(EObjectFlags *)&param_1->field_0x8,false,param_2);
  if (this == (UObjectBase *)0x0) {
    return (UObject *)0x0;
  }
  if ((*(longlong *)&param_1->field_0x20 == 0) ||
     ((*(uint *)(*(longlong *)&param_1->field_0x20 + 8) >> 10 & 1) == 0)) {
    FStackX_20.ArchetypeIndex = this->InternalIndex;
    FStackX_20.SerialNumber =
         FUObjectArray::AllocateSerialNumber(&GUObjectArray,FStackX_20.ArchetypeIndex);
    FUObjectAnnotationChunked<FArchetypeInfo,1,8192>::AddAnnotation
              (&ArchetypeAnnotation,(UObjectBase *)param_1,&FStackX_20);
  }
LAB_14226ec37:
  if (((GIsInitialLoad == false) && (bVar4 = UObjectBase::IsValidLowLevelFast(this,true), !bVar4))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Archetype == nullptr || GIsInitialLoad || Archetype->IsValidLowLevelFast()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArchetype.cpp"
                            ,0x113,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UObject *)(*pcVar3)();
    return pUVar5;
  }
  return (UObject *)this;
}

