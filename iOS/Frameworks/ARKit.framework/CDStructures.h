//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ARFLCompoundSpring {
    struct ARFLSimpleSpringState state;
    struct ARFLSimpleSpring stiffness;
    struct ARFLSimpleSpring damping;
    struct ARFLSimpleSpring dampingRatio;
    struct ARFLSimpleSpring response;
    struct ARFLSimpleSpring anchor;
    _Bool usesDampingRatioResponse;
};

struct ARFLSimpleSpring {
    struct ARFLSimpleSpringState state;
    double mass;
    double stiffness;
    double damping;
    double anchor;
    double stablePositionThreshold;
    double stableVelocityThreshold;
};

struct ARFLSimpleSpringState {
    double position;
    double velocity;
};

struct ARFLSpringParameters {
    double dampingRatio;
    double dampingRatioSmoothing;
    double response;
    double responseSmoothing;
};

struct ARLabHistogram {
    float _field1;
    struct array<std::__1::array<std::__1::array<float, 8>, 8>, 4> _field2;
};

struct ARTexturedPlane;

struct BodyRegistration;

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct ExponentialSmoother<cva::Matrix<float, 9, 1, false>> {
    struct optional<cva::Matrix<float, 9, 1, false>> state;
};

struct ExponentialSmoother<float> {
    struct optional<float> state;
};

struct FaceTrackingData;

struct FacialLightEstimation {
    struct Matrix<float, 0, 1, false> m_validSampleIntensities;
    struct vector<int, std::__1::allocator<int>> m_validChromaSampleIDS;
    struct vector<int, std::__1::allocator<int>> m_sampleIndices_all;
    struct Matrix<float, 0, 0, false> m_validRtfs;
    struct shared_ptr<arkit::PrecomputedFaceData> m_precomputedFaceData;
    struct ExponentialSmoother<cva::Matrix<float, 9, 1, false>> m_smoother;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> m_inliers;
};

struct Human {
    struct map<int, float __attribute__((ext_vector_type(2))), std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, float __attribute__((ext_vector_type(2)))>>> _field1;
    struct array<float, 34> _field2;
    array_d2feeb34 _field3;
    struct CGRect _field4;
};

struct KeyMapBuffer<const void *, std::__1::vector<unsigned char, std::__1::allocator<unsigned char>>>;

struct Matrix<float, 0, 0, false> {
    float *m_data;
    unsigned long long m_capacity;
    unsigned int m_rows;
    unsigned int m_cols;
};

struct Matrix<float, 0, 1, false> {
    float *m_data;
    unsigned long long m_capacity;
    unsigned int m_rows;
};

struct Matrix<float, 2, 16, false> {
    float m_data[32];
};

struct Matrix<float, 3, 16, false> {
    float m_data[48];
};

struct Matrix<float, 3, 3, false> {
    float m_data[9];
};

struct Matrix<float, 9, 1, false> {
    float m_data[9];
};

struct PrecomputedFaceData;

struct RegistrationData {
    struct Matrix<float, 2, 16, false> image_points;
    struct Matrix<float, 3, 16, false> lifted_points;
    struct Matrix<float, 3, 3, false> intrinsics;
    struct SE3GroupStorage<float, cva::Matrix<float, 4, 4, false>> cam_from_obj;
    struct SE3GroupStorage<float, cva::Matrix<float, 4, 4, false>> cam_from_vio;
    double timestamp_obj;
    double timestamp_vio;
};

struct RobustExpFilter<float>;

struct SE3GroupStorage<float, cva::Matrix<float, 4, 4, false>> {
    float m_data[16];
};

struct ScaleCorrection;

