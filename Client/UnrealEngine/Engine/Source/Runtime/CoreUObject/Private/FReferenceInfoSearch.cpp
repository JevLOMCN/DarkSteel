// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// HandleObjectReference @ 1421d13d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::FReferenceInfoSearch::HandleObjectReference
          (FReferenceInfoSearch *this,FWorkerContext *param_1,int param_2,UObject *param_3,
          UObject *param_4,FMemberId param_5,EOrigin param_6)

{
  FGCObjectInfo **ppFVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>
  *pTVar3;
  FGCObject *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TTuple<UObject_const_*,FGCObjectInfo_*> *pTVar10;
  FGCObjectInfo *pFVar11;
  FString *pFVar12;
  uint *puVar13;
  undefined1 *puVar14;
  FGCObjectInfo *this_00;
  uint uVar15;
  FString local_88;
  FScriptContainerElement *local_78 [2];
  FString local_68;
  TReferenceInfo<FGCObjectInfo> local_58;
  
  if ((param_3 != (UObject *)0x0) && (param_3 != param_4)) {
    uVar7 = *(uint *)&param_3->field_0xc;
    if (param_4 == (UObject *)0x0) {
      param_4 = (UObject *)FGCObject::GGCObjectReferencer;
    }
    pTVar3 = this->ReferenceInfoMap;
    if (((int)uVar7 < 0) || (GUObjectArray.ObjObjects.NumElements <= (int)uVar7)) {
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
    }
    if (*(int *)&pTVar3->field_0x8 != *(int *)&pTVar3->field_0x34) {
      puVar14 = *(undefined1 **)&pTVar3->field_0x40;
      if (*(undefined1 **)&pTVar3->field_0x40 == (undefined1 *)0x0) {
        puVar14 = &pTVar3->field_0x38;
      }
      uVar15 = *(uint *)(puVar14 + (ulonglong)(*(int *)&pTVar3->field_0x48 - 1U & uVar7) * 4);
      if (uVar15 != 0xffffffff) {
        do {
          puVar13 = (uint *)((longlong)(int)uVar15 * 0x40 + *(longlong *)pTVar3);
          if (*puVar13 == uVar7) {
            pFVar11 = (FGCObjectInfo *)0x0;
            this_00 = (FGCObjectInfo *)(puVar13 + 2);
            if (puVar13 == (uint *)0x0) {
              this_00 = pFVar11;
            }
            if (this_00 == (FGCObjectInfo *)0x0) {
              return;
            }
            if (this_00->Name != (FName)0x0) {
              return;
            }
            pTVar10 = TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
                              *)this->ObjectToInfoMap,param_3);
            if (pTVar10 != (TTuple<UObject_const_*,FGCObjectInfo_*> *)0x0) {
              pFVar11 = *(FGCObjectInfo **)&pTVar10->field_0x8;
            }
            local_58.StackFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_58.StackFrames.ArrayNum = 0;
            local_58.StackFrames.ArrayMax = 0;
            local_58.Type = Unknown;
            local_58.ReferencerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_58.ReferencerName.Data.ArrayNum = 0;
            local_58.ReferencerName.Data.ArrayMax = 0;
            local_58.Object = pFVar11;
            FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>::operator=
                      ((TReferenceInfo<FGCObjectInfo> *)this_00,&local_58);
            if (local_58.ReferencerName.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.ReferencerName.Data.AllocatorInstance.Data);
            }
            if (local_58.StackFrames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.StackFrames.AllocatorInstance.Data);
            }
            if (param_5.Index != 0 || param_5.MemberlessId != 1) {
              pFVar12 = GC::FDebugSchemaStackNode::ToString(param_1->SchemaStack,&local_88);
              ::FString::operator=((FString *)&this_00->ClusterRootIndex,pFVar12);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              this_00->Flags = Property;
              return;
            }
            ppFVar1 = &this_00->Outer;
            piVar2 = (int *)((longlong)&this_00->Outer + 4);
            this_00->Flags = AddReferencedObjects;
            Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0x1e,(ForAnyElementType *)&this_00->Class,(int *)ppFVar1,piVar2);
            uVar7 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                              ((ulong64 *)
                               (((TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
                                &this_00->Class)->AllocatorInstance).Data,*(uint *)&this_00->Outer,
                               (void *)0x0);
            iVar9 = *(int *)ppFVar1;
            if (iVar9 < (int)uVar7) {
              iVar8 = Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,uVar7 - iVar9,(ForAnyElementType *)&this_00->Class,
                                 (int *)ppFVar1,piVar2);
              memset((((TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)&this_00->Class)->
                     AllocatorInstance).Data + (longlong)iVar8 * 8,0,
                     (longlong)(int)(uVar7 - iVar9) << 3);
            }
            else {
              if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
              }
              if ((int)uVar7 < iVar9) {
                uVar15 = iVar9 - uVar7;
                if (((int)(uVar15 | uVar7) < 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (uVar15 != 0) {
                  _Dst = (((TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)&this_00->Class)
                         ->AllocatorInstance).Data + (longlong)(int)uVar7 * 8;
                  iVar9 = (*(int *)ppFVar1 - uVar15) - uVar7;
                  if (iVar9 != 0) {
                    memmove(_Dst,_Dst + (longlong)(int)uVar15 * 8,(longlong)iVar9 << 3);
                  }
                  *(uint *)ppFVar1 = *(int *)ppFVar1 - uVar15;
                  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,(ForAnyElementType *)&this_00->Class,*(int *)ppFVar1,piVar2);
                }
              }
            }
            if (FGCObject::GGCObjectReferencer == (UGCObjectReferencer *)0x0) {
              if ((UGCObjectReferencer *)param_4 == (UGCObjectReferencer *)0x0) {
                return;
              }
            }
            else if (((UGCObjectReferencer *)param_4 == (UGCObjectReferencer *)0x0) ||
                    ((UGCObjectReferencer *)param_4 == FGCObject::GGCObjectReferencer)) {
              bVar6 = UGCObjectReferencer::GetReferencerName
                                (FGCObject::GGCObjectReferencer,param_3,
                                 (FString *)&this_00->ClusterRootIndex,true);
              if (bVar6) {
                return;
              }
              pFVar4 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
              if (pFVar4 == (FGCObject *)0x0) {
                return;
              }
              pFVar12 = (FString *)(**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,local_78);
              ::FString::operator=((FString *)&this_00->ClusterRootIndex,pFVar12);
              goto LAB_1421d171e;
            }
            pFVar12 = UObjectBaseUtility::GetFullName
                                ((UObjectBaseUtility *)param_4,&local_68,(UObject *)0x0,None);
            ::FString::operator=((FString *)&this_00->ClusterRootIndex,pFVar12);
            local_78[0] = local_68.Data.AllocatorInstance.Data;
LAB_1421d171e:
            if (local_78[0] == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_78[0]);
            return;
          }
          uVar15 = puVar13[0xe];
        } while (uVar15 != 0xffffffff);
      }
    }
  }
  return;
}

