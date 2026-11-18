// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// `dynamic_initializer_for_'_UrlsResponse_default_instance_'' @ 14129a260

void __cdecl _dynamic_initializer_for___UrlsResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___UrlsResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129a280

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_urls_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c235940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UrlsResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  ulong64 uVar6;
  Arena *pAVar7;
  undefined1 auStackY_88 [32];
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uVar1 = (uint)param_2[1]._padding_;
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            uVar6 = uStack_40 + 1;
            uVar4 = local_58._Ptr;
            if (0xfff < uVar6) {
              uVar4 = *(undefined8 *)(local_58._Ptr + -8);
              uVar6 = uStack_40 + 0x28;
              if ((char *)0x1f < local_58._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar4,uVar6);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            uVar6 = uStack_40 + 1;
            uVar4 = local_58._Ptr;
            if (0xfff < uVar6) {
              uVar4 = *(undefined8 *)(local_58._Ptr + -8);
              uVar6 = uStack_40 + 0x28;
              if ((char *)0x1f < local_58._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar4,uVar6);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar5,pAVar7);
      }
    }
    if ((uVar1 & 4) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[2]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            uVar6 = uStack_40 + 1;
            uVar4 = local_58._Ptr;
            if (0xfff < uVar6) {
              uVar4 = *(undefined8 *)(local_58._Ptr + -8);
              uVar6 = uStack_40 + 0x28;
              if ((char *)0x1f < local_58._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar4,uVar6);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[2]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 & 8) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 8;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 3),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 8;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 3),pbVar5,pAVar7);
      }
    }
    if ((uVar1 & 0x10) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x10;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[3]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x10;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[3]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 & 0x20) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[4]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[4]._padding_ & 3) == 0) {
          local_58._Ptr = (char *)0x0;
          local_58._8_8_ = 0;
          local_48 = 0;
          uStack_40 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Construct<1,char_const_*>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,""
                     ,0);
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x20;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 4),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58);
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x20;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 4),pbVar5,pAVar7);
      }
    }
    if ((uVar1 & 0x40) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[4]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[4]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x40;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[4]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58);
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x40;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[4]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((char)uVar1 < '\0') {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[5]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[5]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x80;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 5),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58);
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x80;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 5),pbVar5,pAVar7);
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[5]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[5]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x100;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[5]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58);
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x100;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[5]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[6]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[6]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x200;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 6),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58);
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x200;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 6),pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[6]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[6]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x400;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[6]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x400;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[6]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[7]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[7]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x800;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 7),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58);
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x800;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 7),pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[7]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[7]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x1000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[7]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x1000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[7]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[8]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[8]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x2000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 8),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x2000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 8),pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[8]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[8]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x4000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[8]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58);
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x4000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[8]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[9]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[9]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x8000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 9),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x8000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 9),pbVar5,pAVar7);
      }
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[9]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[9]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x10000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[9]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x10000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[9]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[10]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[10]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x20000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 10),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x20000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 10),pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[10]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[10]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x40000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[10]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x40000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[10]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[0xb]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[0xb]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x80000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 0xb),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x80000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 0xb),pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[0xb]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[0xb]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x100000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[0xb]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x100000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[0xb]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[0xc]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[0xc]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x200000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 0xc),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x200000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 0xc),pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[0xc]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[0xc]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x400000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[0xc]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x400000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[0xc]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[0xd]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[0xd]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x800000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 0xd),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x800000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 0xd),pbVar5,pAVar7);
      }
    }
  }
  if ((uVar1 & 0xf000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[0xd]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[0xd]._internal_metadata_.ptr_ & 3) == 0) {
          local_58._Ptr = (char *)0x0;
          local_58._8_8_ = 0;
          local_48 = 0;
          uStack_40 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Construct<1,char_const_*>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,""
                     ,0);
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x1000000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[0xd]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58);
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x1000000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[0xd]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[0xe]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[0xe]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x2000000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 0xe),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x2000000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 0xe),pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[0xe]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[0xe]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x4000000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_58._8_8_ = 0;
          local_58._Ptr = (char *)0x0;
          local_48 = uVar2;
          uStack_40 = uVar3;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[0xe]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x4000000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[0xe]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[0xf]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[0xf]._padding_ & 3) == 0) {
          local_58._Ptr = (char *)0x0;
          local_58._8_8_ = 0;
          local_48 = 0;
          uStack_40 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Construct<1,char_const_*>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,""
                     ,0);
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x8000000;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 0xf),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     pAVar7);
          if (0xf < uStack_40) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Deallocate_for_capacity((allocator<char> *)local_58._Buf,local_58._Ptr,uStack_40);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x8000000;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 0xf),pbVar5,pAVar7);
      }
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c236a60