struct SkeletonJointFilter<float> {
    vector_7584168e m_values;
    vector_7584168e m_speed;
    struct vector<double, std::__1::allocator<double>> m_timestamps;
    float m_smoothing;
    float m_lowest_threshold;
    float m_low_threshold;
    float m_high_threshold;
    float m_highest_threshold;
    float m_temporal_smoothing;
    float m_prediction_factor;
    float m_min_smoothing;
    float m_up_slope;
    float m_down_slope;
    float m_temporal_slope;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> {
    void *__value_;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct array<arkit::btr::RegistrationData, 5> {
    struct RegistrationData __elems_[5];
};

struct array<float, 2> {
    float __elems_[2];
};

struct array<float, 32> {
    float __elems_[32];
};

struct array<float, 34> {
    float _field1[34];
};

struct array<float, 8> {
    float _field1[8];
};

struct array<std::__1::array<float, 8>, 8> {
    struct array<float, 8> _field1[8];
};

struct array<std::__1::array<std::__1::array<float, 8>, 8>, 4> {
    struct array<std::__1::array<float, 8>, 8> _field1[4];
};

struct array<unsigned char, 17> {
    unsigned char _field1[17];
};

struct basic_filebuf<char, std::__1::char_traits<char>> {
    CDUnknownFunctionPointerType *_vptr$basic_streambuf;
    struct locale __loc_;
    char *__binp_;
    char *__ninp_;
    char *__einp_;
    char *__bout_;
    char *__nout_;
    char *__eout_;
    char *__extbuf_;
    char *__extbufnext_;
    char *__extbufend_;
    char __extbuf_min_[8];
    unsigned long long __ebs_;
    char *__intbuf_;
    unsigned long long __ibs_;
    struct __sFILE *__file_;
    struct codecvt<char, char, __mbstate_t> *__cv_;
    CDUnion_96f6e1fe __st_;
    CDUnion_96f6e1fe __st_last_;
    unsigned int __om_;
    unsigned int __cm_;
    _Bool __owns_eb_;
    _Bool __owns_ib_;
    _Bool __always_noconv_;
};

struct basic_ofstream<char, std::__1::char_traits<char>> {
    CDUnknownFunctionPointerType *_vptr$basic_ostream;
    struct basic_filebuf<char, std::__1::char_traits<char>> __sb_;
    CDUnknownFunctionPointerType *_vptr$ios_base;
    unsigned int __fmtflags_;
    long long __precision_;
    long long __width_;
    unsigned int __rdstate_;
    unsigned int __exceptions_;
    void *__rdbuf_;
    void *__loc_;
    CDUnknownFunctionPointerType *__fn_;
    int *__index_;
    unsigned long long __event_size_;
    unsigned long long __event_cap_;
    long long *__iarray_;
    unsigned long long __iarray_size_;
    unsigned long long __iarray_cap_;
    void **__parray_;
    unsigned long long __parray_size_;
    unsigned long long __parray_cap_;
    struct basic_ostream<char, std::__1::char_traits<char>> *__tie_;
    int __fill_;
};

struct basic_ostream<char, std::__1::char_traits<char>>;

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct codecvt<char, char, __mbstate_t>;

struct locale {
    struct __imp *__locale_;
};

struct map<int, float __attribute__((ext_vector_type(2))), std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, float __attribute__((ext_vector_type(2)))>>> {
    struct __tree<std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__1::__map_value_compare<int, std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct optional<cva::Matrix<float, 9, 1, false>> {
    union {
        char __null_state_;
        struct Matrix<float, 9, 1, false> __val_;
    } ;
    _Bool __engaged_;
};

struct optional<float> {
    union {
        char __null_state_;
        float __val_;
    } ;
    _Bool __engaged_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long>> {
    struct __tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<unsigned long long>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct shared_ptr<arkit::FaceTrackingData> {
    struct FaceTrackingData *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<arkit::KeyMapBuffer<const void *, std::__1::vector<unsigned char, std::__1::allocator<unsigned char>>>> {
    struct KeyMapBuffer<const void *, std::__1::vector<unsigned char, std::__1::allocator<unsigned char>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<arkit::PrecomputedFaceData> {
    struct PrecomputedFaceData *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<arkit::RobustExpFilter<float>> {
    struct RobustExpFilter<float> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<arkit::btr::BodyRegistration> {
    struct BodyRegistration *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<arkit::btr::ScaleCorrection> {
    struct ScaleCorrection *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct vImage_Buffer {
    void *data;
    unsigned long long height;
    unsigned long long width;
    unsigned long long rowBytes;
};

struct vector<ARCoachingControlPoint, std::__1::allocator<ARCoachingControlPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ARCoachingControlPoint *, std::__1::allocator<ARCoachingControlPoint>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<ARCoachingPatchData, std::__1::allocator<ARCoachingPatchData>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ARCoachingPatchData *, std::__1::allocator<ARCoachingPatchData>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<ARPatch, std::__1::allocator<ARPatch>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ARPatch *, std::__1::allocator<ARPatch>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<ARSRT, std::__1::allocator<ARSRT>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ARSRT *, std::__1::allocator<ARSRT>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane>> {
    struct ARTexturedPlane *__begin_;
    struct ARTexturedPlane *__end_;
    struct __compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane>> {
        struct ARTexturedPlane *__value_;
    } __end_cap_;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__value_;
    } __end_cap_;
};

struct vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<espresso_buffer_t *, std::__1::allocator<espresso_buffer_t>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
        void *__value_;
    } __end_cap_;
};

struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__value_;
    } __end_cap_;
};

struct vector<short, std::__1::allocator<short>> {
    short *__begin_;
    short *__end_;
    struct __compressed_pair<short *, std::__1::allocator<short>> {
        short *__value_;
    } __end_cap_;
};

struct vector<simd_float4x4, std::__1::allocator<simd_float4x4>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<simd_float4x4 *, std::__1::allocator<simd_float4x4>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

struct vector<unsigned short, std::__1::allocator<unsigned short>> {
    unsigned short *__begin_;
    unsigned short *__end_;
    struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short>> {
        unsigned short *__value_;
    } __end_cap_;
};

#if 0
// Names with conflicting types:
typedef struct ?<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> {
    struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> **_field1;
} vector_35647d6b;

typedef struct ?<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))>> __end_cap_;
} vector_1cb3ea33;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    float coefficients[9];
} CDStruct_9c26ff66;

typedef struct {
    void *_field1;
    void *_field2;
    unsigned long long _field3[4];
    unsigned long long _field4[4];
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    int _field15;
} CDStruct_cf098810;

typedef struct {
    void *plan;
    int network_index;
} CDStruct_2bc666a5;

typedef struct {
    double m11;
    double m12;
    double m13;
    double m21;
    double m22;
    double m23;
    double m31;
    double m32;
    double m33;
} CDStruct_2d7b3170;

typedef struct {
    double x;
    double y;
    double z;
} CDStruct_31142d93;

typedef struct {
    double _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_d6f6a055;

typedef struct {
    float bias_r;
    float bias_g;
    float bias_b;
    float scale;
    _Bool network_wants_bgr;
} CDStruct_b527887c;

typedef struct {
    float _field1;
} CDStruct_37a3040a;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct CDStruct_183601bc;

typedef struct {
    CDStruct_183601bc _field1;
} CDStruct_0c4e353b;

// Template types
typedef struct array<unsigned char, 17> {
    unsigned char _field1[17];
} array_d2feeb34;

typedef struct set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long>> {
    struct __tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<unsigned long long>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} set_8479fffa;

typedef struct shared_ptr<arkit::FaceTrackingData> {
    struct FaceTrackingData *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_9a05b847;

typedef struct vector<ARPatch, std::__1::allocator<ARPatch>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ARPatch *, std::__1::allocator<ARPatch>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
} vector_f87b304d;

typedef struct vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane>> {
    struct ARTexturedPlane *__begin_;
    struct ARTexturedPlane *__end_;
    struct __compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane>> {
        struct ARTexturedPlane *__value_;
    } __end_cap_;
} vector_f1799d67;

typedef struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
} vector_7584168e;

typedef struct vector<short, std::__1::allocator<short>> {
    short *__begin_;
    short *__end_;
    struct __compressed_pair<short *, std::__1::allocator<short>> {
        short *__value_;
    } __end_cap_;
} vector_00df4d9c;

typedef struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__value_;
    } __end_cap_;
} vector_7984f87c;

#pragma mark Typedef'd Unions

typedef union {
    char __mbstate8[128];
    long long _mbstateL;
} CDUnion_96f6e1fe;