void __thiscall UrlsResponse::Clear(UrlsResponse *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  undefined8 *puVar3;
  
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((char)uVar2 != '\0') {
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).refresh_jwt_token_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 2) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).front_end_server_addr_request_.tagged_ptr_.ptr_ &
               0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 4) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).get_server_list_info_request_.tagged_ptr_.ptr_ &
               0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 8) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).login_and_register_player_request_.tagged_ptr_.ptr_ &
               0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 0x10) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).players_by_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 0x20) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).players_by_uids_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 & 0x40) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).search_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((char)uVar2 < '\0') {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).pk_history_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
  }
  if ((uVar2 & 0xff00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).mail_list_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 9 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).mail_read_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 10 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).game_option_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0xb & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).update_game_option_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).minimap_marker_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).update_minimap_marker_.tagged_ptr_.ptr_ &
               0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0xe & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).get_breach_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0xf & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).accept_guild_member_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
               );
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
  }
  if ((uVar2 & 0xff0000) != 0) {
    if ((uVar2 >> 0x10 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).all_guild_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0x11 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).guild_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0x12 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).create_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0x13 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).update_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0x14 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).join_guild_member_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0x15 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).delete_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0x16 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).delete_guild_member_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
               );
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0x17 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).delegate_guild_master_.tagged_ptr_.ptr_ &
               0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
  }
  if ((uVar2 & 0xf000000) != 0) {
    if ((uVar2 >> 0x18 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).change_guild_member_role_.tagged_ptr_.ptr_ &
               0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0x19 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).guild_member_infos_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0x1a & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).all_guild_member_info_.tagged_ptr_.ptr_ &
               0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar2 >> 0x1b & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).get_guild_member_list_.tagged_ptr_.ptr_ &
               0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  this_01 = &this->_padding_;
  if ((*this_01 & 1) == 0) {
    return;
  }
  if ((*this_01 & 1) == 0) {
    this_00 = google::protobuf::internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*this_01 & 0xfffffffffffffffeU) + 8);
  }
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c236e30

ulong64 __thiscall UrlsResponse::ByteSizeLong(UrlsResponse *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((char)uVar1 != '\0') {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).refresh_jwt_token_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).front_end_server_addr_request_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).get_server_list_info_request_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 8) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).login_and_register_player_request_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 0x10) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).players_by_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
                 + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 0x20) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).players_by_uids_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
                 + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 0x40) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).search_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
                 + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((char)uVar1 < '\0') &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).pk_history_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).mail_list_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 9 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).mail_read_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 10 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).game_option_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 0xb & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).update_game_option_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 0xc & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).minimap_marker_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
                 + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 0xd & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).update_minimap_marker_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 0xe & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).get_breach_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 0xf & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).accept_guild_member_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if (((uVar1 >> 0x10 & 1) != 0) &&
       (pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(this->_impl_).all_guild_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc),
       (pbVar6->_Mypair)._Myval2._Mysize != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::StringSize(pbVar6);
      _Var7 = _Var7 + uVar4 + 2;
    }
    if (((uVar1 >> 0x11 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).guild_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 0x12 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).create_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 0x13 & 1) != 0) &&
       (pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(this->_impl_).update_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc),
       (pbVar6->_Mypair)._Myval2._Mysize != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::StringSize(pbVar6);
      _Var7 = _Var7 + uVar4 + 2;
    }
    if (((uVar1 >> 0x14 & 1) != 0) &&
       (pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(this->_impl_).join_guild_member_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                 ), (pbVar6->_Mypair)._Myval2._Mysize != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::StringSize(pbVar6);
      _Var7 = _Var7 + uVar4 + 2;
    }
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).delete_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 0x16 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).delete_guild_member_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 >> 0x17 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).delegate_guild_master_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
  }
  if ((uVar1 & 0xf000000) != 0) {
    if (((uVar1 >> 0x18 & 1) != 0) &&
       (pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(this->_impl_).change_guild_member_role_.tagged_ptr_.ptr_ &
                 0xfffffffffffffffc), (pbVar6->_Mypair)._Myval2._Mysize != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::StringSize(pbVar6);
      _Var7 = _Var7 + uVar4 + 2;
    }
    if (((uVar1 >> 0x19 & 1) != 0) &&
       (pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(this->_impl_).guild_member_infos_.tagged_ptr_.ptr_ &
                 0xfffffffffffffffc), (pbVar6->_Mypair)._Myval2._Mysize != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::StringSize(pbVar6);
      _Var7 = _Var7 + uVar4 + 2;
    }
    if (((uVar1 >> 0x1a & 1) != 0) &&
       (pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(this->_impl_).all_guild_member_info_.tagged_ptr_.ptr_ &
                 0xfffffffffffffffc), (pbVar6->_Mypair)._Myval2._Mysize != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::StringSize(pbVar6);
      _Var7 = _Var7 + uVar4 + 2;
    }
    if (((uVar1 >> 0x1b & 1) != 0) &&
       (pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(this->_impl_).get_guild_member_list_.tagged_ptr_.ptr_ &
                 0xfffffffffffffffc), (pbVar6->_Mypair)._Myval2._Mysize != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::StringSize(pbVar6);
      _Var7 = _Var7 + uVar4 + 2;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c2375a0

uchar * __thiscall
UrlsResponse::_InternalSerialize(UrlsResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uchar *puVar2;
  char *pcVar3;
  char *pcVar4;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).refresh_jwt_token_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x1e;
      local_38._Mydata = "UrlsResponse.refresh_jwt_token";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,1,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).front_end_server_addr_request_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x2a;
      local_38._Mydata = "UrlsResponse.front_end_server_addr_request";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,3,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).get_server_list_info_request_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x29;
      local_38._Mydata = "UrlsResponse.get_server_list_info_request";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,4,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).login_and_register_player_request_.tagged_ptr_.ptr_
                     & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x2e;
      local_38._Mydata = "UrlsResponse.login_and_register_player_request";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).players_by_name_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x1c;
      local_38._Mydata = "UrlsResponse.players_by_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,8,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).players_by_uids_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x1c;
      local_38._Mydata = "UrlsResponse.players_by_uids";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,9,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).search_nickname_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x1c;
      local_38._Mydata = "UrlsResponse.search_nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,10,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).pk_history_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x17;
      local_38._Mydata = "UrlsResponse.pk_history";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xb,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).mail_list_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x16;
      local_38._Mydata = "UrlsResponse.mail_list";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xd,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x200) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).mail_read_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x16;
      local_38._Mydata = "UrlsResponse.mail_read";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xe,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x400) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).game_option_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x18;
      local_38._Mydata = "UrlsResponse.game_option";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xf,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x800) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).update_game_option_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x1f;
      local_38._Mydata = "UrlsResponse.update_game_option";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x10,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x1000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).minimap_marker_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x1b;
      local_38._Mydata = "UrlsResponse.minimap_marker";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x11,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x2000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).update_minimap_marker_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x22;
      local_38._Mydata = "UrlsResponse.update_minimap_marker";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x12,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x4000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).get_breach_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x17;
      local_38._Mydata = "UrlsResponse.get_breach";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x13,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x8000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).accept_guild_member_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x20;
      local_38._Mydata = "UrlsResponse.accept_guild_member";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x1e,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x10000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).all_guild_info_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x1b;
      local_38._Mydata = "UrlsResponse.all_guild_info";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x1f,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x20000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).guild_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x17;
      local_38._Mydata = "UrlsResponse.guild_info";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x20,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x40000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).create_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x19;
      local_38._Mydata = "UrlsResponse.create_guild";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x21,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x80000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).update_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x19;
      local_38._Mydata = "UrlsResponse.update_guild";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x22,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x100000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).join_guild_member_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x1e;
      local_38._Mydata = "UrlsResponse.join_guild_member";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x23,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x200000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).delete_guild_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x19;
      local_38._Mydata = "UrlsResponse.delete_guild";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x24,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x400000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).delete_guild_member_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x20;
      local_38._Mydata = "UrlsResponse.delete_guild_member";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x25,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x800000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).delegate_guild_master_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x22;
      local_38._Mydata = "UrlsResponse.delegate_guild_master";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x26,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x1000000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).change_guild_member_role_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x25;
      local_38._Mydata = "UrlsResponse.change_guild_member_role";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x27,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x2000000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).guild_member_infos_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x1f;
      local_38._Mydata = "UrlsResponse.guild_member_infos";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x28,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x4000000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).all_guild_member_info_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x22;
      local_38._Mydata = "UrlsResponse.all_guild_member_info";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x29,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x8000000) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).get_guild_member_list_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_38._Mysize = 0x22;
      local_38._Mydata = "UrlsResponse.get_guild_member_list";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x2a,&local_38,param_1);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c238440

ClassData * __thiscall UrlsResponse::GetClassData(UrlsResponse *this)

{
  return (ClassData *)&UrlsResponse_class_data_;
}

// PlacementNew_ @ 14c238460

void * __cdecl UrlsResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  UrlsResponse *pUVar1;
  
  pUVar1 = UrlsResponse(param_2,param_3);
  return pUVar1;
}

// `scalar_deleting_destructor' @ 14c238480

void * __thiscall UrlsResponse::_scalar_deleting_destructor_(UrlsResponse *this,uint param_1)

{
  ~UrlsResponse(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// UrlsResponse @ 14c2384c0

UrlsResponse * __thiscall UrlsResponse::UrlsResponse(UrlsResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7UrlsResponse__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).refresh_jwt_token_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).front_end_server_addr_request_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).get_server_list_info_request_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).login_and_register_player_request_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).players_by_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).players_by_uids_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).search_nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).pk_history_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).mail_list_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).mail_read_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).game_option_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).update_game_option_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).minimap_marker_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).update_minimap_marker_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).get_breach_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).accept_guild_member_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).all_guild_info_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).guild_info_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).create_guild_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).update_guild_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).join_guild_member_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).delete_guild_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).delete_guild_member_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).delegate_guild_master_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).change_guild_member_role_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).guild_member_infos_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).all_guild_member_info_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).get_guild_member_list_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  return this;
}

// UrlsResponse @ 14c238590

UrlsResponse * __thiscall
UrlsResponse::UrlsResponse(UrlsResponse *this,Arena *param_1,UrlsResponse *param_2)

{
  ArenaStringPtr *pAVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [48];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7UrlsResponse__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).refresh_jwt_token_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).front_end_server_addr_request_;
  (this->_impl_).refresh_jwt_token_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).get_server_list_info_request_;
  (this->_impl_).front_end_server_addr_request_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).login_and_register_player_request_;
  (this->_impl_).get_server_list_info_request_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000020);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).players_by_name_;
  (this->_impl_).login_and_register_player_request_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_e8);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).players_by_uids_;
  (this->_impl_).players_by_name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_e8 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).search_nickname_;
  (this->_impl_).players_by_uids_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_d8);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).pk_history_;
  (this->_impl_).search_nickname_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_d8 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).mail_list_;
  (this->_impl_).pk_history_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_c8);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).mail_read_;
  (this->_impl_).mail_list_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_c8 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).game_option_;
  (this->_impl_).mail_read_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_c8 + 0x10));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).update_game_option_;
  (this->_impl_).game_option_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_c8 + 0x18));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).minimap_marker_;
  (this->_impl_).update_game_option_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_c8 + 0x20));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).update_minimap_marker_;
  (this->_impl_).minimap_marker_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_c8 + 0x28));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).get_breach_;
  (this->_impl_).update_minimap_marker_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_98);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).accept_guild_member_;
  (this->_impl_).get_breach_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_98 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).all_guild_info_;
  (this->_impl_).accept_guild_member_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_88);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).guild_info_;
  (this->_impl_).all_guild_info_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_88 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).create_guild_;
  (this->_impl_).guild_info_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_78);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).update_guild_;
  (this->_impl_).create_guild_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_78 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).join_guild_member_;
  (this->_impl_).update_guild_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_68);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).delete_guild_;
  (this->_impl_).join_guild_member_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_68 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).delete_guild_member_;
  (this->_impl_).delete_guild_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_58);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).delegate_guild_master_;
  (this->_impl_).delete_guild_member_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_58 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).change_guild_member_role_;
  (this->_impl_).delegate_guild_master_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_48);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).guild_member_infos_;
  (this->_impl_).change_guild_member_role_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_48 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).all_guild_member_info_;
  (this->_impl_).guild_member_infos_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_38);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).get_guild_member_list_;
  (this->_impl_).all_guild_member_info_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) == 0) {
    (this->_impl_).get_guild_member_list_.tagged_ptr_.ptr_ = pvVar3;
    return this;
  }
  TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                    (&pAVar1->tagged_ptr_,(Arena *)(local_38 + 8));
                    /* WARNING: Load size is inaccurate */
  (this->_impl_).get_guild_member_list_.tagged_ptr_.ptr_ = *TVar2.ptr_;
  return this;
}

// ~UrlsResponse @ 14c2389b0

void __thiscall UrlsResponse::~UrlsResponse(UrlsResponse *this)

{
  this->_padding_ = (longlong)&___7UrlsResponse__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).refresh_jwt_token_);
  google::protobuf::internal::ArenaStringPtr::Destroy
            (&(this->_impl_).front_end_server_addr_request_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).get_server_list_info_request_)
  ;
  google::protobuf::internal::ArenaStringPtr::Destroy
            (&(this->_impl_).login_and_register_player_request_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).players_by_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).players_by_uids_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).search_nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).pk_history_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mail_list_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mail_read_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).game_option_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).update_game_option_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).minimap_marker_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).update_minimap_marker_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).get_breach_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).accept_guild_member_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).all_guild_info_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).guild_info_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).create_guild_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).update_guild_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).join_guild_member_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).delete_guild_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).delete_guild_member_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).delegate_guild_master_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).change_guild_member_role_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).guild_member_infos_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).all_guild_member_info_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).get_guild_member_list_);
  return;
}

// CopyFrom @ 14c238b10

void __thiscall UrlsResponse::CopyFrom(UrlsResponse *this,UrlsResponse *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c238b50

Metadata * __thiscall UrlsResponse::GetMetadata(UrlsResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&UrlsResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c238b90

void __thiscall UrlsResponse::InternalSwap(UrlsResponse *this,UrlsResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).refresh_jwt_token_.tagged_ptr_.ptr_;
  (param_1->_impl_).refresh_jwt_token_.tagged_ptr_.ptr_ =
       (this->_impl_).refresh_jwt_token_.tagged_ptr_.ptr_;
  (this->_impl_).refresh_jwt_token_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).front_end_server_addr_request_.tagged_ptr_.ptr_;
  (param_1->_impl_).front_end_server_addr_request_.tagged_ptr_.ptr_ =
       (this->_impl_).front_end_server_addr_request_.tagged_ptr_.ptr_;
  (this->_impl_).front_end_server_addr_request_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).get_server_list_info_request_.tagged_ptr_.ptr_;
  (param_1->_impl_).get_server_list_info_request_.tagged_ptr_.ptr_ =
       (this->_impl_).get_server_list_info_request_.tagged_ptr_.ptr_;
  (this->_impl_).get_server_list_info_request_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).login_and_register_player_request_.tagged_ptr_.ptr_;
  (param_1->_impl_).login_and_register_player_request_.tagged_ptr_.ptr_ =
       (this->_impl_).login_and_register_player_request_.tagged_ptr_.ptr_;
  (this->_impl_).login_and_register_player_request_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).players_by_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).players_by_name_.tagged_ptr_.ptr_ =
       (this->_impl_).players_by_name_.tagged_ptr_.ptr_;
  (this->_impl_).players_by_name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).players_by_uids_.tagged_ptr_.ptr_;
  (param_1->_impl_).players_by_uids_.tagged_ptr_.ptr_ =
       (this->_impl_).players_by_uids_.tagged_ptr_.ptr_;
  (this->_impl_).players_by_uids_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).search_nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).search_nickname_.tagged_ptr_.ptr_ =
       (this->_impl_).search_nickname_.tagged_ptr_.ptr_;
  (this->_impl_).search_nickname_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).pk_history_.tagged_ptr_.ptr_;
  (param_1->_impl_).pk_history_.tagged_ptr_.ptr_ = (this->_impl_).pk_history_.tagged_ptr_.ptr_;
  (this->_impl_).pk_history_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).mail_list_.tagged_ptr_.ptr_;
  (param_1->_impl_).mail_list_.tagged_ptr_.ptr_ = (this->_impl_).mail_list_.tagged_ptr_.ptr_;
  (this->_impl_).mail_list_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).mail_read_.tagged_ptr_.ptr_;
  (param_1->_impl_).mail_read_.tagged_ptr_.ptr_ = (this->_impl_).mail_read_.tagged_ptr_.ptr_;
  (this->_impl_).mail_read_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).game_option_.tagged_ptr_.ptr_;
  (param_1->_impl_).game_option_.tagged_ptr_.ptr_ = (this->_impl_).game_option_.tagged_ptr_.ptr_;
  (this->_impl_).game_option_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).update_game_option_.tagged_ptr_.ptr_;
  (param_1->_impl_).update_game_option_.tagged_ptr_.ptr_ =
       (this->_impl_).update_game_option_.tagged_ptr_.ptr_;
  (this->_impl_).update_game_option_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).minimap_marker_.tagged_ptr_.ptr_;
  (param_1->_impl_).minimap_marker_.tagged_ptr_.ptr_ =
       (this->_impl_).minimap_marker_.tagged_ptr_.ptr_;
  (this->_impl_).minimap_marker_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).update_minimap_marker_.tagged_ptr_.ptr_;
  (param_1->_impl_).update_minimap_marker_.tagged_ptr_.ptr_ =
       (this->_impl_).update_minimap_marker_.tagged_ptr_.ptr_;
  (this->_impl_).update_minimap_marker_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).get_breach_.tagged_ptr_.ptr_;
  (param_1->_impl_).get_breach_.tagged_ptr_.ptr_ = (this->_impl_).get_breach_.tagged_ptr_.ptr_;
  (this->_impl_).get_breach_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).accept_guild_member_.tagged_ptr_.ptr_;
  (param_1->_impl_).accept_guild_member_.tagged_ptr_.ptr_ =
       (this->_impl_).accept_guild_member_.tagged_ptr_.ptr_;
  (this->_impl_).accept_guild_member_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).all_guild_info_.tagged_ptr_.ptr_;
  (param_1->_impl_).all_guild_info_.tagged_ptr_.ptr_ =
       (this->_impl_).all_guild_info_.tagged_ptr_.ptr_;
  (this->_impl_).all_guild_info_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).guild_info_.tagged_ptr_.ptr_;
  (param_1->_impl_).guild_info_.tagged_ptr_.ptr_ = (this->_impl_).guild_info_.tagged_ptr_.ptr_;
  (this->_impl_).guild_info_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).create_guild_.tagged_ptr_.ptr_;
  (param_1->_impl_).create_guild_.tagged_ptr_.ptr_ = (this->_impl_).create_guild_.tagged_ptr_.ptr_;
  (this->_impl_).create_guild_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).update_guild_.tagged_ptr_.ptr_;
  (param_1->_impl_).update_guild_.tagged_ptr_.ptr_ = (this->_impl_).update_guild_.tagged_ptr_.ptr_;
  (this->_impl_).update_guild_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).join_guild_member_.tagged_ptr_.ptr_;
  (param_1->_impl_).join_guild_member_.tagged_ptr_.ptr_ =
       (this->_impl_).join_guild_member_.tagged_ptr_.ptr_;
  (this->_impl_).join_guild_member_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).delete_guild_.tagged_ptr_.ptr_;
  (param_1->_impl_).delete_guild_.tagged_ptr_.ptr_ = (this->_impl_).delete_guild_.tagged_ptr_.ptr_;
  (this->_impl_).delete_guild_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).delete_guild_member_.tagged_ptr_.ptr_;
  (param_1->_impl_).delete_guild_member_.tagged_ptr_.ptr_ =
       (this->_impl_).delete_guild_member_.tagged_ptr_.ptr_;
  (this->_impl_).delete_guild_member_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).delegate_guild_master_.tagged_ptr_.ptr_;
  (param_1->_impl_).delegate_guild_master_.tagged_ptr_.ptr_ =
       (this->_impl_).delegate_guild_master_.tagged_ptr_.ptr_;
  (this->_impl_).delegate_guild_master_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).change_guild_member_role_.tagged_ptr_.ptr_;
  (param_1->_impl_).change_guild_member_role_.tagged_ptr_.ptr_ =
       (this->_impl_).change_guild_member_role_.tagged_ptr_.ptr_;
  (this->_impl_).change_guild_member_role_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).guild_member_infos_.tagged_ptr_.ptr_;
  (param_1->_impl_).guild_member_infos_.tagged_ptr_.ptr_ =
       (this->_impl_).guild_member_infos_.tagged_ptr_.ptr_;
  (this->_impl_).guild_member_infos_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).all_guild_member_info_.tagged_ptr_.ptr_;
  (param_1->_impl_).all_guild_member_info_.tagged_ptr_.ptr_ =
       (this->_impl_).all_guild_member_info_.tagged_ptr_.ptr_;
  (this->_impl_).all_guild_member_info_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).get_guild_member_list_.tagged_ptr_.ptr_;
  (param_1->_impl_).get_guild_member_list_.tagged_ptr_.ptr_ =
       (this->_impl_).get_guild_member_list_.tagged_ptr_.ptr_;
  (this->_impl_).get_guild_member_list_.tagged_ptr_.ptr_ = pvVar3;
  return;
}

// `dynamic_atexit_destructor_for_'_UrlsResponse_default_instance_'' @ 150443cf0

void __cdecl _dynamic_atexit_destructor_for___UrlsResponse_default_instance___(void)

{
  return;
}

